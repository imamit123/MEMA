<?php
/**
 * @file
 * divisions_content_type_homepage_right_side_feature_content.features.inc
 */

/**
 * Implements hook_node_info().
 */
function divisions_content_type_homepage_right_side_feature_content_node_info() {
  $items = array(
    'homepage_right_side_feature_cont' => array(
      'name' => t('Homepage Right Side Feature Content'),
      'base' => 'node_content',
      'description' => t('Homepage Right Side Feature Content block content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
