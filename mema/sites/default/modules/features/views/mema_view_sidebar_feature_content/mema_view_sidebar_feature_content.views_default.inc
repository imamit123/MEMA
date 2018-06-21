<?php
/**
 * @file
 * mema_view_sidebar_feature_content.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mema_view_sidebar_feature_content_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sidebar_feature_content';
  $view->description = 'Display Feature Content in All page SideBar';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sidebar Feature Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sidebar Feature Content';
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
  /* Field: Content: Article Date */
  $handler->display->display_options['fields']['field_article_date']['id'] = 'field_article_date';
  $handler->display->display_options['fields']['field_article_date']['table'] = 'field_data_field_article_date';
  $handler->display->display_options['fields']['field_article_date']['field'] = 'field_article_date';
  $handler->display->display_options['fields']['field_article_date']['label'] = '';
  $handler->display->display_options['fields']['field_article_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_date']['settings'] = array(
    'format_type' => 'event_list',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_large_event_event_date']['id'] = 'field_large_event_event_date';
  $handler->display->display_options['fields']['field_large_event_event_date']['table'] = 'field_data_field_large_event_event_date';
  $handler->display->display_options['fields']['field_large_event_event_date']['field'] = 'field_large_event_event_date';
  $handler->display->display_options['fields']['field_large_event_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_large_event_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_large_event_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_large_event_event_date']['settings'] = array(
    'format_type' => 'event_list',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'event_list',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_large_event_short_title']['id'] = 'field_large_event_short_title';
  $handler->display->display_options['fields']['field_large_event_short_title']['table'] = 'field_data_field_large_event_short_title';
  $handler->display->display_options['fields']['field_large_event_short_title']['field'] = 'field_large_event_short_title';
  $handler->display->display_options['fields']['field_large_event_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_large_event_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_large_event_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_large_event_short_title']['type'] = 'text_plain';
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_small_event_short_title']['id'] = 'field_small_event_short_title';
  $handler->display->display_options['fields']['field_small_event_short_title']['table'] = 'field_data_field_small_event_short_title';
  $handler->display->display_options['fields']['field_small_event_short_title']['field'] = 'field_small_event_short_title';
  $handler->display->display_options['fields']['field_small_event_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_small_event_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_small_event_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_small_event_short_title']['type'] = 'text_plain';
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
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if ( $row->type == \'article\'){
  print $row->title;
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="sidebar-feature-content-main-wraper">
	<div class="sidebar-feature-content-date">[field_article_date][field_large_event_event_date][field_event_date] </div>
	<h1 class="sidebar-feature-content-title">[php][field_large_event_short_title][field_small_event_short_title]</h1>
	<div class="sidebar-feature-content-body">[body]</div>
</div> ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
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
    'large_event' => 'large_event',
    'small_event' => 'small_event',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['sidebar_feature_content'] = $view;

  return $export;
}
