<?php
/**
 * @file
 * global_content_type_small_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function global_content_type_small_event_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function global_content_type_small_event_node_info() {
  $items = array(
    'small_event' => array(
      'name' => t('Small Event'),
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
