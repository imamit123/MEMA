<?php
/**
 * @file
 * division_division_promo_feeds_exporter_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function division_division_promo_feeds_exporter_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'feeds';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Feeds Exporter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Feeds';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: File Usage: File */
  $handler->display->display_options['relationships']['node_to_file']['id'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['node_to_file']['field'] = 'node_to_file';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_division_promo_description']['id'] = 'field_division_promo_description';
  $handler->display->display_options['fields']['field_division_promo_description']['table'] = 'field_data_field_division_promo_description';
  $handler->display->display_options['fields']['field_division_promo_description']['field'] = 'field_division_promo_description';
  $handler->display->display_options['fields']['field_division_promo_description']['label'] = 'description';
  $handler->display->display_options['fields']['field_division_promo_description']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_division_promo_link']['id'] = 'field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link']['table'] = 'field_data_field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link']['field'] = 'field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link']['label'] = 'link';
  $handler->display->display_options['fields']['field_division_promo_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_division_promo_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_division_promo_link']['type'] = 'link_plain';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_division_promo_link_1']['id'] = 'field_division_promo_link_1';
  $handler->display->display_options['fields']['field_division_promo_link_1']['table'] = 'field_data_field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link_1']['field'] = 'field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link_1']['label'] = 'link_title';
  $handler->display->display_options['fields']['field_division_promo_link_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_division_promo_link_1']['alter']['text'] = '[field_division_promo_link_1-title]';
  $handler->display->display_options['fields']['field_division_promo_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_division_promo_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_division_promo_link_1']['type'] = 'link_title_plain';
  /* Field: Content: Promo From */
  $handler->display->display_options['fields']['field_division_promo_from']['id'] = 'field_division_promo_from';
  $handler->display->display_options['fields']['field_division_promo_from']['table'] = 'field_data_field_division_promo_from';
  $handler->display->display_options['fields']['field_division_promo_from']['field'] = 'field_division_promo_from';
  $handler->display->display_options['fields']['field_division_promo_from']['label'] = 'promo_from';
  $handler->display->display_options['fields']['field_division_promo_from']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_division_promo_from']['type'] = 'list_key';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_division_promo_media']['id'] = 'field_division_promo_media';
  $handler->display->display_options['fields']['field_division_promo_media']['table'] = 'field_data_field_division_promo_media';
  $handler->display->display_options['fields']['field_division_promo_media']['field'] = 'field_division_promo_media';
  $handler->display->display_options['fields']['field_division_promo_media']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_division_promo_media']['alter']['text'] = '[field_division_promo_media-fid]';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'img_pth';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$fid = $row->field_division_promo_media
$fobj = file_load($fid);
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'division_promo' => 'division_promo',
  );

  /* Display: Division Promo Exporter */
  $handler = $view->new_display('views_data_export', 'Division Promo Exporter', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_division_promo_description']['id'] = 'field_division_promo_description';
  $handler->display->display_options['fields']['field_division_promo_description']['table'] = 'field_data_field_division_promo_description';
  $handler->display->display_options['fields']['field_division_promo_description']['field'] = 'field_division_promo_description';
  $handler->display->display_options['fields']['field_division_promo_description']['label'] = 'description';
  $handler->display->display_options['fields']['field_division_promo_description']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_division_promo_link']['id'] = 'field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link']['table'] = 'field_data_field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link']['field'] = 'field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link']['label'] = 'link';
  $handler->display->display_options['fields']['field_division_promo_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_division_promo_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_division_promo_link']['type'] = 'link_plain';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_division_promo_link_1']['id'] = 'field_division_promo_link_1';
  $handler->display->display_options['fields']['field_division_promo_link_1']['table'] = 'field_data_field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link_1']['field'] = 'field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link_1']['label'] = 'link_title';
  $handler->display->display_options['fields']['field_division_promo_link_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_division_promo_link_1']['alter']['text'] = '[field_division_promo_link_1-title]';
  $handler->display->display_options['fields']['field_division_promo_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_division_promo_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_division_promo_link_1']['type'] = 'link_title_plain';
  /* Field: Content: Promo From */
  $handler->display->display_options['fields']['field_division_promo_from']['id'] = 'field_division_promo_from';
  $handler->display->display_options['fields']['field_division_promo_from']['table'] = 'field_data_field_division_promo_from';
  $handler->display->display_options['fields']['field_division_promo_from']['field'] = 'field_division_promo_from';
  $handler->display->display_options['fields']['field_division_promo_from']['label'] = 'promo_from';
  $handler->display->display_options['fields']['field_division_promo_from']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_division_promo_from']['type'] = 'list_key';
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['uri']['label'] = 'image_path';
  $handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
  /* Field: Content: Media Author */
  $handler->display->display_options['fields']['field_div_pro_media_author']['id'] = 'field_div_pro_media_author';
  $handler->display->display_options['fields']['field_div_pro_media_author']['table'] = 'field_data_field_div_pro_media_author';
  $handler->display->display_options['fields']['field_div_pro_media_author']['field'] = 'field_div_pro_media_author';
  $handler->display->display_options['fields']['field_div_pro_media_author']['label'] = 'media_author';
  $handler->display->display_options['fields']['field_div_pro_media_author']['element_label_colon'] = FALSE;
  /* Field: Content: Media Image */
  $handler->display->display_options['fields']['field_div_pro_media_image']['id'] = 'field_div_pro_media_image';
  $handler->display->display_options['fields']['field_div_pro_media_image']['table'] = 'field_data_field_div_pro_media_image';
  $handler->display->display_options['fields']['field_div_pro_media_image']['field'] = 'field_div_pro_media_image';
  $handler->display->display_options['fields']['field_div_pro_media_image']['label'] = 'media_alt';
  $handler->display->display_options['fields']['field_div_pro_media_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_div_pro_media_image']['alter']['text'] = '[field_div_pro_media_image-alt]';
  $handler->display->display_options['fields']['field_div_pro_media_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_div_pro_media_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_div_pro_media_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['path'] = 'promo/feeds';
  $export['feeds'] = $view;

  return $export;
}
