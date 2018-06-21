<?php
/**
 * @file
 * global_content_type_person.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function global_content_type_person_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Staff',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1128a058-ca69-422d-beb6-fb30453303cd',
    'vocabulary_machine_name' => 'member_type',
    'url_alias' => array(
      0 => array(
        'alias' => 'member-type/staff',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Board',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '596c79a8-217a-4209-b0ec-930e85d10ee3',
    'vocabulary_machine_name' => 'member_type',
    'url_alias' => array(
      0 => array(
        'alias' => 'member-type/board',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
