<?php
/**
 * @file
 * mema_view_advocacy_landing_page_block_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mema_view_advocacy_landing_page_block_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'advocacy_landing_page_block';
  $view->description = 'Block display in advocacy landing page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Advocacy Landing Page Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Advocacy Landing Page Block Pos1-pos2';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Media Article Image */
  $handler->display->display_options['fields']['field_media_article_image']['id'] = 'field_media_article_image';
  $handler->display->display_options['fields']['field_media_article_image']['table'] = 'field_data_field_media_article_image';
  $handler->display->display_options['fields']['field_media_article_image']['field'] = 'field_media_article_image';
  $handler->display->display_options['fields']['field_media_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_media_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_article_image']['settings'] = array(
    'image_style' => 'home_page_feature',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'text_plain';
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
    'article' => 'article',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    86 => '86',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'article_type';

  /* Display: Advocacy Page Block Pos1-pos2 */
  $handler = $view->new_display('block', 'Advocacy Page Block Pos1-pos2', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Advocacy Page Block Pos1-pos2';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'SUPPLIER SPIN';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Media Article Image */
  $handler->display->display_options['fields']['field_media_article_image']['id'] = 'field_media_article_image';
  $handler->display->display_options['fields']['field_media_article_image']['table'] = 'field_data_field_media_article_image';
  $handler->display->display_options['fields']['field_media_article_image']['field'] = 'field_media_article_image';
  $handler->display->display_options['fields']['field_media_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_media_article_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_media_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_article_image']['settings'] = array(
    'image_style' => 'home_page_feature',
    'image_link' => '',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$default_image = \'\';
//out($data->_field_data[\'nid\'][\'entity\']->field_small_event_image[\'und\'][0][\'uri\']);
$functions = GAI::getInstance();
$views_name = \'events\';
$style = \'home_page_feature\';
$img_url = $functions->gtdefaultImage($views_name);
if(!empty($img_url) && !is_null($img_url)) {
  $default_image = image_style_url($style, $img_url);
}
if (array_key_exists(\'und\', $data->_field_data[\'nid\'][\'entity\']->field_common_thumbnail_image)) {
  $image_public_url = $data->_field_data[\'nid\'][\'entity\']->field_common_thumbnail_image[\'und\'][0][\'uri\'];
}
if(!empty($image_public_url) && !is_null($image_public_url)) {
  $image_path = image_style_url($style, $image_public_url);  
  print $output= \'<img src="\'.$image_path.\'">\';
}else{
 print $output= \'<img src="\'.$default_image.\'">\';
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['alter']['text'] = '<div class="advocacy-title">[title]</div>
<div>[field_subtitle]</div>';
  $handler->display->display_options['fields']['field_subtitle']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'text_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="advocacy-title">[title]</div>
';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Article Date (field_article_date) */
  $handler->display->display_options['sorts']['field_article_date_value']['id'] = 'field_article_date_value';
  $handler->display->display_options['sorts']['field_article_date_value']['table'] = 'field_data_field_article_date';
  $handler->display->display_options['sorts']['field_article_date_value']['field'] = 'field_article_date_value';
  $handler->display->display_options['sorts']['field_article_date_value']['order'] = 'DESC';

  /* Display: Advocacy Page Block Pos3-pos4 */
  $handler = $view->new_display('block', 'Advocacy Page Block Pos3-pos4', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Advocacy Page Block Pos3-pos4';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'SUPPLIER SPIN';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Media Article Image */
  $handler->display->display_options['fields']['field_media_article_image']['id'] = 'field_media_article_image';
  $handler->display->display_options['fields']['field_media_article_image']['table'] = 'field_data_field_media_article_image';
  $handler->display->display_options['fields']['field_media_article_image']['field'] = 'field_media_article_image';
  $handler->display->display_options['fields']['field_media_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_media_article_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_media_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_article_image']['settings'] = array(
    'image_style' => 'home_page_feature',
    'image_link' => '',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$default_image = \'\';
//out($data->_field_data[\'nid\'][\'entity\']->field_small_event_image[\'und\'][0][\'uri\']);
$functions = GAI::getInstance();
$views_name = \'events\';
$style = \'home_page_feature\';
$img_url = $functions->gtdefaultImage($views_name);
if(!empty($img_url) && !is_null($img_url)) {
  $default_image = image_style_url($style, $img_url);
}
if (array_key_exists(\'und\', $data->_field_data[\'nid\'][\'entity\']->field_common_thumbnail_image)) {
  $image_public_url = $data->_field_data[\'nid\'][\'entity\']->field_common_thumbnail_image[\'und\'][0][\'uri\'];
}
if(!empty($image_public_url) && !is_null($image_public_url)) {
  $image_path = image_style_url($style, $image_public_url);  
  print $output= \'<img src="\'.$image_path.\'">\';
}else{
 print $output= \'<img src="\'.$default_image.\'">\';
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['alter']['text'] = '<div class="advocacy-title">[title]</div>
<div>[field_subtitle]</div>';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'text_plain';
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="advocacy-title">[title]</div>
';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Article Date (field_article_date) */
  $handler->display->display_options['sorts']['field_article_date_value']['id'] = 'field_article_date_value';
  $handler->display->display_options['sorts']['field_article_date_value']['table'] = 'field_data_field_article_date';
  $handler->display->display_options['sorts']['field_article_date_value']['field'] = 'field_article_date_value';
  $handler->display->display_options['sorts']['field_article_date_value']['order'] = 'DESC';

  /* Display: Advocacy Landing Page Feature Content Block */
  $handler = $view->new_display('block', 'Advocacy Landing Page Feature Content Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Advocacy Landing Page Block Feature Block';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Advocacy Section (field_advocacy_section) */
  $handler->display->display_options['relationships']['field_advocacy_section_value']['id'] = 'field_advocacy_section_value';
  $handler->display->display_options['relationships']['field_advocacy_section_value']['table'] = 'field_data_field_advocacy_section';
  $handler->display->display_options['relationships']['field_advocacy_section_value']['field'] = 'field_advocacy_section_value';
  $handler->display->display_options['relationships']['field_advocacy_section_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Advocacy Link */
  $handler->display->display_options['fields']['field_advocacy_link']['id'] = 'field_advocacy_link';
  $handler->display->display_options['fields']['field_advocacy_link']['table'] = 'field_data_field_advocacy_link';
  $handler->display->display_options['fields']['field_advocacy_link']['field'] = 'field_advocacy_link';
  $handler->display->display_options['fields']['field_advocacy_link']['relationship'] = 'field_advocacy_section_value';
  $handler->display->display_options['fields']['field_advocacy_link']['label'] = '';
  $handler->display->display_options['fields']['field_advocacy_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_advocacy_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_advocacy_link']['click_sort_column'] = 'url';
  /* Field: Field collection item: Advocacy Image */
  $handler->display->display_options['fields']['field_advocacy_image']['id'] = 'field_advocacy_image';
  $handler->display->display_options['fields']['field_advocacy_image']['table'] = 'field_data_field_advocacy_image';
  $handler->display->display_options['fields']['field_advocacy_image']['field'] = 'field_advocacy_image';
  $handler->display->display_options['fields']['field_advocacy_image']['relationship'] = 'field_advocacy_section_value';
  $handler->display->display_options['fields']['field_advocacy_image']['label'] = '';
  $handler->display->display_options['fields']['field_advocacy_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_advocacy_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_advocacy_image']['alter']['path'] = '[field_advocacy_link]';
  $handler->display->display_options['fields']['field_advocacy_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_advocacy_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_advocacy_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_advocacy_image']['settings'] = array(
    'image_style' => 'advcacy_landing_page',
    'image_link' => '',
  );
  /* Field: Field collection item: Advocacy Title */
  $handler->display->display_options['fields']['field_advocacy_title']['id'] = 'field_advocacy_title';
  $handler->display->display_options['fields']['field_advocacy_title']['table'] = 'field_data_field_advocacy_title';
  $handler->display->display_options['fields']['field_advocacy_title']['field'] = 'field_advocacy_title';
  $handler->display->display_options['fields']['field_advocacy_title']['relationship'] = 'field_advocacy_section_value';
  $handler->display->display_options['fields']['field_advocacy_title']['label'] = '';
  $handler->display->display_options['fields']['field_advocacy_title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['field_advocacy_title']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
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
    'background_image' => 'background_image',
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
  $export['advocacy_landing_page_block'] = $view;

  return $export;
}
