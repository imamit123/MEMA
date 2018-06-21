<?php
/**
 * @file
 * divisons_top_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function divisons_top_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-top-menu_about:<front>
  $menu_links['menu-top-menu_about:<front>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'ABOUT',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_about:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_career:<front>
  $menu_links['menu-top-menu_career:<front>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'CAREER',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_career:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_divisions:<front>
  $menu_links['menu-top-menu_divisions:<front>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'DIVISIONS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_divisions:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_join:<front>
  $menu_links['menu-top-menu_join:<front>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'JOIN',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_join:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_logout:user/logout
  $menu_links['menu-top-menu_logout:user/logout'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'LOGOUT',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-top-menu_logout:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_media:<front>
  $menu_links['menu-top-menu_media:<front>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'MEDIA',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_media:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_search:<front>
  $menu_links['menu-top-menu_search:<front>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'SEARCH',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_search:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('ABOUT');
  t('CAREER');
  t('DIVISIONS');
  t('JOIN');
  t('LOGOUT');
  t('MEDIA');
  t('SEARCH');

  return $menu_links;
}
