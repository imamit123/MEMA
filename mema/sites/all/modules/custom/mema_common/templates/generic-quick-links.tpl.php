<?php
/**
 * @file
 *   Theme the output for Quick links Block
 */
?>

<?php if (isset($variables['mema_quick_links_content'])) : ?>
  <div class = 'mema-quick-lnks-blk mema-blk-wrapper'>
    <div class = 'quick-links-content'><?php print unserialize($variables['mema_quick_links_content']); ?></div>
  </div>
<?php endif; ?>
