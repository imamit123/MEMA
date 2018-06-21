<?php

/**
*
*Tpl use for Display background image . in Article newsletter
**/
//out($row); die;
$image_public_url = $row->file_managed_file_usage_uri;
if(!empty($image_public_url) && !is_null($image_public_url)) {
$style = 'news_landing_page';
$news_landing_path = image_style_url($style, $image_public_url);
  print '<div class="slide-image" style="background-image:url(' . $news_landing_path . ')">' . $output . '</div>';
}else{
  print $output;
}


?>	