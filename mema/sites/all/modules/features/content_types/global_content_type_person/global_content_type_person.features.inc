<?php
/**
 * @file
 * global_content_type_person.features.inc
 */

/**
 * Implements hook_node_info().
 */
function global_content_type_person_node_info() {
  $items = array(
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => t('Add Content For Team Page'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
