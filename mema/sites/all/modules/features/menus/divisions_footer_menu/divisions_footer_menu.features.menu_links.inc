<?php
/**
 * @file
 * divisions_footer_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function divisions_footer_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-menu_industry-career-center:<front>
  $menu_links['menu-footer-menu_industry-career-center:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'INDUSTRY CAREER CENTER',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_industry-career-center:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_mfsg:<front>
  $menu_links['menu-footer-menu_mfsg:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'MFSG',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_mfsg:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_privacy-policyterms-of-use:<front>
  $menu_links['menu-footer-menu_privacy-policyterms-of-use:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'PRIVACY POLICY/TERMS OF USE',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_privacy-policyterms-of-use:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_site-map:<front>
  $menu_links['menu-footer-menu_site-map:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'SITE MAP',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_site-map:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('INDUSTRY CAREER CENTER');
  t('MFSG');
  t('PRIVACY POLICY/TERMS OF USE');
  t('SITE MAP');

  return $menu_links;
}
