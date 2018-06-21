<?php
/**
 * @file
 * mema_news_feeds_exporter.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mema_news_feeds_exporter_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mema_news_exporter';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mema News Exporter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mema News Exporter';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: File Usage: File */
  $handler->display->display_options['relationships']['node_to_file']['id'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['node_to_file']['field'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['label'] = 'file';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Article Date */
  $handler->display->display_options['fields']['field_article_date']['id'] = 'field_article_date';
  $handler->display->display_options['fields']['field_article_date']['table'] = 'field_data_field_article_date';
  $handler->display->display_options['fields']['field_article_date']['field'] = 'field_article_date';
  $handler->display->display_options['fields']['field_article_date']['label'] = 'article_date';
  $handler->display->display_options['fields']['field_article_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_article_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Article Type */
  $handler->display->display_options['fields']['field_article_type']['id'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['fields']['field_article_type']['field'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['label'] = 'article_type';
  $handler->display->display_options['fields']['field_article_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_article_author']['id'] = 'field_article_author';
  $handler->display->display_options['fields']['field_article_author']['table'] = 'field_data_field_article_author';
  $handler->display->display_options['fields']['field_article_author']['field'] = 'field_article_author';
  $handler->display->display_options['fields']['field_article_author']['label'] = 'author_title';
  $handler->display->display_options['fields']['field_article_author']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_article_author']['alter']['text'] = '[field_article_author-title]';
  $handler->display->display_options['fields']['field_article_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_author']['click_sort_column'] = 'url';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_article_author_1']['id'] = 'field_article_author_1';
  $handler->display->display_options['fields']['field_article_author_1']['table'] = 'field_data_field_article_author';
  $handler->display->display_options['fields']['field_article_author_1']['field'] = 'field_article_author';
  $handler->display->display_options['fields']['field_article_author_1']['label'] = 'author_url';
  $handler->display->display_options['fields']['field_article_author_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_article_author_1']['alter']['text'] = '[field_article_author_1-url]';
  $handler->display->display_options['fields']['field_article_author_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_author_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_article_author_1']['type'] = 'link_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_article_featured']['id'] = 'field_article_featured';
  $handler->display->display_options['fields']['field_article_featured']['table'] = 'field_data_field_article_featured';
  $handler->display->display_options['fields']['field_article_featured']['field'] = 'field_article_featured';
  $handler->display->display_options['fields']['field_article_featured']['label'] = 'featured';
  /* Field: Content: Media Article Author */
  $handler->display->display_options['fields']['field_media_article_author']['id'] = 'field_media_article_author';
  $handler->display->display_options['fields']['field_media_article_author']['table'] = 'field_data_field_media_article_author';
  $handler->display->display_options['fields']['field_media_article_author']['field'] = 'field_media_article_author';
  $handler->display->display_options['fields']['field_media_article_author']['label'] = 'media_article_author';
  $handler->display->display_options['fields']['field_media_article_author']['element_label_colon'] = FALSE;
  /* Field: Content: Member Only */
  $handler->display->display_options['fields']['field_article_member_only']['id'] = 'field_article_member_only';
  $handler->display->display_options['fields']['field_article_member_only']['table'] = 'field_data_field_article_member_only';
  $handler->display->display_options['fields']['field_article_member_only']['field'] = 'field_article_member_only';
  $handler->display->display_options['fields']['field_article_member_only']['label'] = 'member_only';
  $handler->display->display_options['fields']['field_article_member_only']['element_label_colon'] = FALSE;
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['label'] = 'source';
  $handler->display->display_options['fields']['field_source']['element_label_colon'] = FALSE;
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = 'subtitle';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['uri']['label'] = 'img_path';
  $handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
  /* Field: Content: Media Article Image */
  $handler->display->display_options['fields']['field_media_article_image']['id'] = 'field_media_article_image';
  $handler->display->display_options['fields']['field_media_article_image']['table'] = 'field_data_field_media_article_image';
  $handler->display->display_options['fields']['field_media_article_image']['field'] = 'field_media_article_image';
  $handler->display->display_options['fields']['field_media_article_image']['label'] = 'img_title';
  $handler->display->display_options['fields']['field_media_article_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_media_article_image']['alter']['text'] = '[field_media_article_image-title]';
  $handler->display->display_options['fields']['field_media_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_article_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Media Article Image */
  $handler->display->display_options['fields']['field_media_article_image_1']['id'] = 'field_media_article_image_1';
  $handler->display->display_options['fields']['field_media_article_image_1']['table'] = 'field_data_field_media_article_image';
  $handler->display->display_options['fields']['field_media_article_image_1']['field'] = 'field_media_article_image';
  $handler->display->display_options['fields']['field_media_article_image_1']['label'] = 'img_alt';
  $handler->display->display_options['fields']['field_media_article_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_media_article_image_1']['alter']['text'] = '[field_media_article_image_1-alt]';
  $handler->display->display_options['fields']['field_media_article_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_article_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_article_image_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Add to nodequeue */
  $handler->display->display_options['fields']['field_add_to_nodequeue']['id'] = 'field_add_to_nodequeue';
  $handler->display->display_options['fields']['field_add_to_nodequeue']['table'] = 'field_data_field_add_to_nodequeue';
  $handler->display->display_options['fields']['field_add_to_nodequeue']['field'] = 'field_add_to_nodequeue';
  $handler->display->display_options['fields']['field_add_to_nodequeue']['type'] = 'list_key';
  /* Field: Scheduler: Publish on */
  $handler->display->display_options['fields']['publish_on']['id'] = 'publish_on';
  $handler->display->display_options['fields']['publish_on']['table'] = 'scheduler';
  $handler->display->display_options['fields']['publish_on']['field'] = 'publish_on';
  $handler->display->display_options['fields']['publish_on']['date_format'] = 'short';
  $handler->display->display_options['fields']['publish_on']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['publish_on']['timezone'] = 'America/New_York';
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
  /* Filter criterion: Content: Syndication (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value']['id'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value']['value'] = array(
    'AASA' => 'AASA',
  );

  /* Display: HDMA NEWS */
  $handler = $view->new_display('views_data_export', 'HDMA NEWS', 'views_data_export_1');
  $handler->display->display_options['display_description'] = 'News feeds for HDMA division';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Syndication (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value']['id'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value']['value'] = array(
    'HDMA' => 'HDMA',
  );
  $handler->display->display_options['path'] = 'hdma/news/feeds';

  /* Display: AASA NEWS */
  $handler = $view->new_display('views_data_export', 'AASA NEWS', 'views_data_export_2');
  $handler->display->display_options['display_description'] = 'News feeds for AASA division';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Syndication (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value']['id'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value']['value'] = array(
    'AASA' => 'AASA',
  );
  $handler->display->display_options['path'] = 'aasa/news/feeds';

  /* Display: MERA NEWS */
  $handler = $view->new_display('views_data_export', 'MERA NEWS', 'views_data_export_3');
  $handler->display->display_options['display_description'] = 'News feeds for MERA division';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Syndication (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value']['id'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value']['value'] = array(
    'MERA' => 'MERA',
  );
  $handler->display->display_options['path'] = 'mera/news/feeds';

  /* Display: OESA NEWS */
  $handler = $view->new_display('views_data_export', 'OESA NEWS', 'views_data_export_4');
  $handler->display->display_options['display_description'] = 'News feeds for OESA division';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Syndication (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value']['id'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value']['value'] = array(
    'OESA' => 'OESA',
  );
  $handler->display->display_options['path'] = 'oesa/news/feeds';

  /* Display: MFSG NEWS */
  $handler = $view->new_display('views_data_export', 'MFSG NEWS', 'views_data_export_5');
  $handler->display->display_options['display_description'] = 'News feeds for MFSG division';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Syndication (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value']['id'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value']['value'] = array(
    'MEMAMFSG' => 'MEMAMFSG',
  );
  $handler->display->display_options['path'] = 'mfsg/news/feeds';
  $export['mema_news_exporter'] = $view;

  return $export;
}
