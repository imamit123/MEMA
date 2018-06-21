<?php

/**
*
*Tpl use for Display background image .
**/
//out($row); die;

//For Default image in article landing page.

$functions = GAI::getInstance();
$views_name = 'article';
$style = 'news_landing_page';
$img_url = $functions->gtdefaultImage('article');
if(!empty($img_url) && !is_null($img_url)) {
  $news_landing_path_default_image = image_style_url($style, $img_url);
}
//end
if(array_key_exists('und', $row->_field_data['nid']['entity']->field_media_article_image)){
  $image_public_url = $row->_field_data['nid']['entity']->field_media_article_image['und'][0]['uri'];
}
$file_uri = file_create_url(file_build_uri($image_public_url));
if(!empty($image_public_url) && !is_null($image_public_url)) {
  $news_landing_path = image_style_url($style, $image_public_url);
  print '<div class="slide-image" style="background-image:url(' . $news_landing_path . ')">' . $output . '</div>';
}else{
  print '<div class="slide-image" style="background-image:url(' . $news_landing_path_default_image . ')">' . $output . '</div>';
}
?>	