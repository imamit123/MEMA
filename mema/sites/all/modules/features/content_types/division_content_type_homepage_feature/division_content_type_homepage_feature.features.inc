<?php
/**
 * @file
 * division_content_type_homepage_feature.features.inc
 */

/**
 * Implements hook_node_info().
 */
function division_content_type_homepage_feature_node_info() {
  $items = array(
    'homepage_feature' => array(
      'name' => t('Homepage Feature'),
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
