<?php

/*******************************************************************************
 *                           Drupal default  settings                         *
 ******************************************************************************/
$update_free_access = FALSE;
ini_set('session.gc_probability', 1);
ini_set('session.gc_divisor', 100);
ini_set('session.gc_maxlifetime', 200000);
ini_set('session.cookie_lifetime', 2000000);

/*******************************************************************************
 *                           Pantheon-specific  settings                       *
 ******************************************************************************/
$live_domain_protocol = 'https://';

if (defined('PANTHEON_ENVIRONMENT')) {
  /*******************************************************************************
   *                           All Pantheon environments                         *
   ******************************************************************************/
  $primary_domain_name = 'www.mema.org';
  $live_domain_names = array(
    $primary_domain_name,
    'live-' . $_ENV["PANTHEON_SITE_NAME"] . '.pantheonsite.io',
  );
  
  $cli = (php_sapi_name() == 'cli');
  // Extract Pantheon environmental configuration.
  extract(json_decode($_SERVER['PRESSFLOW_SETTINGS'], TRUE));

  // Forcing IMCE to use image_get_info() for images processing.
  $conf['imce_image_get_info'] = 1;
  
  // Fix TMP paths for various modules.
  // See https://pantheon.io/docs/temp-files/
  $conf['views_data_export_directory'] = 'private://tmp';

  // Redis configs.
  $conf['redis_client_interface'] = 'PhpRedis';
  $conf['cache_backends'][] = 'sites/default/modules/contrib/redis/redis.autoload.inc';
  $conf['cache_default_class'] = 'Redis_Cache';
  $conf['cache_prefix'] = array('default' => 'pantheon-redis');
  $conf['cache_class_cache_form'] = 'DrupalDatabaseCache';
  $conf['lock_inc'] = 'sites/default/modules/contrib/redis/redis.lock.inc';

  // // Option A: Higher performance for smaller page counts.
  // // High performance - no hook_boot(), no hook_exit(), ignores Drupal IP blacklists.
  // $conf['page_cache_without_database'] = TRUE;
  // $conf['page_cache_invoke_hooks'] = FALSE;
  // // Explicitly set page_cache_maximum_age as database won't be available.
  // $conf['page_cache_maximum_age'] = 900;

  //Optiopn B: Higher performance for larger page counts.
  //$conf['cache_class_cache_page'] = 'DrupalDatabaseCache';

  // Pantheon Solr module - schema.xml file to post by default.
  //$conf['pantheon_apachesolr_schema'] = 'sites/all/modules/contrib/search_api_solr/solr-conf/3.x/schema.xml';

  // SMTP module configuration.
  // $conf['smtp_on'] = 1;
  // $conf['smtp_host'] = 'smtp.gmail.com';
  // $conf['smtp_port'] = 587;
  // $conf['smtp_protocol'] = 'tls';
  // $conf['smtp_username'] = '';
  // $conf['smtp_password'] = '';

  // Include private configs.
  if (file_exists(__DIR__ . DIRECTORY_SEPARATOR . 'files/private/settings/private.settings.php')) {
    require_once __DIR__ . DIRECTORY_SEPARATOR . 'files/private/settings/private.settings.php';
  }

  // Require HTTPS.
  if ($live_domain_protocol == 'https://') {
    if (isset($_SERVER['PANTHEON_ENVIRONMENT']) &&
      ($_SERVER['HTTPS'] === 'OFF') &&
      // Check if Drupal or WordPress is running via command line
      (php_sapi_name() != "cli")) {
      if (!isset($_SERVER['HTTP_X_SSL']) ||
      (isset($_SERVER['HTTP_X_SSL']) && $_SERVER['HTTP_X_SSL'] != 'ON')) {
        header('HTTP/1.0 301 Moved Permanently');
        header('Location: https://'. $_SERVER['HTTP_HOST'] . $_SERVER['REQUEST_URI']);
        exit();
      }
    }
  }
  /*******************************************************************************
   *                           Non-LIVE Pantheon environments                    *
   ******************************************************************************/

  if (PANTHEON_ENVIRONMENT != 'live') {   
    /**
     * Reroute Email module:
     *
     * To override specific variables and ensure that email rerouting is enabled or
     * disabled, change the values below accordingly for your site.
     */
    // Enable email rerouting.
    $conf['reroute_email_enable'] = 1;
    // Space, comma, or semicolon-delimited list of email addresses to pass
    // through. Every destination email address which is not on this list will be
    // rerouted to the first address on the list.
    // $conf['reroute_email_address'] = "";
    // Set Base URL
    $base_url = $live_domain_protocol. $_SERVER['HTTP_HOST']; // NO trailing slash!
  }

  /*******************************************************************************
   *                           Specific non-LIVE Pantheon environments           *
   ******************************************************************************/
  // if (PANTHEON_ENVIRONMENT == 'dev') {
  //   $conf['page_cache_without_database'] = FALSE;
  //   $conf['page_cache_invoke_hooks'] = TRUE;
  //   // Explicitly set page_cache_maximum_age as database won't be available.
  //   $conf['page_cache_maximum_age'] = 900;
  // }

  // if (PANTHEON_ENVIRONMENT == 'test') {
    
  // }

  /*******************************************************************************
   *                           Live Pantheon environment                         *
   ******************************************************************************/
  
  if (PANTHEON_ENVIRONMENT == 'live') {
    $conf['reroute_email_enable'] = 0;
    //$conf['error_level'] = 0;
    if (!$cli) {
      // Redirect to reference domain name.
      if (!in_array($_SERVER['HTTP_HOST'], $live_domain_names)) {
        header('HTTP/1.0 301 Moved Permanently');
        header('Location: '. $live_domain_protocol. $primary_domain_name. $_SERVER['REQUEST_URI']);
        exit();
      }
      // Set Base URL and cookie domain
      $base_url = $live_domain_protocol. $_SERVER['HTTP_HOST']; // NO trailing slash!
      $cookie_domain = '.'. $_SERVER['HTTP_HOST'];
    } else {
      // For Drush
      $base_url = $live_domain_protocol. $primary_domain_name;
    } 

    // Include Live-specific configs
    if (file_exists(__DIR__ . DIRECTORY_SEPARATOR . 'files/private/settings/live.settings.php')) {
      require_once __DIR__ . DIRECTORY_SEPARATOR . 'files/private/settings/live.settings.php';
    }
  }
}

