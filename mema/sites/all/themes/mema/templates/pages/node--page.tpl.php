<?php
/**
 * Advocacy detail page
 */
$title =  $node->title;
$addblock = module_invoke('addthis','block_view','addthis_block');
if(array_key_exists('und', $node->field_page_subtitle)) {
    $subtitle =  $node->field_page_subtitle['und'][0]['value'];
}
$body =  $node->body['und'][0]['value'];
if(array_key_exists('und', $node->field_page_media_image)) {
   $image_public_url =  $node->field_page_media_image['und'][0]['uri'];
}
$style = 'advocacy_detail_page_image';

if(!empty($image_public_url) && !is_null($image_public_url)) {
  $media_image_path = image_style_url($style, $image_public_url);
}
?>
<script type="text/javascript" src="https://s7.addthis.com/js/300/addthis_widget.js"></script>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="advocacy-detail-main-wrapper">
  	<?php if(!empty($subtitle)): ?>
      <h2 class="advocacy-title"><?php print $subtitle; ?></h2>
    <?php endif; ?>
    <div class="advocacy-container">
    <?php if(!empty($image_public_url) && !is_null($image_public_url)): ?>
        <div class="advocacy-image-container"><img src='<?php print $media_image_path; ?>'/></div>
    <?php endif; ?>
      <div class="advocacy-body"><?php print $body; ?></div>
     <?php if(arg(0) != 'print') {?>
      <div class="main-content-addthis-button" ><?php print render($addblock['content']); ?></div>
       <?php  if (module_exists('print')) { ?>
      <div class="main-content-print-button"><?php print print_insert_link(); ?></div>
      <?php } } ?>
    </div>
  </div>
</div>
