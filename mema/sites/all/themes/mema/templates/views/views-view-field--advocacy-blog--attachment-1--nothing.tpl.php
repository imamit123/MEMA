<?php

/**
*
*Tpl use for Display background image . in Article newsletter
**/
$node = node_load($row->nid);
$image_public_url = $node->field_media_article_image['und'][0]['uri'];
if(!empty($image_public_url) && !is_null($image_public_url)) {
$style = 'news_landing_page';
$news_landing_path = image_style_url($style, $image_public_url);
  print '<div class="slide-image" style="background-image:url(' . $news_landing_path . ')">' . $output . '</div>';
}else{
  print $output;
}


?>	