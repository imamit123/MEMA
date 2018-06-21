<?php
/**
 * @file
 * divisions_content_type_committee.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function divisions_content_type_committee_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function divisions_content_type_committee_node_info() {
  $items = array(
    'committee' => array(
      'name' => t('Committee'),
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
