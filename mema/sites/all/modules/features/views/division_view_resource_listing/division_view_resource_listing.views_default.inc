<?php
/**
 * @file
 * division_view_resource_listing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function division_view_resource_listing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'resource';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Resource';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publications & Resources';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Submit';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Resource Found';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'resources' => 'resources',
    'team_staff' => 0,
    'team_board' => 0,
    'homepage_hero' => 0,
    'councils_landing_page_sort' => 0,
    'news' => 0,
    'events' => 0,
  );
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
  /* Field: Content: Media Image */
  $handler->display->display_options['fields']['field_resource_media_image']['id'] = 'field_resource_media_image';
  $handler->display->display_options['fields']['field_resource_media_image']['table'] = 'field_data_field_resource_media_image';
  $handler->display->display_options['fields']['field_resource_media_image']['field'] = 'field_resource_media_image';
  $handler->display->display_options['fields']['field_resource_media_image']['label'] = '';
  $handler->display->display_options['fields']['field_resource_media_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resource_media_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_media_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_resource_media_image']['settings'] = array(
    'image_style' => 'event_list_130x130',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="resource-landing-main-wrapper">
  <div class="resource-landing-image">[field_resource_media_image]</div>
  <div class="resource-landing-title-body">
     <h3 class="resource-landing-title">[title]</h3>
     <div class="resource-landing-body">[body] </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
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
    'resource' => 'resource',
  );
  /* Filter criterion: Content: Resource Type (field_resource_type) */
  $handler->display->display_options['filters']['field_resource_type_tid']['id'] = 'field_resource_type_tid';
  $handler->display->display_options['filters']['field_resource_type_tid']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_tid']['field'] = 'field_resource_type_tid';
  $handler->display->display_options['filters']['field_resource_type_tid']['value'] = array(
    28 => '28',
    30 => '30',
    32 => '32',
    27 => '27',
    29 => '29',
    31 => '31',
  );
  $handler->display->display_options['filters']['field_resource_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['operator_id'] = 'field_resource_type_tid_op';
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['label'] = 'Resource Type (field_resource_type)';
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['operator'] = 'field_resource_type_tid_op';
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['identifier'] = 'field_resource_type_tid';
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_resource_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_resource_type_tid']['vocabulary'] = 'resource_type';
  /* Filter criterion: Content: Resource Topic (field_resource_topic) */
  $handler->display->display_options['filters']['field_resource_topic_tid']['id'] = 'field_resource_topic_tid';
  $handler->display->display_options['filters']['field_resource_topic_tid']['table'] = 'field_data_field_resource_topic';
  $handler->display->display_options['filters']['field_resource_topic_tid']['field'] = 'field_resource_topic_tid';
  $handler->display->display_options['filters']['field_resource_topic_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_topic_tid']['expose']['operator_id'] = 'field_resource_topic_tid_op';
  $handler->display->display_options['filters']['field_resource_topic_tid']['expose']['label'] = 'Resource Topic (field_resource_topic)';
  $handler->display->display_options['filters']['field_resource_topic_tid']['expose']['operator'] = 'field_resource_topic_tid_op';
  $handler->display->display_options['filters']['field_resource_topic_tid']['expose']['identifier'] = 'field_resource_topic_tid';
  $handler->display->display_options['filters']['field_resource_topic_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_resource_topic_tid']['vocabulary'] = 'resource_topic';

  /* Display: Resource Listing */
  $handler = $view->new_display('page', 'Resource Listing', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
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
  /* Field: Content: Media Image */
  $handler->display->display_options['fields']['field_resource_media_image']['id'] = 'field_resource_media_image';
  $handler->display->display_options['fields']['field_resource_media_image']['table'] = 'field_data_field_resource_media_image';
  $handler->display->display_options['fields']['field_resource_media_image']['field'] = 'field_resource_media_image';
  $handler->display->display_options['fields']['field_resource_media_image']['label'] = '';
  $handler->display->display_options['fields']['field_resource_media_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resource_media_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_media_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_resource_media_image']['settings'] = array(
    'image_style' => 'event_list_85x85',
    'image_link' => '',
  );
  /* Field: Content: Thumbnail image */
  $handler->display->display_options['fields']['field_common_thumbnail_image']['id'] = 'field_common_thumbnail_image';
  $handler->display->display_options['fields']['field_common_thumbnail_image']['table'] = 'field_data_field_common_thumbnail_image';
  $handler->display->display_options['fields']['field_common_thumbnail_image']['field'] = 'field_common_thumbnail_image';
  $handler->display->display_options['fields']['field_common_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_common_thumbnail_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_common_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_common_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_common_thumbnail_image']['settings'] = array(
    'image_style' => 'event_list_85x85',
    'image_link' => '',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$default_image = \'\';
$functions = GAI::getInstance();
$views_name = \'events\';
$style = \'event_list_85x85\';
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '130';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="resource-landing-main-wrapper">
  <div class="resource-landing-image">[php]</div>
  <div class="resource-landing-title-body">
     <h3 class="resource-landing-title">[title]</h3>
     <div class="resource-landing-body">[body] </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Resource Type (field_resource_type) */
  $handler->display->display_options['filters']['field_resource_type_tid']['id'] = 'field_resource_type_tid';
  $handler->display->display_options['filters']['field_resource_type_tid']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_tid']['field'] = 'field_resource_type_tid';
  $handler->display->display_options['filters']['field_resource_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['operator_id'] = 'field_resource_type_tid_op';
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['operator'] = 'field_resource_type_tid_op';
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['identifier'] = 'field_resource_type_tid';
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_resource_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_resource_type_tid']['vocabulary'] = 'resource_type';
  /* Filter criterion: Content: Resource Topic (field_resource_topic) */
  $handler->display->display_options['filters']['field_resource_topic_tid']['id'] = 'field_resource_topic_tid';
  $handler->display->display_options['filters']['field_resource_topic_tid']['table'] = 'field_data_field_resource_topic';
  $handler->display->display_options['filters']['field_resource_topic_tid']['field'] = 'field_resource_topic_tid';
  $handler->display->display_options['filters']['field_resource_topic_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_topic_tid']['expose']['operator_id'] = 'field_resource_topic_tid_op';
  $handler->display->display_options['filters']['field_resource_topic_tid']['expose']['operator'] = 'field_resource_topic_tid_op';
  $handler->display->display_options['filters']['field_resource_topic_tid']['expose']['identifier'] = 'field_resource_topic_tid';
  $handler->display->display_options['filters']['field_resource_topic_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_resource_topic_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_resource_topic_tid']['vocabulary'] = 'resource_topic';
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-5:+5';
  /* Filter criterion: Content: Featured (field_featured) */
  $handler->display->display_options['filters']['field_featured_value']['id'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['table'] = 'field_data_field_featured';
  $handler->display->display_options['filters']['field_featured_value']['field'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['value'] = array(
    0 => '0',
  );
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';
  $handler->display->display_options['path'] = 'resource';

  /* Display: Featured Resource Listing Block */
  $handler = $view->new_display('block', 'Featured Resource Listing Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
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
  /* Field: Content: Media Image */
  $handler->display->display_options['fields']['field_resource_media_image']['id'] = 'field_resource_media_image';
  $handler->display->display_options['fields']['field_resource_media_image']['table'] = 'field_data_field_resource_media_image';
  $handler->display->display_options['fields']['field_resource_media_image']['field'] = 'field_resource_media_image';
  $handler->display->display_options['fields']['field_resource_media_image']['label'] = '';
  $handler->display->display_options['fields']['field_resource_media_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resource_media_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_media_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_resource_media_image']['settings'] = array(
    'image_style' => 'event_list_130x130',
    'image_link' => '',
  );
  /* Field: Content: Thumbnail image */
  $handler->display->display_options['fields']['field_common_thumbnail_image']['id'] = 'field_common_thumbnail_image';
  $handler->display->display_options['fields']['field_common_thumbnail_image']['table'] = 'field_data_field_common_thumbnail_image';
  $handler->display->display_options['fields']['field_common_thumbnail_image']['field'] = 'field_common_thumbnail_image';
  $handler->display->display_options['fields']['field_common_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_common_thumbnail_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_common_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_common_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_common_thumbnail_image']['settings'] = array(
    'image_style' => 'event_list_130x130',
    'image_link' => '',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$default_image = \'\';
$functions = GAI::getInstance();
$views_name = \'events\';
$style = \'event_list_130x130\';
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '301';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Read More';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="resource-landing-main-wrapper">
  <div class="resource-landing-image">[php]</div>
  <div class="resource-landing-title-body">
     <h3 class="resource-landing-title">[title]</h3>
     <div class="resource-landing-body">[body] </div>
    <div class="resource-landing-link">[nothing] </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Featured (field_featured) */
  $handler->display->display_options['filters']['field_featured_value']['id'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['table'] = 'field_data_field_featured';
  $handler->display->display_options['filters']['field_featured_value']['field'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';

  /* Display: Download PDF */
  $handler = $view->new_display('block', 'Download PDF', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Attachments */
  $handler->display->display_options['fields']['field_attachments']['id'] = 'field_attachments';
  $handler->display->display_options['fields']['field_attachments']['table'] = 'field_data_field_attachments';
  $handler->display->display_options['fields']['field_attachments']['field'] = 'field_attachments';
  $handler->display->display_options['fields']['field_attachments']['label'] = '';
  $handler->display->display_options['fields']['field_attachments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attachments']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_attachments']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_attachments']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_attachments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_attachments']['multi_type'] = 'ul';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'resource' => 'resource',
  );
  $export['resource'] = $view;

  return $export;
}
