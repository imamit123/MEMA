<?php
/**
*
* TPL use for overright committee detail Page.
**/
$nid =  $node->nid;
$title =  $node->title;
$addblock = module_invoke('addthis','block_view','addthis_block');
$body =  $node->body['und'][0]['value'];
$image_public_url =  $node->field_committee_media_image['und'][0]['uri'];
$style = 'committee_detail_page';

if(!empty($image_public_url) && !is_null($image_public_url)) {
  $media_image_path = image_style_url($style, $image_public_url);
}
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
<div class="committee-detail-main-wrapper">
<div class="committee-detail-main-wrapper-node">
  <h2 class="committee-detail-main-title"><?php print $title; ?></h2>
    <div class="committee-detail-main-content-wrapper">
       <?php if(!empty($image_public_url) && !is_null($image_public_url)){ ?>
       <div class="committee-detail-main-image"><img src='<?php print $media_image_path; ?>'/></div>
       <?php } ?>
       <div class="committee-detail-main-content-body"><?php print $body; ?></div>
       <?php if(arg(0) != 'print') {?>
      <div class="main-content-addthis-button" ><?php print render($addblock['content']); ?></div>
       <?php  if (module_exists('print')) { ?>
      <div class="main-content-print-button-committee"><?php print print_insert_link(); ?></div>
      <?php } }?>

      </div>
    </div>
 <?php
 if(array_key_exists('und', $node->field_related_events)){
 ?>
<div class="committee-detail-main-wrapper-event-list"><?php print views_embed_view('events','block_3', $nid); ?></div>
<?php } ?>
</div>
</div>
