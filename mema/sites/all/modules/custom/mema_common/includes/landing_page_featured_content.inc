<?php
/**
 * @file
 *   Returns a form to set featured content for landing pages
 */

// load primary menu items, which will be the landing pages
function landing_page_featured_content() {
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
        $group_title = ucwords($menu_title);
        $form["mema_fs_featured_content_$group_title"] = array(
          '#type'=>'fieldset',
          '#title'=>t($group_title),
          '#collapsible'=>true,
          '#collapsed'=>TRUE,
        );

        // loop to add 3 sets of fields per landing page.
        for ($i = 1; $i < 4; $i++) {
          $variable_name = str_replace(' ', '_', strtolower($menu_title));
          $landing_pg_title = 'mema_featured_content_title_' . $i . '_' . $variable_name;
          $landing_pg_date = 'mema_featured_content_date_' . $i . '_' .  $variable_name;
          $landing_pg_desc = 'mema_featured_content_desc_' . $i . '_' .  $variable_name;
          $landing_pg_url = 'mema_featured_content_url_' . $i . '_' .  $variable_name;
          $landing_pg_target = 'mema_featured_content_url_target_' . $i . '_' .  $variable_name;

          $pg_title = variable_get($landing_pg_title, '');
          $pg_date = variable_get($landing_pg_date, '');
          $pg_content = variable_get($landing_pg_desc, '');
          if(is_array($pg_content) && count($pg_content)) {
            $pg_content = $pg_content['value'];
          }
          $pg_url = variable_get($landing_pg_url, '');

          if($i % 2) {
            $odd_even = 'odd-cls';
          } else {
            $odd_even = 'even-cls';
          }
          
          $form["mema_fs_featured_content_$group_title"][$landing_pg_title] = array(
            '#type' => 'textfield',
            '#title' => t('Title'),
            '#description' => t('Please add title for @blk_name page here', array('@blk_name' => $group_title)),
            '#default_value' => $pg_title,
            '#prefix' => "<div class = '$odd_even'>",
          );
          $form["mema_fs_featured_content_$group_title"][$landing_pg_date] = array(
            '#type' => 'date_popup',
            '#date_format' => 'F j, Y',
            '#date_increment' => 30,
            '#date_year_range' => '-1:+2',
            '#description' => t('Please add date for @blk_name page here', array('@blk_name' => $group_title)),
            '#default_value' => $pg_date,
          );
          $form["mema_fs_featured_content_$group_title"][$landing_pg_desc] = array(
            '#type' => 'textarea',
            '#title' => t('Description'),
            '#description' => t('Please add description for @blk_name page here', array('@blk_name' => $group_title)),
            '#default_value' => $pg_content,
          );
          $form["mema_fs_featured_content_$group_title"][$landing_pg_url] = array(
            '#type' => 'textfield',
            '#title' => t('URL'),
            '#description' => t('Please add absolute URL for Read More link at @blk_name page', array('@blk_name' => $group_title)),
            '#default_value' => $pg_url,
          );
          if(variable_get($landing_pg_target, 0)) {
            $form["mema_fs_featured_content_$group_title"][$landing_pg_target] = array(
              '#type' => 'checkbox',
              '#title' => t('New Window'),
              '#attributes' => array('checked' => 'checked'),
              '#description' => t('Please check to Open URL in a New Window for Read More link at @blk_name page', array('@blk_name' => $group_title)),
              '#suffix' => "</div>",
            );
          } else {
            $form["mema_fs_featured_content_$group_title"][$landing_pg_target] = array(
              '#type' => 'checkbox',
              '#title' => t('New Window'),
              '#description' => t('Please check to Open URL in a New Window for Read More link at @blk_name page', array('@blk_name' => $group_title)),
              '#suffix' => "</div>",
            );
          }
        }
      }
    }
    return system_settings_form($form);
  } else {
    return drupal_set_message(t('No landing page found to set Featured Content for.'));
  }
}
?>
