<?php
/**
 * @file
 *   Returns a form to set quick links for landing pages
 */

// load primary menu items, which will be the landing pages
function landing_page_quick_links() {
  $tmp_tree = menu_tree('main-menu');
  $menu_tree = array();

  foreach($tmp_tree as $val) {
    $tmp_title = $val['#title'];
    $tmp_url = $val['#href'];
    $menu_tree[$tmp_title] = $tmp_url;
  }

  if(count($menu_tree)) {
    foreach($menu_tree as $menu_title => $menu_url) {
      if($menu_title != '') {
        $landing_pg_title = ucwords($menu_title);
        $landing_pg_content = 'mema_quik_link_content_' . str_replace(' ', '_', strtolower($menu_title));
        $landing_pg_url = 'mema_quik_link_url_' . str_replace(' ', '_', strtolower($menu_title));
        
        $form["mema_fs_$landing_pg_content"] = array(
          '#type'=>'fieldset',
          '#title'=>t($landing_pg_title),
          '#collapsible'=>true,
          '#collapsed'=>TRUE,
        );

        $pg_content = variable_get($landing_pg_content, '');
        if(is_array($pg_content) && count($pg_content)) {
          $pg_content = $pg_content['value'];
        }

        $form["mema_fs_$landing_pg_content"][$landing_pg_content] = array(
          '#type' => 'text_format',
          '#title' => t('Quick Links Content'),
          '#description' => t('Please add quick links block content for @blk_name page here', array('@blk_name' => $landing_pg_title)),
          '#default_value' => $pg_content,
          '#format' => 'filtered_html',
          '#base_type' => "textarea",
        );
        $form["mema_fs_$landing_pg_content"][$landing_pg_url] = array(
          '#type' => 'hidden',
          '#value' => $menu_url,
        );
      }
    }
    return system_settings_form($form);
  } else {
    return drupal_set_message(t('No landing page found to set Quick Links for.'));
  }
}
?>
