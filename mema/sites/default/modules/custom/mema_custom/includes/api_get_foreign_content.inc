<?php
/**
 * File: file to hold mema API that is called to pass content into MEMA
 */

/**
 * Implements function to import content/node into MEMA
 */
function api_get_foreign_content() {
  $functions = GAI::getInstance();
  return 'HII';
  //out($_REQUEST); die;
  // get all POST parameters
  $auth_key = $_REQUEST['system_key'];
  
  // check if auth key matches
  $system_key = $functions->gtGetSystemKey();
  if($system_key !== $auth_key) {
  	drupal_access_denied();
  	return 0;
  }

  $node = $_REQUEST['node'];
  $node = unserialize($node);
  // generate node
  $response = node_export_import($node);
  return 1;
}