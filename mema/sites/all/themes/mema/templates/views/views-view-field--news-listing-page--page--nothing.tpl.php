<?php
/**
*
* Display simple news.
* Add condetion - When Auther are present text "by" are display.
*  
*/

global $base_path;
$article_type_tid = $row->_field_data['nid']['entity']->field_article_type['und'][0]['tid'];
$article_type_name = taxonomy_term_load($article_type_tid);
//$title = $term->name;
$display_auther = '';
$nid = $row->_field_data['nid']['entity']->nid; 
$path_alias = drupal_get_path_alias('node/' . $nid);
$title = $row->_field_data['nid']['entity']->title; 
$body = $row->_field_data['nid']['entity']->body['und'][0]['value'];
$body = strip_tags($body);
if (strlen($body) > 150) {
  // truncate string
 $stringCut = substr($body, 0, 150);
 // make sure it ends in a word so assassinate doesn't become ass...
 $body = substr($stringCut, 0, strrpos($stringCut, ' ')).'... <a href="' . $base_path  . $path_alias . '">Read More</a>'; 
}
$date = isset($row->_field_data['nid']['entity']->field_article_date['und'][0]['value']) ? $row->_field_data['nid']['entity']->field_article_date['und'][0]['value'] : '';
$auther = isset($row->_field_data['nid']['entity']->field_article_author['und'][0]['title']) ? $row->_field_data['nid']['entity']->field_article_author['und'][0]['title'] : '';
$date_timestamp =  strtotime($date);
$display_date = date('F d, Y', $date_timestamp);
if($auther){
   $display_auther  = '<span> by </span> '. $auther;
  }
$submited = '<span>'.$article_type_name->name.' | </span>' . $display_date . $display_auther;
?>
<div class ='mema-news-main-wrapper'>
  <div class ='mema-news-main-wrapper-content'>
    <h1 class="mema-news-title"><?php print $title; ?></h1>
    <div class="mema-news-submited"><?php print $submited; ?></div>
    <div class="mema-news-body"><?php print $body; ?></div>
 </div>
</div>
