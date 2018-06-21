<?php
/**
 * @file
 * division_view_board_executive_satff.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function division_view_board_executive_satff_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'board_executive_satff';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Board Executive Satff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Board Executive Satff';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'BOARD';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
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
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_person_email']['id'] = 'field_person_email';
  $handler->display->display_options['fields']['field_person_email']['table'] = 'field_data_field_person_email';
  $handler->display->display_options['fields']['field_person_email']['field'] = 'field_person_email';
  $handler->display->display_options['fields']['field_person_email']['label'] = '';
  $handler->display->display_options['fields']['field_person_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_email']['type'] = 'email_plain';
  /* Field: Content: Media Image */
  $handler->display->display_options['fields']['field_person_media_image']['id'] = 'field_person_media_image';
  $handler->display->display_options['fields']['field_person_media_image']['table'] = 'field_data_field_person_media_image';
  $handler->display->display_options['fields']['field_person_media_image']['field'] = 'field_person_media_image';
  $handler->display->display_options['fields']['field_person_media_image']['label'] = '';
  $handler->display->display_options['fields']['field_person_media_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_media_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_media_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_person_media_image']['settings'] = array(
    'image_style' => 'team',
    'image_link' => '',
  );
  /* Field: Content: Member Type */
  $handler->display->display_options['fields']['field_person_member_type']['id'] = 'field_person_member_type';
  $handler->display->display_options['fields']['field_person_member_type']['table'] = 'field_data_field_person_member_type';
  $handler->display->display_options['fields']['field_person_member_type']['field'] = 'field_person_member_type';
  $handler->display->display_options['fields']['field_person_member_type']['label'] = '';
  $handler->display->display_options['fields']['field_person_member_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_member_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_member_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_person_phone']['id'] = 'field_person_phone';
  $handler->display->display_options['fields']['field_person_phone']['table'] = 'field_data_field_person_phone';
  $handler->display->display_options['fields']['field_person_phone']['field'] = 'field_person_phone';
  $handler->display->display_options['fields']['field_person_phone']['label'] = '';
  $handler->display->display_options['fields']['field_person_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_phone']['click_sort_column'] = 'numbertype';
  $handler->display->display_options['fields']['field_person_phone']['settings'] = array(
    'components' => array(
      'country' => 0,
    ),
    'full_hcard' => 0,
    'as_tel_link' => 0,
    'allow_alpha' => 0,
    'country_name_position' => 'after',
  );
  $handler->display->display_options['fields']['field_person_phone']['delta_offset'] = '0';
  /* Field: Content: Professional Title */
  $handler->display->display_options['fields']['field_professional_title']['id'] = 'field_professional_title';
  $handler->display->display_options['fields']['field_professional_title']['table'] = 'field_data_field_professional_title';
  $handler->display->display_options['fields']['field_professional_title']['field'] = 'field_professional_title';
  $handler->display->display_options['fields']['field_professional_title']['label'] = '';
  $handler->display->display_options['fields']['field_professional_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_professional_title']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if(isset($data->_field_data [\'nid\'][\'entity\']->field_person_email[\'und\'][0][\'email\'])){
   $email = $data->_field_data [\'nid\'][\'entity\']->field_person_email[\'und\'][0][\'email\'];
}

if((!empty($email)) || (isset($email))){
        print "<a href=\'mailto:" . $email . "\'>Send mail</a>";
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="team-main-wrapper">
  <div class="team-name">[title] </div>
  <div class="team-image">[field_person_media_image] </div>
  <div class="team-professional-title-phone">
    <div class="team-professional-title">[field_professional_title] </div>
    <div class="team-phone-no">[field_person_phone] </div>
  </div>
  <div class="team-email">[php]</div>
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
    'person' => 'person',
  );
  /* Filter criterion: Content: Member Type (field_person_member_type) */
  $handler->display->display_options['filters']['field_person_member_type_tid']['id'] = 'field_person_member_type_tid';
  $handler->display->display_options['filters']['field_person_member_type_tid']['table'] = 'field_data_field_person_member_type';
  $handler->display->display_options['filters']['field_person_member_type_tid']['field'] = 'field_person_member_type_tid';
  $handler->display->display_options['filters']['field_person_member_type_tid']['value'] = array(
    87 => '87',
  );
  $handler->display->display_options['filters']['field_person_member_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_person_member_type_tid']['vocabulary'] = 'member_type';

  /* Display: Team Board */
  $handler = $view->new_display('page', 'Team Board', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'THE MEMA TEAM';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'team_board' => 'team_board',
    'team_staff' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['sorts']['position']['order'] = 'DESC';
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
    'person' => 'person',
  );
  /* Filter criterion: Content: Member Type (field_person_member_type) */
  $handler->display->display_options['filters']['field_person_member_type_tid']['id'] = 'field_person_member_type_tid';
  $handler->display->display_options['filters']['field_person_member_type_tid']['table'] = 'field_data_field_person_member_type';
  $handler->display->display_options['filters']['field_person_member_type_tid']['field'] = 'field_person_member_type_tid';
  $handler->display->display_options['filters']['field_person_member_type_tid']['value'] = array(
    87 => '87',
  );
  $handler->display->display_options['filters']['field_person_member_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_person_member_type_tid']['vocabulary'] = 'member_type';
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';
  $handler->display->display_options['path'] = 'team';

  /* Display: Team Staff */
  $handler = $view->new_display('block', 'Team Staff', 'block_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'STAFF';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'team_staff' => 'team_staff',
    'team_board' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['sorts']['position']['order'] = 'DESC';
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
    'person' => 'person',
  );
  /* Filter criterion: Content: Member Type (field_person_member_type) */
  $handler->display->display_options['filters']['field_person_member_type_tid']['id'] = 'field_person_member_type_tid';
  $handler->display->display_options['filters']['field_person_member_type_tid']['table'] = 'field_data_field_person_member_type';
  $handler->display->display_options['filters']['field_person_member_type_tid']['field'] = 'field_person_member_type_tid';
  $handler->display->display_options['filters']['field_person_member_type_tid']['value'] = array(
    86 => '86',
  );
  $handler->display->display_options['filters']['field_person_member_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_person_member_type_tid']['vocabulary'] = 'member_type';
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';
  $export['board_executive_satff'] = $view;

  return $export;
}