/*******************************************************************************
 *                           Site-specific  customisations                     *
 ******************************************************************************/

/*
 * Settings from previous hosting go here
 * Make sure they don't conflict with Pantheon-specific configs.
 *
*/
$conf['404_fast_paths_exclude'] = '/\/(?:styles)|(?:system\/files)\/|(?:sitemap.txt)|(?:robots.txt)/';
$conf['404_fast_paths'] = '/\.(?:txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i';
$conf['404_fast_html'] = '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN" "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd"><html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>';
drupal_fast_404();
$drupal_hash_salt = 'sP_pO3XM8i-j9Ff2fINct18lByvfowIwlRFsbpyI6w8';

/*******************************************************************************
 *                           Overrides for local development                   *
 ******************************************************************************/

// Pull in local.settings.php.
if (file_exists(__DIR__ . DIRECTORY_SEPARATOR . 'local.settings.php')) {
  require_once __DIR__ . DIRECTORY_SEPARATOR . 'local.settings.php';
}


/*
 *             D8 Cache Module Configurations
*/
$conf['cache_backends'][] = 'sites/all/modules/contrib/d8cache/d8cache-ac.cache.inc';
$conf['cache_class_cache_views_data'] = 'D8CacheAttachmentsCollector';
$conf['cache_class_cache_block'] = 'D8CacheAttachmentsCollector';
$conf['cache_class_cache_page'] = 'D8Cache';

