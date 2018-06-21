<?php
/**
 * @file
 * mema_promo_feed_importer_for_hdma.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mema_promo_feed_importer_for_hdma_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
