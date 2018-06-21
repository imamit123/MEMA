<?php
/**
 * @file
 *   Theme the output for Featured Content Block
 */
?>

<?php if (isset($variables['mema_featured_content'])) : ?>
  <div class = 'mema-featured-content-blk mema-blk-wrapper'>
    <div class = 'fatured-content'><?php print unserialize($variables['mema_featured_content']); ?></div>
  </div>
<?php endif; ?>