<?php
/**
*
* Large Event detail page
**/
$addblock = module_invoke('addthis','block_view','addthis_block');
$title =  $node->title;
$img_uri = '';
$subtitle =  $node->field_large_event_short_title['und'][0]['value'];
$body =  $node->body;
if (array_key_exists('und', $node->field_small_event_image)) {
  $img_uri =  $node->field_small_event_image['und'][0]['uri'];
}
$variables = array(
    'style_name' => 'large_event_detail_page',
    'path' => $img_uri,
   );
  $date =  $node->field_event_date['und'][0]['value'];
  if($node->field_event_end_date['und'][0]['value'] != 0){
    $lastdate =  $node->field_event_date['und'][0]['value2'];
    $Eventlastdate = date("F j, Y",$lastdate);
    $sign = ' - ';
}
$EventDate = date("F j, Y",$date);
$location =  $node->field_event_location['und'][0]['value'];
?>

<script type="text/javascript" src="https://s7.addthis.com/js/300/addthis_widget.js"></script>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="large-event-detail-main-wpapper">
   <div class="large-event-detail-title"><?php print $title; ?> </div>
   <div class="large-event-detail-startdate-location">
     <div class="large-event-detail-startdate"><?php print $EventDate.$sign.$Eventlastdate;?>
     <?php if (array_key_exists('und', $node->field_event_location)) { ?>
    <span>   <?php print ', '. $location; ?></span>
     <?php } ?>
     </div>
   </div>
  <?php if (array_key_exists('und', $node->field_small_event_image)) { ?>
   <div class="large-event-detail-image"><?php print theme_image_style($variables) ; ?></div>
   <?php } ?>
   <div class="large-event-detail-body"> <?php print render($content['body']); ?></div>
  <?php if(arg(0) != 'print') { ?>
  <div class="main-content-addthis-button" ><?php print render($addblock['content']); ?></div>
   <?php  if (module_exists('print')) { ?>
  <div class="main-content-print-button"><?php print print_insert_link(); ?></div>
   <?php } }?>
  </div>

</div>
