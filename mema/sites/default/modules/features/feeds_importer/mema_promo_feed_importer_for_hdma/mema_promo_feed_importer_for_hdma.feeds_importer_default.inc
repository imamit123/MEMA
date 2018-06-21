<?php
/**
 * @file
 * mema_promo_feed_importer_for_hdma.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function mema_promo_feed_importer_for_hdma_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'hdma_division_promo_importer';
  $feeds_importer->config = array(
    'name' => 'Hdma Division Promo Importer',
    'description' => 'Imports HDMA division promo content',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'description',
            'target' => 'field_division_promo_description',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'link',
            'target' => 'field_division_promo_link:url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'link_title',
            'target' => 'field_division_promo_link:title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'promo_from',
            'target' => 'field_division_promo_from',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'media_author',
            'target' => 'field_div_pro_media_author',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'image_path',
            'target' => 'field_div_pro_media_image:uri',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'media_alt',
            'target' => 'field_div_pro_media_image:alt',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'update_non_existent' => 'delete',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'division_promo',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['hdma_division_promo_importer'] = $feeds_importer;

  return $export;
}
