<?php
  $style = 'homepage_right_side_feature_content_block';
    if(array_key_exists('und', $row->_field_data['nid']['entity']->field_rsf_background_image)){
    $image_public_url = $row->_field_data['nid']['entity']->field_rsf_background_image['und'][0]['uri'];
  }
  if (array_key_exists('und', $row->_field_data['nid']['entity']->field_rsf_image)) {
    $main_image_public_url =  $row->_field_data['nid']['entity']->field_rsf_image['und'][0]['uri'];
  }
 

  if(!empty($image_public_url) && !is_null($image_public_url)) {
    $news_landing_path = image_style_url($style, $image_public_url);
    print '<div class="slide-image" style="background-image:url(' . $news_landing_path . ')">' . $output . '</div>';
  }else{
    print $output;
  }
?>	

