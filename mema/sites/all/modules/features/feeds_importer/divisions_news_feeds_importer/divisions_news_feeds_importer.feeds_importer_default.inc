<?php
/**
 * @file
 * divisions_news_feeds_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function divisions_news_feeds_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mema_news_importer';
  $feeds_importer->config = array(
    'name' => 'MEMA News Importer',
    'description' => 'Feeds importer to import news from MEMA',
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
            'source' => 'article_date',
            'target' => 'field_article_date:start',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'article_type',
            'target' => 'field_article_type',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'author_title',
            'target' => 'field_article_author:title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'author_url',
            'target' => 'field_article_author:url',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'featured',
            'target' => 'field_article_featured',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'media_article_author',
            'target' => 'field_article_media_author',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'member_only',
            'target' => 'field_article_member_only',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'source',
            'target' => 'field_source',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'subtitle',
            'target' => 'field_subtitle',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'img_path',
            'target' => 'field_media_article_image:uri',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'img_title',
            'target' => 'field_media_article_image:title',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'img_alt',
            'target' => 'field_media_article_image:alt',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'article',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['mema_news_importer'] = $feeds_importer;

  return $export;
}
