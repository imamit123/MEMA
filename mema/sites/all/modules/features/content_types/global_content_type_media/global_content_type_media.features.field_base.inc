<?php
/**
 * @file
 * global_content_type_media.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function global_content_type_media_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_upload_media'
  $field_bases['field_upload_media'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_upload_media',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  return $field_bases;
}
