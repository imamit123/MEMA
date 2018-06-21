<?php
/**
 * @file
 * global_workflow_taxonomy.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function global_workflow_taxonomy_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Content Editor',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4efbe297-4893-4c99-980d-4a927d2f5480',
    'vocabulary_machine_name' => 'mema_workflow',
    'url_alias' => array(
      0 => array(
        'alias' => 'mema-workflow/content-editor',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '8f211a99-e957-4bfa-8fe5-8ef48f6dbe9b',
    ),
  );
  $terms[] = array(
    'name' => 'Content Administrator',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8f211a99-e957-4bfa-8fe5-8ef48f6dbe9b',
    'vocabulary_machine_name' => 'mema_workflow',
    'url_alias' => array(
      0 => array(
        'alias' => 'mema-workflow/content-administrator',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
