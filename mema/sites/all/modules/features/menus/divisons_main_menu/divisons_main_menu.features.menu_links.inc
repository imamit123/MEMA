<?php
/**
 * @file
 * divisons_main_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function divisons_main_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-us:<front>
  $menu_links['main-menu_about-us:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about-us:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_who-we-are:<front>',
  );
  // Exported menu link: main-menu_board-of-directors:<front>
  $menu_links['main-menu_board-of-directors:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Board of Directors',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_board-of-directors:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_who-we-are:<front>',
  );
  // Exported menu link: main-menu_committee-1:<front>
  $menu_links['main-menu_committee-1:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Committee 1',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_committee-1:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_councils:councils',
  );
  // Exported menu link: main-menu_committee-2:<front>
  $menu_links['main-menu_committee-2:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Committee 2',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_committee-2:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_councils:councils',
  );
  // Exported menu link: main-menu_event-1:<front>
  $menu_links['main-menu_event-1:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Event 1',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_event-1:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_events:events',
  );
  // Exported menu link: main-menu_industry-career-center-:<front>
  $menu_links['main-menu_industry-career-center-:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Industry Career Center ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_industry-career-center-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'main-menu_who-we-are:<front>',
  );
  // Exported menu link: main-menu_join-the-mema-network:<front>
  $menu_links['main-menu_join-the-mema-network:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Join the MEMA Network',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_join-the-mema-network:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_who-we-are:<front>',
  );
  // Exported menu link: main-menu_media:<front>
  $menu_links['main-menu_media:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_media:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_who-we-are:<front>',
  );
  // Exported menu link: main-menu_mema-divisions:<front>
  $menu_links['main-menu_mema-divisions:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'MEMA Divisions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_mema-divisions:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_who-we-are:<front>',
  );
  // Exported menu link: main-menu_news-1:news/newsletter/95
  $menu_links['main-menu_news-1:news/newsletter/95'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news/newsletter/95',
    'router_path' => 'news/newsletter',
    'link_title' => 'News 1',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_news-1:news/newsletter/95',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_news:news',
  );
  // Exported menu link: main-menu_news-2:news/newsletter/93
  $menu_links['main-menu_news-2:news/newsletter/93'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news/newsletter/93',
    'router_path' => 'news/newsletter',
    'link_title' => 'News 2',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_news-2:news/newsletter/93',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_news:news',
  );
  // Exported menu link: main-menu_news-3:news/newsletter/91
  $menu_links['main-menu_news-3:news/newsletter/91'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news/newsletter/91',
    'router_path' => 'news/newsletter',
    'link_title' => 'News 3',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_news-3:news/newsletter/91',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_news:news',
  );
  // Exported menu link: main-menu_news-4:news/newsletter/92
  $menu_links['main-menu_news-4:news/newsletter/92'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news/newsletter/92',
    'router_path' => 'news/newsletter',
    'link_title' => 'News 4',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_news-4:news/newsletter/92',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_news:news',
  );
  // Exported menu link: main-menu_news-4:news/newsletter/94
  $menu_links['main-menu_news-4:news/newsletter/94'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news/newsletter/94',
    'router_path' => 'news/newsletter',
    'link_title' => 'News 4',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_news-4:news/newsletter/94',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_news:news',
  );
  // Exported menu link: main-menu_news:news
  $menu_links['main-menu_news:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_news:news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_sponsorship:<front>
  $menu_links['main-menu_sponsorship:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Sponsorship',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sponsorship:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_who-we-are:<front>',
  );
  // Exported menu link: main-menu_the-value-of-membership:<front>
  $menu_links['main-menu_the-value-of-membership:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'The Value of Membership',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_the-value-of-membership:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_who-we-are:<front>',
  );
  // Exported menu link: main-menu_who-we-are:<front>
  $menu_links['main-menu_who-we-are:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Who We Are',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_who-we-are:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Board of Directors');
  t('Committee 1');
  t('Committee 2');
  t('Event 1');
  t('Industry Career Center ');
  t('Join the MEMA Network');
  t('MEMA Divisions');
  t('Media');
  t('News');
  t('News 1');
  t('News 2');
  t('News 3');
  t('News 4');
  t('Sponsorship');
  t('The Value of Membership');
  t('Who We Are');

  return $menu_links;
}
