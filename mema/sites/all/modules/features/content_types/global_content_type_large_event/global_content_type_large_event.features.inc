<?php
/**
 * @file
 * global_content_type_large_event.features.inc
 */

/**
 * Implements hook_node_info().
 */
function global_content_type_large_event_node_info() {
  $items = array(
    'large_event' => array(
      'name' => t('Large Event'),
      'base' => 'node_content',
      'description' => t('Large Event
'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
