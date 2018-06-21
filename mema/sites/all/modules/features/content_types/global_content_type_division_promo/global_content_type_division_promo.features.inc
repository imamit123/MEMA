<?php
/**
 * @file
 * global_content_type_division_promo.features.inc
 */

/**
 * Implements hook_node_info().
 */
function global_content_type_division_promo_node_info() {
  $items = array(
    'division_promo' => array(
      'name' => t('Division Promo'),
      'base' => 'node_content',
      'description' => t('Display Content For Division Promo'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
