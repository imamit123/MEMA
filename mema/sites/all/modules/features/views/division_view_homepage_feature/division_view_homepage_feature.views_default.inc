<?php
/**
 * @file
 * division_view_homepage_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function division_view_homepage_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'home_page_feature_block';
  $view->description = 'Display Content Block for Home page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Home Page Feature Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Home Page Feature Content Block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_upload_media']['id'] = 'field_upload_media';
  $handler->display->display_options['fields']['field_upload_media']['table'] = 'field_data_field_upload_media';
  $handler->display->display_options['fields']['field_upload_media']['field'] = 'field_upload_media';
  $handler->display->display_options['fields']['field_upload_media']['relationship'] = 'field_homepage_feature_media_nid';
  $handler->display->display_options['fields']['field_upload_media']['label'] = '';
  $handler->display->display_options['fields']['field_upload_media']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_hp_featur_description']['id'] = 'field_hp_featur_description';
  $handler->display->display_options['fields']['field_hp_featur_description']['table'] = 'field_data_field_hp_featur_description';
  $handler->display->display_options['fields']['field_hp_featur_description']['field'] = 'field_hp_featur_description';
  $handler->display->display_options['fields']['field_hp_featur_description']['label'] = '';
  $handler->display->display_options['fields']['field_hp_featur_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hp_featur_description']['type'] = 'text_plain';
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
    'homepage_feature' => 'homepage_feature',
  );
  /* Filter criterion: Content: Position (field_position) */
  $handler->display->display_options['filters']['field_position_value']['id'] = 'field_position_value';
  $handler->display->display_options['filters']['field_position_value']['table'] = 'field_data_field_position';
  $handler->display->display_options['filters']['field_position_value']['field'] = 'field_position_value';
  $handler->display->display_options['filters']['field_position_value']['value'] = array(
    1 => '1',
    2 => '2',
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Home Page Feature Pos1-pos2';
  $handler->display->display_options['path'] = 'home-page-feature-content-block';

  /* Display: Home Page Feature Pos1 & pos2 */
  $handler = $view->new_display('block', 'Home Page Feature Pos1 & pos2', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Home Page Feature Pos1 & pos2';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Homepage Feature Link */
  $handler->display->display_options['fields']['field_homepage_feature_link']['id'] = 'field_homepage_feature_link';
  $handler->display->display_options['fields']['field_homepage_feature_link']['table'] = 'field_data_field_homepage_feature_link';
  $handler->display->display_options['fields']['field_homepage_feature_link']['field'] = 'field_homepage_feature_link';
  $handler->display->display_options['fields']['field_homepage_feature_link']['label'] = '';
  $handler->display->display_options['fields']['field_homepage_feature_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_homepage_feature_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_homepage_feature_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_homepage_feature_link']['type'] = 'link_absolute';
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['label'] = '';
  $handler->display->display_options['fields']['field_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Media Image */
  $handler->display->display_options['fields']['field_hf_media_image']['id'] = 'field_hf_media_image';
  $handler->display->display_options['fields']['field_hf_media_image']['table'] = 'field_data_field_hf_media_image';
  $handler->display->display_options['fields']['field_hf_media_image']['field'] = 'field_hf_media_image';
  $handler->display->display_options['fields']['field_hf_media_image']['label'] = '';
  $handler->display->display_options['fields']['field_hf_media_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hf_media_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_hf_media_image']['alter']['path'] = '[field_homepage_feature_link]';
  $handler->display->display_options['fields']['field_hf_media_image']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_hf_media_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hf_media_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hf_media_image']['settings'] = array(
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
if (array_key_exists(\'und\', $data->_field_data[\'nid\'][\'entity\']->field_homepage_feature_link)) {
  $link =  $data->_field_data[\'nid\'][\'entity\']->field_homepage_feature_link[\'und\'][0][\'url\'];
}
if (array_key_exists(\'und\', $data->_field_data[\'nid\'][\'entity\']->field_link_target)) {
   $link_target =  $data->_field_data[\'nid\'][\'entity\']->field_link_target[\'und\'][0][\'value\'];
}
if (array_key_exists(\'und\', $data->_field_data[\'nid\'][\'entity\']->field_hf_media_image)) {
  $image_public_url =  $data->_field_data[\'nid\'][\'entity\']->field_hf_media_image[\'und\'][0][\'uri\'];
}
$style = \'home_page_feature\'; //selecting image style from config . this is machine name
if(!empty($image_public_url) && !is_null($image_public_url)) {
  $image_path = image_style_url($style, $image_public_url);  //combine image style with image name or path
}

if(!empty($link) && !is_null($link)) {
  if($link_target == \'1\') {
    print $output= \'<a href = "\'.$link.\'" target="_balnk"><img src="\'.$image_path.\'"></a>\';
  }else{
     print $output= \'<a href = "\'.$link.\'" ><img src="\'.$image_path.\'"></a>\';
  }
 }else{
  print $output= \'<img src="\'.$image_path.\'">\';

}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
if (array_key_exists(\'und\', $data->_field_data[\'nid\'][\'entity\']->field_homepage_feature_link)) {
  $link =  $data->_field_data[\'nid\'][\'entity\']->field_homepage_feature_link[\'und\'][0][\'url\'];
}
if (array_key_exists(\'und\', $data->_field_data[\'nid\'][\'entity\']->field_link_target)) {
   $link_target =  $data->_field_data[\'nid\'][\'entity\']->field_link_target[\'und\'][0][\'value\'];
}
   $title =  $data->_field_data[\'nid\'][\'entity\']->title;
if(!empty($link) && !is_null($link)) {
  if($link_target == \'1\') {
  	print \'<div class="views-field views-field-title"><span class="field-content">
  	       <a href="\'.$link.\'" target="_balnk">\'.$title.\'</a></span>  </div>\';
    }else{
	print \'<div class="views-field views-field-title"><span class="field-content">
  	       <a href="\'.$link.\'">\'.$title.\'</a></span>  </div>\';
  }
 }else{
 	print \'<div class="views-field views-field-title"><span class="field-content">\'.$title.\'</span></div>\';

}
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
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
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;

  /* Display: Home Page Feature Pos3 & pos4 */
  $handler = $view->new_display('block', 'Home Page Feature Pos3 & pos4', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Home Page Feature Pos3 & pos4';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Homepage Feature Link */
  $handler->display->display_options['fields']['field_homepage_feature_link']['id'] = 'field_homepage_feature_link';
  $handler->display->display_options['fields']['field_homepage_feature_link']['table'] = 'field_data_field_homepage_feature_link';
  $handler->display->display_options['fields']['field_homepage_feature_link']['field'] = 'field_homepage_feature_link';
  $handler->display->display_options['fields']['field_homepage_feature_link']['label'] = '';
  $handler->display->display_options['fields']['field_homepage_feature_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_homepage_feature_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_homepage_feature_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_homepage_feature_link']['type'] = 'link_absolute';
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['label'] = '';
  $handler->display->display_options['fields']['field_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Media Image */
  $handler->display->display_options['fields']['field_hf_media_image']['id'] = 'field_hf_media_image';
  $handler->display->display_options['fields']['field_hf_media_image']['table'] = 'field_data_field_hf_media_image';
  $handler->display->display_options['fields']['field_hf_media_image']['field'] = 'field_hf_media_image';
  $handler->display->display_options['fields']['field_hf_media_image']['label'] = '';
  $handler->display->display_options['fields']['field_hf_media_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hf_media_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_hf_media_image']['alter']['path'] = '[field_homepage_feature_link]';
  $handler->display->display_options['fields']['field_hf_media_image']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_hf_media_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hf_media_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hf_media_image']['settings'] = array(
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
if (array_key_exists(\'und\', $data->_field_data[\'nid\'][\'entity\']->field_homepage_feature_link)) {
  $link =  $data->_field_data[\'nid\'][\'entity\']->field_homepage_feature_link[\'und\'][0][\'url\'];
}
if (array_key_exists(\'und\', $data->_field_data[\'nid\'][\'entity\']->field_link_target)) {
   $link_target =  $data->_field_data[\'nid\'][\'entity\']->field_link_target[\'und\'][0][\'value\'];
}
if (array_key_exists(\'und\', $data->_field_data[\'nid\'][\'entity\']->field_hf_media_image)) {
  $image_public_url =  $data->_field_data[\'nid\'][\'entity\']->field_hf_media_image[\'und\'][0][\'uri\'];
}
$style = \'home_page_feature\'; //selecting image style from config . this is machine name
if(!empty($image_public_url) && !is_null($image_public_url)) {
  $image_path = image_style_url($style, $image_public_url);  //combine image style with image name or path
}

if(!empty($link) && !is_null($link)) {
  if($link_target == \'1\') {
    print $output= \'<a href = "\'.$link.\'" target="_balnk"><img src="\'.$image_path.\'"></a>\';
  }else{
     print $output= \'<a href = "\'.$link.\'" ><img src="\'.$image_path.\'"></a>\';
  }
 }else{
  print $output= \'<img src="\'.$image_path.\'">\';

}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
if (array_key_exists(\'und\', $data->_field_data[\'nid\'][\'entity\']->field_homepage_feature_link)) {
  $link =  $data->_field_data[\'nid\'][\'entity\']->field_homepage_feature_link[\'und\'][0][\'url\'];
}
if (array_key_exists(\'und\', $data->_field_data[\'nid\'][\'entity\']->field_link_target)) {
   $link_target =  $data->_field_data[\'nid\'][\'entity\']->field_link_target[\'und\'][0][\'value\'];
}
   $title =  $data->_field_data[\'nid\'][\'entity\']->title;
if(!empty($link) && !is_null($link)) {
  if($link_target == \'1\') {
  	print \'<div class="views-field views-field-title"><span class="field-content">
  	       <a href="\'.$link.\'" target="_balnk">\'.$title.\'</a></span>  </div>\';
    }else{
	print \'<div class="views-field views-field-title"><span class="field-content">
  	       <a href="\'.$link.\'">\'.$title.\'</a></span>  </div>\';
  }
 }else{
 	print \'<div class="views-field views-field-title"><span class="field-content">\'.$title.\'</span></div>\';

}
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
    'homepage_feature' => 'homepage_feature',
  );
  /* Filter criterion: Content: Position (field_position) */
  $handler->display->display_options['filters']['field_position_value']['id'] = 'field_position_value';
  $handler->display->display_options['filters']['field_position_value']['table'] = 'field_data_field_position';
  $handler->display->display_options['filters']['field_position_value']['field'] = 'field_position_value';
  $handler->display->display_options['filters']['field_position_value']['value'] = array(
    3 => '3',
    4 => '4',
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
  $export['home_page_feature_block'] = $view;

  return $export;
}
