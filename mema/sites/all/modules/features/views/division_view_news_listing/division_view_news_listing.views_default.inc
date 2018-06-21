<?php
/**
 * @file
 * division_view_news_listing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function division_view_news_listing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news_listing_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News Listing Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'SEARCH';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« ';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ ';
  $handler->display->display_options['pager']['options']['tags']['next'] = ' ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = ' »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Article Date */
  $handler->display->display_options['fields']['field_article_date']['id'] = 'field_article_date';
  $handler->display->display_options['fields']['field_article_date']['table'] = 'field_data_field_article_date';
  $handler->display->display_options['fields']['field_article_date']['field'] = 'field_article_date';
  $handler->display->display_options['fields']['field_article_date']['label'] = '';
  $handler->display->display_options['fields']['field_article_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_date']['settings'] = array(
    'format_type' => 'article',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_article_author']['id'] = 'field_article_author';
  $handler->display->display_options['fields']['field_article_author']['table'] = 'field_data_field_article_author';
  $handler->display->display_options['fields']['field_article_author']['field'] = 'field_article_author';
  $handler->display->display_options['fields']['field_article_author']['label'] = '';
  $handler->display->display_options['fields']['field_article_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_author']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_article_author']['type'] = 'link_title_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'PRESS RELEASE | [field_article_date] By [field_article_author]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'READ MORE';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_article_featured']['id'] = 'field_article_featured';
  $handler->display->display_options['fields']['field_article_featured']['table'] = 'field_data_field_article_featured';
  $handler->display->display_options['fields']['field_article_featured']['field'] = 'field_article_featured';
  /* Sort criterion: Content: Article Date (field_article_date) */
  $handler->display->display_options['sorts']['field_article_date_value']['id'] = 'field_article_date_value';
  $handler->display->display_options['sorts']['field_article_date_value']['table'] = 'field_data_field_article_date';
  $handler->display->display_options['sorts']['field_article_date_value']['field'] = 'field_article_date_value';
  $handler->display->display_options['sorts']['field_article_date_value']['order'] = 'DESC';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Featured (field_article_featured) */
  $handler->display->display_options['filters']['field_article_featured_value']['id'] = 'field_article_featured_value';
  $handler->display->display_options['filters']['field_article_featured_value']['table'] = 'field_data_field_article_featured';
  $handler->display->display_options['filters']['field_article_featured_value']['field'] = 'field_article_featured_value';
  $handler->display->display_options['filters']['field_article_featured_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_article_featured_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_article_featured_value']['group'] = 1;
  /* Filter criterion: Content: Article Date (field_article_date) */
  $handler->display->display_options['filters']['field_article_date_value']['id'] = 'field_article_date_value';
  $handler->display->display_options['filters']['field_article_date_value']['table'] = 'field_data_field_article_date';
  $handler->display->display_options['filters']['field_article_date_value']['field'] = 'field_article_date_value';
  $handler->display->display_options['filters']['field_article_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_article_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_article_date_value']['expose']['operator_id'] = 'field_article_date_value_op';
  $handler->display->display_options['filters']['field_article_date_value']['expose']['label'] = 'Article Date (field_article_date)';
  $handler->display->display_options['filters']['field_article_date_value']['expose']['operator'] = 'field_article_date_value_op';
  $handler->display->display_options['filters']['field_article_date_value']['expose']['identifier'] = 'field_article_date_value';
  $handler->display->display_options['filters']['field_article_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_article_date_value']['granularity'] = 'month';
  $handler->display->display_options['filters']['field_article_date_value']['year_range'] = '-10:+10';
  /* Filter criterion: Content: Article Type (field_article_type) */
  $handler->display->display_options['filters']['field_article_type_tid']['id'] = 'field_article_type_tid';
  $handler->display->display_options['filters']['field_article_type_tid']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['filters']['field_article_type_tid']['field'] = 'field_article_type_tid';
  $handler->display->display_options['filters']['field_article_type_tid']['value'] = array(
    9 => '9',
    75 => '75',
    61 => '61',
    56 => '56',
  );
  $handler->display->display_options['filters']['field_article_type_tid']['vocabulary'] = 'article_type';

  /* Display: News Listing Page */
  $handler = $view->new_display('page', 'News Listing Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Results Found';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
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
  /* Field: Content: Article Date */
  $handler->display->display_options['fields']['field_article_date']['id'] = 'field_article_date';
  $handler->display->display_options['fields']['field_article_date']['table'] = 'field_data_field_article_date';
  $handler->display->display_options['fields']['field_article_date']['field'] = 'field_article_date';
  $handler->display->display_options['fields']['field_article_date']['label'] = '';
  $handler->display->display_options['fields']['field_article_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_date']['settings'] = array(
    'format_type' => 'article',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_article_author']['id'] = 'field_article_author';
  $handler->display->display_options['fields']['field_article_author']['table'] = 'field_data_field_article_author';
  $handler->display->display_options['fields']['field_article_author']['field'] = 'field_article_author';
  $handler->display->display_options['fields']['field_article_author']['label'] = '';
  $handler->display->display_options['fields']['field_article_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_author']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_article_author']['type'] = 'link_title_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'READ MORE';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Featured (field_article_featured) */
  $handler->display->display_options['filters']['field_article_featured_value']['id'] = 'field_article_featured_value';
  $handler->display->display_options['filters']['field_article_featured_value']['table'] = 'field_data_field_article_featured';
  $handler->display->display_options['filters']['field_article_featured_value']['field'] = 'field_article_featured_value';
  $handler->display->display_options['filters']['field_article_featured_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_article_featured_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_article_featured_value']['group'] = 1;
  /* Filter criterion: Content: Article Date (field_article_date) */
  $handler->display->display_options['filters']['field_article_date_value']['id'] = 'field_article_date_value';
  $handler->display->display_options['filters']['field_article_date_value']['table'] = 'field_data_field_article_date';
  $handler->display->display_options['filters']['field_article_date_value']['field'] = 'field_article_date_value';
  $handler->display->display_options['filters']['field_article_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_article_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_article_date_value']['expose']['operator_id'] = 'field_article_date_value_op';
  $handler->display->display_options['filters']['field_article_date_value']['expose']['operator'] = 'field_article_date_value_op';
  $handler->display->display_options['filters']['field_article_date_value']['expose']['identifier'] = 'field_article_date_value';
  $handler->display->display_options['filters']['field_article_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_article_date_value']['granularity'] = 'month';
  $handler->display->display_options['filters']['field_article_date_value']['year_range'] = '-10:+10';
  /* Filter criterion: Content: Article Date (field_article_date) */
  $handler->display->display_options['filters']['field_article_date_value_1']['id'] = 'field_article_date_value_1';
  $handler->display->display_options['filters']['field_article_date_value_1']['table'] = 'field_data_field_article_date';
  $handler->display->display_options['filters']['field_article_date_value_1']['field'] = 'field_article_date_value';
  $handler->display->display_options['filters']['field_article_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_article_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_article_date_value_1']['expose']['operator_id'] = 'field_article_date_value_1_op';
  $handler->display->display_options['filters']['field_article_date_value_1']['expose']['operator'] = 'field_article_date_value_1_op';
  $handler->display->display_options['filters']['field_article_date_value_1']['expose']['identifier'] = 'field_article_date_value_1';
  $handler->display->display_options['filters']['field_article_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_article_date_value_1']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_article_date_value_1']['year_range'] = '-10:+0';
  /* Filter criterion: Content: Article Type (field_article_type) */
  $handler->display->display_options['filters']['field_article_type_tid']['id'] = 'field_article_type_tid';
  $handler->display->display_options['filters']['field_article_type_tid']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['filters']['field_article_type_tid']['field'] = 'field_article_type_tid';
  $handler->display->display_options['filters']['field_article_type_tid']['value'] = array(
    1 => '1',
    4 => '4',
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['filters']['field_article_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_article_type_tid']['vocabulary'] = 'article_type';
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
  $handler->display->display_options['path'] = 'news';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="news/feed"><i class="fa fa-rss"></i></a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'READ MORE';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Media Article Image */
  $handler->display->display_options['fields']['field_media_article_image']['id'] = 'field_media_article_image';
  $handler->display->display_options['fields']['field_media_article_image']['table'] = 'field_data_field_media_article_image';
  $handler->display->display_options['fields']['field_media_article_image']['field'] = 'field_media_article_image';
  $handler->display->display_options['fields']['field_media_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_media_article_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_media_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_article_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class =\'mema-feature-main-wrapper\'>
     <div class =\'mema-feature-main-wrapper-listing-content\'>
              <h1 class="mema-feature-title">[title]</h1>
              <div class="mema-feature-listing-body">[body]</div>
     </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
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
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Featured (field_article_featured) */
  $handler->display->display_options['filters']['field_article_featured_value']['id'] = 'field_article_featured_value';
  $handler->display->display_options['filters']['field_article_featured_value']['table'] = 'field_data_field_article_featured';
  $handler->display->display_options['filters']['field_article_featured_value']['field'] = 'field_article_featured_value';
  $handler->display->display_options['filters']['field_article_featured_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_article_featured_value']['group'] = 1;
  /* Filter criterion: Content: Article Type (field_article_type) */
  $handler->display->display_options['filters']['field_article_type_tid']['id'] = 'field_article_type_tid';
  $handler->display->display_options['filters']['field_article_type_tid']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['filters']['field_article_type_tid']['field'] = 'field_article_type_tid';
  $handler->display->display_options['filters']['field_article_type_tid']['value'] = array(
    1 => '1',
    4 => '4',
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['filters']['field_article_type_tid']['vocabulary'] = 'article_type';
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
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['inherit_arguments'] = FALSE;
  $handler->display->display_options['inherit_pager'] = TRUE;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
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
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Article Type (field_article_type) */
  $handler->display->display_options['filters']['field_article_type_tid']['id'] = 'field_article_type_tid';
  $handler->display->display_options['filters']['field_article_type_tid']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['filters']['field_article_type_tid']['field'] = 'field_article_type_tid';
  $handler->display->display_options['filters']['field_article_type_tid']['value'] = array(
    1 => '1',
    4 => '4',
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['filters']['field_article_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_article_type_tid']['vocabulary'] = 'article_type';
  $handler->display->display_options['path'] = 'news/feed';
  $export['news_listing_page'] = $view;

  return $export;
}
