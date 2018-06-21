<?php
/**
 * @file
 * mema_news_feeds_exporter.features.inc
 */

/**
 * Implements hook_views_api().
 */
function mema_news_feeds_exporter_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
