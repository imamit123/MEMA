<?php
/**
 * @file
 * global_taxonomy_event.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function global_taxonomy_event_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Regional',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => '69a802cb-fbcd-4830-97f0-0d487963ad47',
    'vocabulary_machine_name' => 'event_type',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Teleconference',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '78f67f49-40ee-4e7b-90f0-69aca73ede7d',
    'vocabulary_machine_name' => 'event_type',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Council Meeting',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '91581b63-46f9-402d-bc93-bc1ed6953a3d',
    'vocabulary_machine_name' => 'event_type',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Town Hall',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => '96aba9ba-3363-4abe-b3f2-862a68a680e9',
    'vocabulary_machine_name' => 'event_type',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Conference',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '982ef491-8dc8-4894-8961-3ed1073d72cf',
    'vocabulary_machine_name' => 'event_type',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Breakfast',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd0999e37-4cfa-4f98-8d6b-69aae66a1672',
    'vocabulary_machine_name' => 'event_type',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Webinar',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => 'fb777cbd-39f5-4dcc-ad7f-31638d03e9e7',
    'vocabulary_machine_name' => 'event_type',
    'url_alias' => array(),
  );
  return $terms;
}
