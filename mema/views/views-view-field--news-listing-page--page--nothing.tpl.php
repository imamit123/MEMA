<?php
/**
*
*Apply condetion when auther is not display .
*/
global $base_path;
$display_auther = '';
$nid = $row->_field_data['nid']['entity']->nid; 
$title = $row->_field_data['nid']['entity']->title; 
$body = $row->_field_data['nid']['entity']->body[und][0]['value'];
$body = strip_tags($body);
if (strlen($body) > 300) {
  // truncate string
 $stringCut = substr($body, 0, 300);
 // make sure it ends in a word so assassinate doesn't become ass...
 $body = substr($stringCut, 0, strrpos($stringCut, ' ')).'... <a href="'.$base_path.'node/'.$nid.'">Read More</a>'; 
}
$date = isset($row->_field_data['nid']['entity']->field_article_date['LANGUAGE_NONE'][0]['value']) ? $row->_field_data['nid']['entity']->field_article_date['LANGUAGE_NONE'][0]['value'] : '';
$auther = isset($row->_field_data['nid']['entity']->field_article_author['LANGUAGE_NONE'][0]['title']) ? $row->_field_data['nid']['entity']->field_article_author['LANGUAGE_NONE'][0]['title'] : '';
$date_timestamp =  strtotime($date);
$display_date = date('F d, Y', $date_timestamp);
if($auther){
   $display_auther  = '<span> by </span> '. $auther;
  }
$submited = '<span>PRESS RELEASE1111 | </span>' . $display_date . $display_auther;
?>
<div class ='mema-news-main-wrapper'>
    <div class ='mema-news-main-wrapper-content'>
        <div class="mema-news-title"><?php print $title; ?></div>
        <div class="mema-news-submited"><?php print $submited; ?></div>
        <div class="mema-news-body"><?php print $body; ?></div>
    </div>
</div>
