<?php
/**
 * @file
 * global_taxonomy_resource_type.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function global_taxonomy_resource_type_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Supplier Barometer',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '112a7a42-992c-4f94-9348-62d94f076b3b',
    'vocabulary_machine_name' => 'resource_type',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Industry Analysis Report',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '23f0628f-c235-4b3e-a3c9-db6d8d0230f5',
    'vocabulary_machine_name' => 'resource_type',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Survey & Research',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '59d9ab53-2dee-451b-8359-9325c5013c78',
    'vocabulary_machine_name' => 'resource_type',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Special Report',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '78e21046-6ff6-4b49-b87e-d16ee7bf48d8',
    'vocabulary_machine_name' => 'resource_type',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'External Resource',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => '9b562b03-39ca-4a76-8447-0158236beeb4',
    'vocabulary_machine_name' => 'resource_type',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Other Publication',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '9c7c4d09-de11-46f1-91c2-9da70f56005b',
    'vocabulary_machine_name' => 'resource_type',
    'url_alias' => array(),
  );
  return $terms;
}
