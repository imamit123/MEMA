<?php
/**
*
* TPL use for overright resource detail Page.
**/
$nid =  $node->nid;
$title =  $node->title;
$addblock = module_invoke('addthis','block_view','addthis_block');
$body =  $node->body['und'][0]['value'];
if(array_key_exists('und', $node->field_author_name)){
  $author_name =  $node->field_author_name['und'][0]['value'];
}
if(array_key_exists('und', $node->field_resource_media_image)){
  $image_public_url =  $node->field_resource_media_image['und'][0]['uri'];
}
$style = 'news_detail';
if(!empty($image_public_url) && !is_null($image_public_url)) {
  $media_image_path = image_style_url($style, $image_public_url);
}
$date =  $node->field_date['und'][0]['value'];
$timestampdate = strtotime($date);
$resourcedate = date("F j, Y",$timestampdate);
$resource_topic =  $node->field_resource_topic['und'];
$body =  $node->body['und'][0]['value'];
$resource_topic1 = '';
foreach ($resource_topic as $key => $value) {
	$resource_topic1 .= $value['taxonomy_term']->name . ', ';
}
$resource_topic1 = rtrim($resource_topic1,', ');
?>
<script type="text/javascript" src="https://s7.addthis.com/js/300/addthis_widget.js"></script>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="resource-detail-main-wrapper">
    <h2 class="resource-detail-title"><?php print $title; ?></h2>
    <div class="resource-detail-topic">
      <?php if(array_key_exists('und', $node->field_author_name)){ ?>
      <div class="resource-detail-author">By: <?php print $author_name; ?></div>
      <?php } ?>
      <div class="resource-detail-date">Date: <?php print $resourcedate; ?></div>
      <div class="resource-detail-topic">Topic: <?php print $resource_topic1; ?></div>
    </div>
    <?php if(!empty($image_public_url) && !is_null($image_public_url)){ ?>
    <div class="resource-detail-image"><img src='<?php print $media_image_path; ?>'/></div>
    <?php } ?>
    <div class="resource-detail-body"><?php print $body; ?></div>
    <?php if(arg(0) != 'print') {?>
      <div class="main-content-addthis-button" ><?php print render($addblock['content']); ?></div>
       <?php  if (module_exists('print')) { ?>
      <div class="main-content-print-button"><?php print print_insert_link(); ?></div>
      <?php } } ?>
 </div>
</div>
