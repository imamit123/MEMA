<?php

/**
 * @file
 * Page callbacks for OpenID Connect.
 */

/**
 * Page callback: Page whereto OpenID Connect login provider redirects.
 */
function openid_connect_redirect_page($client_name) {
  // Delete the state token, since it's already been confirmed.
  unset($_SESSION['openid_connect_state']);

  // Get parameters from the session, and then clean up.
  $parameters = array(
    'destination' => 'user',
    'op' => 'login',
    'connect_uid' => NULL,
  );
  foreach ($parameters as $key => $default) {
    if (isset($_SESSION['openid_connect_' . $key])) {
      $parameters[$key] = $_SESSION['openid_connect_' . $key];
      unset($_SESSION['openid_connect_' . $key]);
    }
  }
  $destination = $parameters['destination'];

  $client = openid_connect_get_client($client_name);
  if (!isset($_GET['error']) && (!$client || !isset($_GET['code']))) {
    // In case we don't have an error, but the client could not be loaded or
    // there is no state token specified, the URI is probably being visited
    // outside of the login flow.
    return MENU_NOT_FOUND;
  }

  $provider_param = array('@provider' => $client->getLabel());

  if (isset($_GET['error'])) {
    if ($_GET['error'] == 'access_denied') {
      // If we have an "access denied" error, that means the user hasn't granted
      // the authorization for the claims.
      drupal_set_message(t('Logging in with @provider has been canceled.', $provider_param), 'warning');
    }
    else {
      // Any other error should be logged. E.g. invalid scope.
      $variables = array(
        '@error' => $_GET['error'],
        '@details' => $_GET['error_description'],
      );
      watchdog('openid_connect_' . $client_name, 'Authorization failed: @error. Details: @details', $variables, WATCHDOG_ERROR);
    }
  }
  else {
    // Process the login or connect operations.
    $tokens = $client->retrieveTokens($_GET['code']);

    if ($tokens) {
      // custom session varialble to store access token
      $_SESSION['sso_sf_token'] = $tokens['access_token'];

      if ($parameters['op'] === 'login') {
        $success = openid_connect_complete_authorization($client, $tokens, $destination);
        if (!$success) {
          drupal_set_message(t('Logging in with @provider could not be completed due to an error.', $provider_param), 'error');
        }
      }
      elseif ($parameters['op'] === 'connect' && $parameters['connect_uid'] === $GLOBALS['user']->uid) {
        $success = openid_connect_connect_current_user($client, $tokens);
        if ($success) {
          drupal_set_message(t('Account successfully connected with @provider.', $provider_param));
        }
        else {
          drupal_set_message(t('Connecting with @provider could not be completed due to an error.', $provider_param), 'error');
        }
      }
    }
  }

   // It's possible to set 'options' in the redirect destination.
  if(isset($_COOKIE['STYXKEY_cookie_name'])) {
    $dest = $_COOKIE['STYXKEY_cookie_name'];

    $cookiePath = "/";
    setcookie("STYXKEY_cookie_name", NULL, time()-3600, $cookiePath);
    unset ($_COOKIE['STYXKEY_cookie_name']);

    if($dest != '') {
      global $base_url;

      // formulate the redirection URL.
      $first_char = substr($dest, 0, 1);
      $sub_base_url = substr($base_url, 7);
      if (strpos($dest, $sub_base_url) !== FALSE) {
        $dest = $dest;
      } else {
        if (substr($dest, 0, 1) != '/') {
          $dest = $base_url . '/' . $dest;
        } else {
          $dest = $base_url . $dest;
        }
      }
      unset($_REQUEST['destination']);
      header('Location: ' . $dest);
      exit;
    } else {
      $destination = "<front>";
      drupal_goto($destination);
    }
  } else {
    $destination = "<front>";
    drupal_goto($destination);
  }
}
