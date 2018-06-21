<?php
/**
 * @file
 * global_content_type_media.features.inc
 */

/**
 * Implements hook_node_info().
 */
function global_content_type_media_node_info() {
  $items = array(
    'media' => array(
      'name' => t('Media'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
