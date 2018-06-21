<?php
/**
 * @file
 * mema_article_node_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function mema_article_node_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'article_node_importer';
  $feeds_importer->config = array(
    'name' => 'Article Node Importer',
    'description' => 'Imports article nodes',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'public://feeds/article',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
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
            'source' => 'short_title',
            'target' => 'field_subtitle',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'body',
            'target' => 'body',
            'format' => 'full_html',
          ),
          3 => array(
            'source' => 'article_type',
            'target' => 'field_article_type',
            'term_search' => '1',
            'autocreate' => 0,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'article',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['article_node_importer'] = $feeds_importer;

  return $export;
}
