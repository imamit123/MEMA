<?php
/**
*
* Small Event detail page
**/
$addblock = module_invoke('addthis','block_view','addthis_block');
$title =  $node->title;
$subtitle =  $node->field_small_event_short_title['und'][0]['value'];
$body =  $node->body['und'][0]['value'];
$event_image =  $node->field_small_event_image['und'][0]['uri'];
$style = 'small_event_detail_page_image';
$logostyle = 'small_event_sponsors_logo';
$event_image_path = image_style_url($style, $event_image);

$date =  $node->field_event_date['und'][0]['value'];
$EventDate = date("F j, Y",$date);

$start_time =  $node->field_event_start_time['und'][0]['value_formatted'];
$end_time =  $node->field_event_end_time['und'][0]['value_formatted'];
$time_zone =  $node->field_event_time_zone['und'][0]['value'];

$location =  $node->field_event_location['und'][0]['value'];

$sponsors_logos =  $node->field_sponsors_logos['und'];

$contact_phone_number =  $node->field_event_contact_phone['und'][0]['number'];
$contact_phone_number = ($contact_phone_number == '' ?  '' : '+1 ' . $contact_phone_number);

$contact_email =  trim($node->field_event_contact_email['und'][0]['email']);
if ($contact_phone_number != '') {
  $contact_email = ($contact_email == '' ?  '' : $contact_email . ', ');
} else {
  $contact_email = ($contact_email == '' ?  '' : $contact_email);
}

$contact_name =  $node->field_event_contact_name['und'][0]['value'];
if ($contact_phone_number != '' || $contact_email != '') {
  $contact_name = ($contact_name == '' ?  '' : $contact_name . ', ');
} else {
  $contact_name = ($contact_name == '' ?  '' : $contact_name);
}


// $contact_phone_countrycode =  $node->field_event_contact_phone['und'][0]['countrycode'];
// $contact_phone_countrycode = ($contact_phone_countrycode = '' ?  '' : $contact_phone_countrycode . ', ');
$registration_link =  $node->field_registration['und'][0]['display_url'];
?>

<script type="text/javascript" src="https://s7.addthis.com/js/300/addthis_widget.js"></script>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="small-event-detail-main-wpapper">
    <h2 class="small-event-detail-event-title"><?php print $title; ?></h2>
     <?php if (array_key_exists('und', $node->field_small_event_image)) { ?>
    <div class="small-event-detail-event-image"><img src='<?php print $event_image_path; ?>'/>
    </div>
    <?php } ?>
    <div class="small-event-detail">
      <div class="small-event-date"> <?php print "Date: " . $EventDate;?></div>
      <div class="samll-event-start-time"><?php print "Start: " . $start_time .' ' .$time_zone;?></div>
      <div class="samll-event-end-time"><?php print "End: " . $end_time . ' ' . $time_zone;?></div>
      <div class="samll-event-location"><?php print "Location: " . $location;?></div>
    </div>
  </div>
  <?php if(isset($registration_link)) {?>
  <div class="small-event-detail-event-register-link"><?php print l(t('Register'), $registration_link, array('attributes' => array('target'=>'_blank'))); ?></div>
  <?php } ?>
  <?php if (array_key_exists('und', $node->field_sponsors_logos)) { ?>
  <div class="small-event-sponsors-logos">Sponsors
    <ul>
    <?php
    foreach ($sponsors_logos as $key => $value) {
      $img_uri = $value['uri'];
      $variables = array(
        'style_name' => $logostyle,
        'path' => $img_uri,
      );
     	echo '<li class="small-event-detail-sponsors-logo">' . theme_image_style($variables) . '</li>';
    }
    ?>
  </ul>
</div>
<?php } ?>
  <div class="small-event-detail-body"><?php print $body; ?>
  </div>
 <?php if(arg(0) != 'print') {?>
      <div class="main-content-addthis-button" ><?php print render($addblock['content']); ?></div>
       <?php  if (module_exists('print')) { ?>
      <div class="main-content-print-button-committee"><?php print print_insert_link(); ?></div>
      <?php } }?>
  <?php if(isset($contact_name) || isset($contact_email) || isset($contact_phone_number)) {?>
  <div class="small-event-detail-info">For Further Information:
    <?php if(isset($contact_name)) {?>
    <span class="small-event-detail-name"><?php print $contact_name; ?></span>
    <?php } ?>
    <?php if(isset($contact_email)) {?>
    <span class="small-event-detail-email"><?php print $contact_email; ?></span>
     <?php } ?>
     <?php if(isset($contact_phone_number)) {?>
    <span class="small-event-detail-mobile"><?php print $contact_phone_number; ?></span>
    <?php } ?>
  </div>
  <?php }?>
</div>
