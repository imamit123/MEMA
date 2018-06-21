<?php
/**
 * @file
 * division_view_committee_listing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function division_view_committee_listing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'councils_and_forums';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Councils and Forums';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Councils & Forums';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'councils_landing_page_sort' => 'councils_landing_page_sort',
    'team_board' => 0,
    'team_staff' => 0,
    'homepage_hero' => 0,
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
  $handler->display->display_options['fields']['field_committee_media_image']['id'] = 'field_committee_media_image';
  $handler->display->display_options['fields']['field_committee_media_image']['table'] = 'field_data_field_committee_media_image';
  $handler->display->display_options['fields']['field_committee_media_image']['field'] = 'field_committee_media_image';
  $handler->display->display_options['fields']['field_committee_media_image']['label'] = '';
  $handler->display->display_options['fields']['field_committee_media_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_committee_media_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee_media_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_committee_media_image']['settings'] = array(
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
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Read More';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['nothing']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="committee-landing-main-wrapper">
  <div class="committee-landing-image">[field_committee_media_image] </div>
  <div class="committee-landing-title-body">
      <h3 class="committee-landing-title">[title]</h3>
      <div class="committee-landing-body">[body]</div>
      <div class="committee-landing-body-read-maore">[nothing]</div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
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
    'committee' => 'committee',
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
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
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
  /* Field: Content: Media Image */
  $handler->display->display_options['fields']['field_committee_media_image']['id'] = 'field_committee_media_image';
  $handler->display->display_options['fields']['field_committee_media_image']['table'] = 'field_data_field_committee_media_image';
  $handler->display->display_options['fields']['field_committee_media_image']['field'] = 'field_committee_media_image';
  $handler->display->display_options['fields']['field_committee_media_image']['label'] = '';
  $handler->display->display_options['fields']['field_committee_media_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_committee_media_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee_media_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_committee_media_image']['settings'] = array(
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
$views_name = \'councils_and_forums\';
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
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Read More';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['nothing']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="committee-landing-main-wrapper">
  <div class="committee-landing-image">[php] </div>
  <div class="committee-landing-title-body">
      <h3 class="committee-landing-title">[title]</h3>
      <div class="committee-landing-body">[body]</div>
      <div class="committee-landing-body-read-maore">[nothing]</div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'committee' => 'committee',
  );
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';
  $handler->display->display_options['path'] = 'councils';

  /* Display: Contact Information for node page */
  $handler = $view->new_display('block', 'Contact Information for node page', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_contact_information_name']['id'] = 'field_contact_information_name';
  $handler->display->display_options['fields']['field_contact_information_name']['table'] = 'field_data_field_contact_information_name';
  $handler->display->display_options['fields']['field_contact_information_name']['field'] = 'field_contact_information_name';
  $handler->display->display_options['fields']['field_contact_information_name']['label'] = '';
  $handler->display->display_options['fields']['field_contact_information_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_information_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contact_information_name']['alter']['text'] = '<span class="glyphicon glyphicon-user"></span>[field_contact_information_name]';
  $handler->display->display_options['fields']['field_contact_information_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_information_name']['type'] = 'text_plain';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_contact_information_phone']['id'] = 'field_contact_information_phone';
  $handler->display->display_options['fields']['field_contact_information_phone']['table'] = 'field_data_field_contact_information_phone';
  $handler->display->display_options['fields']['field_contact_information_phone']['field'] = 'field_contact_information_phone';
  $handler->display->display_options['fields']['field_contact_information_phone']['label'] = '';
  $handler->display->display_options['fields']['field_contact_information_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_information_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contact_information_phone']['alter']['text'] = '<span class="glyphicon glyphicon-earphone"></span>[field_contact_information_phone]';
  $handler->display->display_options['fields']['field_contact_information_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_information_phone']['type'] = 'text_plain';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_contact_information_email']['id'] = 'field_contact_information_email';
  $handler->display->display_options['fields']['field_contact_information_email']['table'] = 'field_data_field_contact_information_email';
  $handler->display->display_options['fields']['field_contact_information_email']['field'] = 'field_contact_information_email';
  $handler->display->display_options['fields']['field_contact_information_email']['label'] = '';
  $handler->display->display_options['fields']['field_contact_information_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_information_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contact_information_email']['alter']['text'] = '<span class=" 	glyphicon glyphicon-envelope"></span>[field_contact_information_email]';
  $handler->display->display_options['fields']['field_contact_information_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_information_email']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="committee-contact-info-main-wrapper">
      <div class="committee-contact-info-name">[field_contact_information_name]</div>
      <div class="committee-contact-info-phone">[field_contact_information_phone]</div>
      <div class="committee-contact-info-email">[field_contact_information_email]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
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
    'committee' => 'committee',
  );
  $export['councils_and_forums'] = $view;

  return $export;
}
