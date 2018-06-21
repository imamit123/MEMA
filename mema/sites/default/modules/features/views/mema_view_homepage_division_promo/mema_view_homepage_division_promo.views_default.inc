<?php
/**
 * @file
 * mema_view_homepage_division_promo.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mema_view_homepage_division_promo_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homepage_division_promo';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage Division Promo';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Homepage Division Promo';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: AASA Block */
  $handler = $view->new_display('block', 'AASA Block', 'block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_division_promo_link']['id'] = 'field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link']['table'] = 'field_data_field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link']['field'] = 'field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link']['label'] = '';
  $handler->display->display_options['fields']['field_division_promo_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_division_promo_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_division_promo_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_division_promo_link']['type'] = 'link_absolute';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_division_promo_link] ';
  $handler->display->display_options['fields']['title']['alter']['target'] = ' _blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_division_promo_description']['id'] = 'field_division_promo_description';
  $handler->display->display_options['fields']['field_division_promo_description']['table'] = 'field_data_field_division_promo_description';
  $handler->display->display_options['fields']['field_division_promo_description']['field'] = 'field_division_promo_description';
  $handler->display->display_options['fields']['field_division_promo_description']['label'] = '';
  $handler->display->display_options['fields']['field_division_promo_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_division_promo_description']['element_label_colon'] = FALSE;
  /* Field: Content: Media Image */
  $handler->display->display_options['fields']['field_div_pro_media_image']['id'] = 'field_div_pro_media_image';
  $handler->display->display_options['fields']['field_div_pro_media_image']['table'] = 'field_data_field_div_pro_media_image';
  $handler->display->display_options['fields']['field_div_pro_media_image']['field'] = 'field_div_pro_media_image';
  $handler->display->display_options['fields']['field_div_pro_media_image']['label'] = '';
  $handler->display->display_options['fields']['field_div_pro_media_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_div_pro_media_image']['alter']['path'] = '[field_division_promo_link] ';
  $handler->display->display_options['fields']['field_div_pro_media_image']['alter']['target'] = ' _blank';
  $handler->display->display_options['fields']['field_div_pro_media_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_div_pro_media_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_div_pro_media_image']['settings'] = array(
    'image_style' => 'home_page_feature',
    'image_link' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Content: Promo From (field_division_promo_from) */
  $handler->display->display_options['filters']['field_division_promo_from_value']['id'] = 'field_division_promo_from_value';
  $handler->display->display_options['filters']['field_division_promo_from_value']['table'] = 'field_data_field_division_promo_from';
  $handler->display->display_options['filters']['field_division_promo_from_value']['field'] = 'field_division_promo_from_value';
  $handler->display->display_options['filters']['field_division_promo_from_value']['value'] = array(
    'aasa' => 'aasa',
  );
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$functions = GAI::getInstance();
$nid = $row->nid;
$type = $row->type;
$grant = $functions->gtCheckContentAccess($nid, $type);
if($grant) {
 return FALSE;
}
return TRUE;';

  /* Display: HDMA Block */
  $handler = $view->new_display('block', 'HDMA Block', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_division_promo_link']['id'] = 'field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link']['table'] = 'field_data_field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link']['field'] = 'field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link']['label'] = '';
  $handler->display->display_options['fields']['field_division_promo_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_division_promo_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_division_promo_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_division_promo_link']['type'] = 'link_absolute';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_division_promo_link] ';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_division_promo_description']['id'] = 'field_division_promo_description';
  $handler->display->display_options['fields']['field_division_promo_description']['table'] = 'field_data_field_division_promo_description';
  $handler->display->display_options['fields']['field_division_promo_description']['field'] = 'field_division_promo_description';
  $handler->display->display_options['fields']['field_division_promo_description']['label'] = '';
  $handler->display->display_options['fields']['field_division_promo_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_division_promo_description']['element_label_colon'] = FALSE;
  /* Field: Content: Media Image */
  $handler->display->display_options['fields']['field_div_pro_media_image']['id'] = 'field_div_pro_media_image';
  $handler->display->display_options['fields']['field_div_pro_media_image']['table'] = 'field_data_field_div_pro_media_image';
  $handler->display->display_options['fields']['field_div_pro_media_image']['field'] = 'field_div_pro_media_image';
  $handler->display->display_options['fields']['field_div_pro_media_image']['label'] = '';
  $handler->display->display_options['fields']['field_div_pro_media_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_div_pro_media_image']['alter']['path'] = '[field_division_promo_link]';
  $handler->display->display_options['fields']['field_div_pro_media_image']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_div_pro_media_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_div_pro_media_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_div_pro_media_image']['settings'] = array(
    'image_style' => 'home_page_feature',
    'image_link' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Content: Promo From (field_division_promo_from) */
  $handler->display->display_options['filters']['field_division_promo_from_value']['id'] = 'field_division_promo_from_value';
  $handler->display->display_options['filters']['field_division_promo_from_value']['table'] = 'field_data_field_division_promo_from';
  $handler->display->display_options['filters']['field_division_promo_from_value']['field'] = 'field_division_promo_from_value';
  $handler->display->display_options['filters']['field_division_promo_from_value']['value'] = array(
    'hdma' => 'hdma',
  );
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$functions = GAI::getInstance();
$nid = $row->nid;
$type = $row->type;
$grant = $functions->gtCheckContentAccess($nid, $type);
if($grant) {
 return FALSE;
}
return TRUE;';

  /* Display: MFSG Block */
  $handler = $view->new_display('block', 'MFSG Block', 'block_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_division_promo_link']['id'] = 'field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link']['table'] = 'field_data_field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link']['field'] = 'field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link']['label'] = '';
  $handler->display->display_options['fields']['field_division_promo_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_division_promo_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_division_promo_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_division_promo_link']['type'] = 'link_absolute';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_division_promo_link]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_division_promo_description']['id'] = 'field_division_promo_description';
  $handler->display->display_options['fields']['field_division_promo_description']['table'] = 'field_data_field_division_promo_description';
  $handler->display->display_options['fields']['field_division_promo_description']['field'] = 'field_division_promo_description';
  $handler->display->display_options['fields']['field_division_promo_description']['label'] = '';
  $handler->display->display_options['fields']['field_division_promo_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_division_promo_description']['element_label_colon'] = FALSE;
  /* Field: Content: Media Image */
  $handler->display->display_options['fields']['field_div_pro_media_image']['id'] = 'field_div_pro_media_image';
  $handler->display->display_options['fields']['field_div_pro_media_image']['table'] = 'field_data_field_div_pro_media_image';
  $handler->display->display_options['fields']['field_div_pro_media_image']['field'] = 'field_div_pro_media_image';
  $handler->display->display_options['fields']['field_div_pro_media_image']['label'] = '';
  $handler->display->display_options['fields']['field_div_pro_media_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_div_pro_media_image']['alter']['path'] = '[field_division_promo_link]';
  $handler->display->display_options['fields']['field_div_pro_media_image']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_div_pro_media_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_div_pro_media_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_div_pro_media_image']['settings'] = array(
    'image_style' => 'home_page_feature',
    'image_link' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Content: Promo From (field_division_promo_from) */
  $handler->display->display_options['filters']['field_division_promo_from_value']['id'] = 'field_division_promo_from_value';
  $handler->display->display_options['filters']['field_division_promo_from_value']['table'] = 'field_data_field_division_promo_from';
  $handler->display->display_options['filters']['field_division_promo_from_value']['field'] = 'field_division_promo_from_value';
  $handler->display->display_options['filters']['field_division_promo_from_value']['value'] = array(
    'mfsg' => 'mfsg',
  );
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$functions = GAI::getInstance();
$nid = $row->nid;
$type = $row->type;
$grant = $functions->gtCheckContentAccess($nid, $type);
if($grant) {
 return FALSE;
}
return TRUE;';

  /* Display: MERA Block */
  $handler = $view->new_display('block', 'MERA Block', 'block_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_division_promo_link']['id'] = 'field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link']['table'] = 'field_data_field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link']['field'] = 'field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link']['label'] = '';
  $handler->display->display_options['fields']['field_division_promo_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_division_promo_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_division_promo_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_division_promo_link']['type'] = 'link_absolute';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_division_promo_link]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_division_promo_description']['id'] = 'field_division_promo_description';
  $handler->display->display_options['fields']['field_division_promo_description']['table'] = 'field_data_field_division_promo_description';
  $handler->display->display_options['fields']['field_division_promo_description']['field'] = 'field_division_promo_description';
  $handler->display->display_options['fields']['field_division_promo_description']['label'] = '';
  $handler->display->display_options['fields']['field_division_promo_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_division_promo_description']['element_label_colon'] = FALSE;
  /* Field: Content: Media Image */
  $handler->display->display_options['fields']['field_div_pro_media_image']['id'] = 'field_div_pro_media_image';
  $handler->display->display_options['fields']['field_div_pro_media_image']['table'] = 'field_data_field_div_pro_media_image';
  $handler->display->display_options['fields']['field_div_pro_media_image']['field'] = 'field_div_pro_media_image';
  $handler->display->display_options['fields']['field_div_pro_media_image']['label'] = '';
  $handler->display->display_options['fields']['field_div_pro_media_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_div_pro_media_image']['alter']['path'] = '[field_division_promo_link]';
  $handler->display->display_options['fields']['field_div_pro_media_image']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_div_pro_media_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_div_pro_media_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_div_pro_media_image']['settings'] = array(
    'image_style' => 'home_page_feature',
    'image_link' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Content: Promo From (field_division_promo_from) */
  $handler->display->display_options['filters']['field_division_promo_from_value']['id'] = 'field_division_promo_from_value';
  $handler->display->display_options['filters']['field_division_promo_from_value']['table'] = 'field_data_field_division_promo_from';
  $handler->display->display_options['filters']['field_division_promo_from_value']['field'] = 'field_division_promo_from_value';
  $handler->display->display_options['filters']['field_division_promo_from_value']['value'] = array(
    'mera' => 'mera',
  );
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$functions = GAI::getInstance();
$nid = $row->nid;
$type = $row->type;
$grant = $functions->gtCheckContentAccess($nid, $type);
if($grant) {
 return FALSE;
}
return TRUE;';

  /* Display: OESA Block */
  $handler = $view->new_display('block', 'OESA Block', 'block_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_division_promo_link']['id'] = 'field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link']['table'] = 'field_data_field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link']['field'] = 'field_division_promo_link';
  $handler->display->display_options['fields']['field_division_promo_link']['label'] = '';
  $handler->display->display_options['fields']['field_division_promo_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_division_promo_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_division_promo_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_division_promo_link']['type'] = 'link_absolute';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_division_promo_link]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_division_promo_description']['id'] = 'field_division_promo_description';
  $handler->display->display_options['fields']['field_division_promo_description']['table'] = 'field_data_field_division_promo_description';
  $handler->display->display_options['fields']['field_division_promo_description']['field'] = 'field_division_promo_description';
  $handler->display->display_options['fields']['field_division_promo_description']['label'] = '';
  $handler->display->display_options['fields']['field_division_promo_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_division_promo_description']['element_label_colon'] = FALSE;
  /* Field: Content: Media Image */
  $handler->display->display_options['fields']['field_div_pro_media_image']['id'] = 'field_div_pro_media_image';
  $handler->display->display_options['fields']['field_div_pro_media_image']['table'] = 'field_data_field_div_pro_media_image';
  $handler->display->display_options['fields']['field_div_pro_media_image']['field'] = 'field_div_pro_media_image';
  $handler->display->display_options['fields']['field_div_pro_media_image']['label'] = '';
  $handler->display->display_options['fields']['field_div_pro_media_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_div_pro_media_image']['alter']['path'] = '[field_division_promo_link]';
  $handler->display->display_options['fields']['field_div_pro_media_image']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_div_pro_media_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_div_pro_media_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_div_pro_media_image']['settings'] = array(
    'image_style' => 'home_page_feature',
    'image_link' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Content: Promo From (field_division_promo_from) */
  $handler->display->display_options['filters']['field_division_promo_from_value']['id'] = 'field_division_promo_from_value';
  $handler->display->display_options['filters']['field_division_promo_from_value']['table'] = 'field_data_field_division_promo_from';
  $handler->display->display_options['filters']['field_division_promo_from_value']['field'] = 'field_division_promo_from_value';
  $handler->display->display_options['filters']['field_division_promo_from_value']['value'] = array(
    'oesa' => 'oesa',
  );
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$functions = GAI::getInstance();
$nid = $row->nid;
$type = $row->type;
$grant = $functions->gtCheckContentAccess($nid, $type);
if($grant) {
 return FALSE;
}
return TRUE;';
  $export['homepage_division_promo'] = $view;

  return $export;
}
