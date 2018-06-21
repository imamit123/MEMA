<?php
/**
 * @file
 * global_content_type_homepage_hero.features.inc
 */

/**
 * Implements hook_node_info().
 */
function global_content_type_homepage_hero_node_info() {
  $items = array(
    'homepage_hero' => array(
      'name' => t('Homepage Hero'),
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
