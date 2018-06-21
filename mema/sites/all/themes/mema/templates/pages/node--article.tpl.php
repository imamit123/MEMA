<?php
/**
*
* TPL use for overright news detail Page.
**/

//out($node->field_media_article_image);
$addblock = module_invoke('addthis','block_view','addthis_block');
$printblock = module_invoke('block', 'block_view', 16);
$title =  $node->title;
$subtitle =  $node->field_subtitle['und'][0]['value'];
$body =  $node->body['und'][0]['value'];
$author =  $node->field_article_author['und'][0]['title'];
$source =  $node->field_source['und'][0]['value'];
$date =  $node->field_article_date['und'][0]['value'];
$timestampdate = strtotime($date);
$newsdate = date("F j, Y",$timestampdate);
// if(array_key_exists('und', $node->field_media_article_image)){
//   $image_public_url =  $node->field_media_article_image['und'][0]['uri'];
//   $media_image_title =  $node->field_media_article_image['und'][0]['title'];
// }
if(array_key_exists('und', $node->field_common_thumbnail_image)){
  $image_public_url =  $node->field_common_thumbnail_image['und'][0]['uri'];
  $media_image_title =  $node->field_common_thumbnail_image['und'][0]['title'];
}
if(array_key_exists('und', $node->field_media_article_author)){
  $media_author = $node->field_media_article_author['und'][0]['value'];
  $media_author = 'Photo by ' . $media_author;
}
$style = 'news_detail';
if(!empty($image_public_url) && !is_null($image_public_url)) {
 $media_image_path = image_style_url($style, $image_public_url);
}
?>
<script type="text/javascript" src="https://s7.addthis.com/js/300/addthis_widget.js"></script>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="news-detail-main-wrapper">
    <h2 class="news-detail-main-title"><?php print $title; ?></h2>
    <div class="news-detail-main-content-wrapper">
      <div class="news-detail-main-content-submited">
        <h3 class="news-detail-main-content-submited-subtitle"><?php print $subtitle; ?></h3>
        <?php if ($author) { ?>
        <div class="news-detail-main-content-submited-byauther"><?php print 'By: ' . $author; ?></div>
        <?php } ?>
        <?php if ($newsdate) { ?>
        <div class="news-detail-main-content-submited-bydate"><?php print 'Date: '. $newsdate; ?></div>
        <?php } ?>
        <?php if ($source) { ?>
        <div class="news-detail-main-content-submited-source"><?php print 'Source: '. $source; ?></div>
        <?php } ?>
      </div>
      <?php if(!empty($image_public_url) && !is_null($image_public_url)){ ?>
      <div class="news-detail-main-image-wrapper">
        <div class="news-detail-main-image-display">
          <img src='<?php print $media_image_path; ?>'/>
        </div>
        <div class="news-detail-main-image-phototitle"><?php print $media_image_title; ?></div>
        <div class="news-detail-main-image-wrapper-photo-by"><?php print $media_author; ?></div>
      </div>
      <div class="news-detail-main-content-body"><?php print $body; ?></div>
      <?php } else { ?>
      <div class="news-detail-main-content-body no-article-img"><?php print $body; ?></div>
      <?php } if(arg(0) != 'print') {?>
      <div class="main-content-addthis-button" ><?php print render($addblock['content']); ?></div>
      <?php  if (module_exists('print')) { ?>
      <div class="main-content-print-button"><?php print print_insert_link(); ?></div>
      <?php } } ?>
    </div>
  </div>
</div>
