<?php
/**
 * @file
 * global_content_type_homepage_video.features.inc
 */

/**
 * Implements hook_node_info().
 */
function global_content_type_homepage_video_node_info() {
  $items = array(
    'homepage_background_video' => array(
      'name' => t('Homepage Background Video'),
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
