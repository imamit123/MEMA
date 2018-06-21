<?php
/**
 * @file
 * global_content_type_background_image.features.inc
 */

/**
 * Implements hook_node_info().
 */
function global_content_type_background_image_node_info() {
  $items = array(
    'background_image' => array(
      'name' => t('Background Image'),
      'base' => 'node_content',
      'description' => t('Add Cover Image for Advocacy Basic Page , Advocacy Landing Page, News Page, Event Page,Team page, Committee Page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
