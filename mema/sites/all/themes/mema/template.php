<?php
/**
 * @file
 * template.php
 */

/**
 * Implement template_preprocess_page().
 */
function mema_preprocess_page(&$variables) {
  $views_page = views_get_page_view();
  if ((isset($variables['node']->type))) {
    $variables['theme_hook_suggestions'][] = 'page__coverimage';
    $page_type = $variables['node']->type;
    drupal_add_js(array('page_type' => $page_type,'page_id' => arg(1)), 'setting');
  }
  if (is_object($views_page)) {
    $page_type = 'views';
    drupal_add_js(array('page_type' => $page_type), 'setting');
  }
  if (is_object($views_page) && $views_page->name == "advocacy_blog") {
    $variables['theme_hook_suggestions'][] = 'page__views__coverimage';
  }
  elseif (is_object($views_page) && $views_page->name == "news_listing_page") {
    $variables['theme_hook_suggestions'][] = 'page__views__coverimage';
  }
  elseif (is_object($views_page) && $views_page->name == "events") {
    $variables['theme_hook_suggestions'][] = 'page__views__coverimage';
  }
  elseif (is_object($views_page) && $views_page->name == "board_executive_satff") {
    $variables['theme_hook_suggestions'][] = 'page__views__coverimage';
  }
  elseif (is_object($views_page) && $views_page->name == "councils_and_forums") {
    $variables['theme_hook_suggestions'][] = 'page__views__coverimage';
  }
  elseif (is_object($views_page) && $views_page->name == "resource") {
    $variables['theme_hook_suggestions'][] = 'page__views__resource';
  }elseif (is_object($views_page) && $views_page->name == "article_newsletter") {
    $variables['theme_hook_suggestions'][] = 'page__views__coverimage';
  }elseif (is_object($views_page) && $views_page->name == "article_newsletter_".arg(2)) {
    $variables['theme_hook_suggestions'][] = 'page__views__coverimage';
  }

  if(arg(0) == 'research' || arg(1) == 'market-research') {
    $variables['theme_hook_suggestions'][] = 'page__views__resource';
  }
  elseif(arg(0) == 'research' || arg(1) == 'publications-information') {
    $variables['theme_hook_suggestions'][] = 'page__views__resource';
  }
  elseif(arg(0) == 'research' || arg(1) == 'market-research') {
    $variables['theme_hook_suggestions'][] = 'page__views__resource';
  }
  elseif(arg(0) == 'page_not_found') {
    $variables['theme_hook_suggestions'][] = 'page__mixcoverimage';
  }
  elseif(arg(0) == 'search' || arg(1) == 'node') {
    $variables['theme_hook_suggestions'][] = 'page__mixcoverimage';
  }
  elseif(arg(0) == 'r403redirect') {
    $variables['theme_hook_suggestions'][] = 'page__mixcoverimage';
  }
  elseif(arg(0) == 'sitemap') {
    $variables['theme_hook_suggestions'][] = 'page__mixcoverimage';
  }
  elseif(arg(0) == 'room_reservations') {
    $variables['theme_hook_suggestions'][] = 'page__mixcoverimage';
  }
  elseif(arg(0) == 'private' || arg(1) == 'login') {
    $variables['theme_hook_suggestions'][] = 'page__mixcoverimage';
  }
  elseif(arg(0) == 'user') {
    $variables['theme_hook_suggestions'][] = 'page__mixcoverimage';
  }
}


/**
 * Implements hook_preprocess_search_results().
 */
function mema_preprocess_search_results(&$variables) {
  $variables['search_results'] = '';
  $output_results = '';
  $result = '';
  $resultTypes = array();
  foreach ($variables['results'] as $result) {
    $body  = $result['node']->body['und'][0]['value'];
    $body = strip_tags($body);
    if (strlen($body) > 300) {
      $stringCut = substr($body, 0, 300);
      $body = substr($stringCut, 0, strrpos($stringCut, ' '));
    }
    $output_results .=  '<div id="tabs"><h3>' .l($result['title'],'node/'.$result['node']->nid) . '</h3>';
    $output_results .= $body;
    $output_results .=  '</div>';
  }
  $variables['search_results'] .= $output_results;
}

/**
 * implement themeing option for different class
 */
function mema_preprocess_html(&$variables) {
  $class = theme_get_setting('choose_class') ;
  $variables ['classes_array'][] = $class;
}

function mema_print_link($node) {
    return '<a href="node/' . $node->nid . '/print"><img src="http://local-aasa.org/sites/all/modules/contrib/print/icons/print_icon.png" alt="Display a printer friendly version of this page."></a>';
}
