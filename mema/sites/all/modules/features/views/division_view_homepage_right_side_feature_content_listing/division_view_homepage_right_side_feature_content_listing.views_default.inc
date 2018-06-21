<?php
/**
 * @file
 * division_view_homepage_right_side_feature_content_listing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function division_view_homepage_right_side_feature_content_listing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homepage_right_side_feature_content_block';
  $view->description = 'Display Homepage Right Side Feature Content block';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage Right Side Feature Content block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Homepage Right Side Feature Content block';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_rsf_description']['id'] = 'field_rsf_description';
  $handler->display->display_options['fields']['field_rsf_description']['table'] = 'field_data_field_rsf_description';
  $handler->display->display_options['fields']['field_rsf_description']['field'] = 'field_rsf_description';
  $handler->display->display_options['fields']['field_rsf_description']['label'] = '';
  $handler->display->display_options['fields']['field_rsf_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rsf_description']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_rsf_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_rsf_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rsf_description']['type'] = 'text_plain';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_rsf_date']['id'] = 'field_rsf_date';
  $handler->display->display_options['fields']['field_rsf_date']['table'] = 'field_data_field_rsf_date';
  $handler->display->display_options['fields']['field_rsf_date']['field'] = 'field_rsf_date';
  $handler->display->display_options['fields']['field_rsf_date']['label'] = '';
  $handler->display->display_options['fields']['field_rsf_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rsf_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rsf_date']['settings'] = array(
    'format_type' => 'default_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Link Title */
  $handler->display->display_options['fields']['field_rfs_link_title']['id'] = 'field_rfs_link_title';
  $handler->display->display_options['fields']['field_rfs_link_title']['table'] = 'field_data_field_rfs_link_title';
  $handler->display->display_options['fields']['field_rfs_link_title']['field'] = 'field_rfs_link_title';
  $handler->display->display_options['fields']['field_rfs_link_title']['label'] = '';
  $handler->display->display_options['fields']['field_rfs_link_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rfs_link_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rfs_link_title']['type'] = 'text_plain';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_rsf_link']['id'] = 'field_rsf_link';
  $handler->display->display_options['fields']['field_rsf_link']['table'] = 'field_data_field_rsf_link';
  $handler->display->display_options['fields']['field_rsf_link']['field'] = 'field_rsf_link';
  $handler->display->display_options['fields']['field_rsf_link']['label'] = '';
  $handler->display->display_options['fields']['field_rsf_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rsf_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rsf_link']['click_sort_column'] = 'url';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
  //out($data->_field_data[\'nid\'][\'entity\']->field_rsf_link);
  if (array_key_exists(\'und\', $data->_field_data[\'nid\'][\'entity\']->field_rsf_link)) {
    $link =  $data->_field_data[\'nid\'][\'entity\']->field_rsf_link[\'und\'][0][\'url\'];
  }
  if (array_key_exists(\'und\', $data->_field_data[\'nid\'][\'entity\']->field_link_target)) {
    $link_target =  $data->_field_data[\'nid\'][\'entity\']->field_link_target[\'und\'][0][\'value\'];
  }
  if (array_key_exists(\'und\', $data->_field_data[\'nid\'][\'entity\']->field_rfs_link_title)) {
    $title =  $data->_field_data[\'nid\'][\'entity\']->field_rfs_link_title[\'und\'][0][\'value\'];
  }else{
    $title =  \'REGISTER NOW\';
  }
  if(!empty($link) && !is_null($link)) {
    if($link_target == \'1\') {
      print \'<div class="homepage-right-side-feature-content"><a href="\'.$link.\'" target="_balnk">\'.$title.\'</a></div>\';
    }else{
      print \'<div class="homepage-right-side-feature-content"><a href="\'.$link.\'">\'.$title.\'</a></div>\';
    }
  }else{
      print \'<div class="homepage-right-side-feature-content">\'.$title.\'</div>\';
 }
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class =\'div-homepage-right-side-feature-newsletter-main-wrapper\'>
     <div class =\'div-homepage-right-side-feature-newsletter\'>
              <div class="div-homepage-right-side-feature-title">[title]</div>
              <div class="div-homepage-right-side-feature-link-title">[field_rsf_description]</div>
              <div class="div-homepage-right-side-feature-mailto">[php]</div>
     </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'homepage_right_side_feature_cont' => 'homepage_right_side_feature_cont',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_rsf_description']['id'] = 'field_rsf_description';
  $handler->display->display_options['fields']['field_rsf_description']['table'] = 'field_data_field_rsf_description';
  $handler->display->display_options['fields']['field_rsf_description']['field'] = 'field_rsf_description';
  $handler->display->display_options['fields']['field_rsf_description']['label'] = '';
  $handler->display->display_options['fields']['field_rsf_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rsf_description']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_rsf_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_rsf_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rsf_description']['type'] = 'text_plain';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_rsf_date']['id'] = 'field_rsf_date';
  $handler->display->display_options['fields']['field_rsf_date']['table'] = 'field_data_field_rsf_date';
  $handler->display->display_options['fields']['field_rsf_date']['field'] = 'field_rsf_date';
  $handler->display->display_options['fields']['field_rsf_date']['label'] = '';
  $handler->display->display_options['fields']['field_rsf_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rsf_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rsf_date']['settings'] = array(
    'format_type' => 'default_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Link Title */
  $handler->display->display_options['fields']['field_rfs_link_title']['id'] = 'field_rfs_link_title';
  $handler->display->display_options['fields']['field_rfs_link_title']['table'] = 'field_data_field_rfs_link_title';
  $handler->display->display_options['fields']['field_rfs_link_title']['field'] = 'field_rfs_link_title';
  $handler->display->display_options['fields']['field_rfs_link_title']['label'] = '';
  $handler->display->display_options['fields']['field_rfs_link_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rfs_link_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rfs_link_title']['type'] = 'text_plain';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_rsf_link']['id'] = 'field_rsf_link';
  $handler->display->display_options['fields']['field_rsf_link']['table'] = 'field_data_field_rsf_link';
  $handler->display->display_options['fields']['field_rsf_link']['field'] = 'field_rsf_link';
  $handler->display->display_options['fields']['field_rsf_link']['label'] = '';
  $handler->display->display_options['fields']['field_rsf_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rsf_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rsf_link']['click_sort_column'] = 'url';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
  //out($data->_field_data[\'nid\'][\'entity\']->field_rsf_link);
  if (array_key_exists(\'und\', $data->_field_data[\'nid\'][\'entity\']->field_rsf_link)) {
    $link =  $data->_field_data[\'nid\'][\'entity\']->field_rsf_link[\'und\'][0][\'url\'];
    $title =  \'REGISTER NOW\';
  }
  if (array_key_exists(\'und\', $data->_field_data[\'nid\'][\'entity\']->field_link_target)) {
    $link_target =  $data->_field_data[\'nid\'][\'entity\']->field_link_target[\'und\'][0][\'value\'];
  }
  if (array_key_exists(\'und\', $data->_field_data[\'nid\'][\'entity\']->field_rfs_link_title)) {
    $title =  $data->_field_data[\'nid\'][\'entity\']->field_rfs_link_title[\'und\'][0][\'value\'];
  }
  if(!empty($link) && !is_null($link)) {
    if($link_target == \'1\') {
      print \'<div class="homepage-right-side-feature-content"><a href="\'.$link.\'" target="_balnk">\'.$title.\'</a></div>\';
    }else{
      print \'<div class="homepage-right-side-feature-content"><a href="\'.$link.\'">\'.$title.\'</a></div>\';
    }
  }else{
      print \'<div class="homepage-right-side-feature-content">\'.$title.\'</div>\';
 }
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class =\'div-homepage-right-side-feature-main-wrapper\'>
     <div class =\'div-homepage-right-side-feature\'>
              <h1 class="div-homepage-right-side-feature-date">[field_rsf_date]</h1>
              <div class="div-homepage-right-side-feature-title">[title]</div>
              <div class="div-homepage-right-side-feature-description">[field_rsf_description]</div>
              [php]
     </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $export['homepage_right_side_feature_content_block'] = $view;

  return $export;
}
