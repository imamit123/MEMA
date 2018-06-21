<?php
function private_login() {
  if(user_is_logged_in()) {
    drupal_set_message(t('You are already logged in'), 'status');
    drupal_goto('user/');
    exit;
  }
  return drupal_render(drupal_get_form('user_login'));
}
?>