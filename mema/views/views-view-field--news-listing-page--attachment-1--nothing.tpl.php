<?php

$image_name = $row->file_managed_file_usage_filename;
$style = 'news_landing_page';
$news_landing_path = image_style_url($style, $image_name);
print '<div class="slide-image" style="background-image:url(' . $news_landing_path . ')">' . $output . '</div>';

//print $output;
?>	