<?php
/**
 * @file
 * global_user_roles_and_permissions.features.roles_permissions.inc
 */

/**
 * Implements hook_default_roles_permissions().
 */
function global_user_roles_and_permissions_default_roles_permissions() {
  $roles = array();

  // Exported role: Content Administrator
  $roles['Content Administrator'] = array(
    'name' => 'Content Administrator',
    'weight' => 4,
    'permissions' => array(
      'access administration menu' => TRUE,
      'access administration pages' => TRUE,
      'access content' => TRUE,
      'access content overview' => TRUE,
      'access contextual links' => TRUE,
      'access site reports' => TRUE,
      'access the block administration page' => TRUE,
      'access user profiles' => TRUE,
      'add terms in article_type' => TRUE,
      'add terms in event_type' => TRUE,
      'add terms in resource_topic' => TRUE,
      'add terms in resource_type' => TRUE,
      'add terms in tags' => TRUE,
      'add terms in topics' => TRUE,
      'administer menu' => TRUE,
      'administer menu attributes' => TRUE,
      'administer modules' => TRUE,
      'administer permissions' => TRUE,
      'administer redirects' => TRUE,
      'administer users' => TRUE,
      'configure all block body fields' => TRUE,
      'configure all block descriptions' => TRUE,
      'configure all block titles' => TRUE,
      'configure all content type visibility settings' => TRUE,
      'configure all language settings' => TRUE,
      'configure all page visibility settings' => TRUE,
      'configure all region settings' => TRUE,
      'configure all role visibility settings' => TRUE,
      'configure all user visibility settings' => TRUE,
      'configure all visibility settings' => TRUE,
      'create article content' => TRUE,
      'create background_image content' => TRUE,
      'create committee content' => TRUE,
      'create division_promo content' => TRUE,
      'create homepage_background_video content' => TRUE,
      'create homepage_feature content' => TRUE,
      'create homepage_hero content' => TRUE,
      'create large_event content' => TRUE,
      'create media content' => TRUE,
      'create page content' => TRUE,
      'create person content' => TRUE,
      'create resource content' => TRUE,
      'create small_event content' => TRUE,
      'create url aliases' => TRUE,
      'delete any article content' => TRUE,
      'delete any background_image content' => TRUE,
      'delete any committee content' => TRUE,
      'delete any division_promo content' => TRUE,
      'delete any homepage_background_video content' => TRUE,
      'delete any homepage_feature content' => TRUE,
      'delete any large_event content' => TRUE,
      'delete any media content' => TRUE,
      'delete any page content' => TRUE,
      'delete any person content' => TRUE,
      'delete any resource content' => TRUE,
      'delete any small_event content' => TRUE,
      'delete own article content' => TRUE,
      'delete own background_image content' => TRUE,
      'delete own committee content' => TRUE,
      'delete own division_promo content' => TRUE,
      'delete own homepage_background_video content' => TRUE,
      'delete own homepage_feature content' => TRUE,
      'delete own homepage_hero content' => TRUE,
      'delete own large_event content' => TRUE,
      'delete own media content' => TRUE,
      'delete own page content' => TRUE,
      'delete own person content' => TRUE,
      'delete own resource content' => TRUE,
      'delete own small_event content' => TRUE,
      'edit any article content' => TRUE,
      'edit any background_image content' => TRUE,
      'edit any committee content' => TRUE,
      'edit any division_promo content' => TRUE,
      'edit any homepage_background_video content' => TRUE,
      'edit any homepage_feature content' => TRUE,
      'edit any homepage_hero content' => TRUE,
      'edit any large_event content' => TRUE,
      'edit any media content' => TRUE,
      'edit any page content' => TRUE,
      'edit any person content' => TRUE,
      'edit any resource content' => TRUE,
      'edit any small_event content' => TRUE,
      'edit media' => TRUE,
      'edit own article content' => TRUE,
      'edit own background_image content' => TRUE,
      'edit own committee content' => TRUE,
      'edit own division_promo content' => TRUE,
      'edit own homepage_background_video content' => TRUE,
      'edit own homepage_feature content' => TRUE,
      'edit own homepage_hero content' => TRUE,
      'edit own large_event content' => TRUE,
      'edit own media content' => TRUE,
      'edit own page content' => TRUE,
      'edit own person content' => TRUE,
      'edit own resource content' => TRUE,
      'edit own small_event content' => TRUE,
      'edit terms in 1' => TRUE,
      'edit terms in 2' => TRUE,
      'edit terms in 3' => TRUE,
      'edit terms in 4' => TRUE,
      'edit terms in 5' => TRUE,
      'edit terms in 6' => TRUE,
      'flush caches' => TRUE,
      'import media' => TRUE,
      'manipulate all queues' => TRUE,
      'manipulate queues' => TRUE,
      'override article published option' => TRUE,
      'override committee published option' => TRUE,
      'override homepage_feature published option' => TRUE,
      'override homepage_hero promote to front page option' => TRUE,
      'override homepage_hero published option' => TRUE,
      'override large_event published option' => TRUE,
      'override page published option' => TRUE,
      'override person published option' => TRUE,
      'override resource published option' => TRUE,
      'override small_event published option' => TRUE,
      'revert revisions' => TRUE,
      'search content' => TRUE,
      'use advanced search' => TRUE,
      'use text format full_html' => TRUE,
      'view all blocks' => TRUE,
      'view media' => TRUE,
      'view own unpublished content' => TRUE,
      'view revisions' => TRUE,
      'view the administration theme' => TRUE,
    ),
  );

  // Exported role: Content Editor
  $roles['Content Editor'] = array(
    'name' => 'Content Editor',
    'weight' => 3,
    'permissions' => array(
      'access administration menu' => TRUE,
      'access administration pages' => TRUE,
      'access content' => TRUE,
      'access content overview' => TRUE,
      'add terms in article_type' => TRUE,
      'add terms in event_type' => TRUE,
      'add terms in resource_topic' => TRUE,
      'add terms in resource_type' => TRUE,
      'add terms in tags' => TRUE,
      'add terms in topics' => TRUE,
      'create article content' => TRUE,
      'create background_image content' => TRUE,
      'create committee content' => TRUE,
      'create division_promo content' => TRUE,
      'create homepage_background_video content' => TRUE,
      'create large_event content' => TRUE,
      'create page content' => TRUE,
      'create person content' => TRUE,
      'create small_event content' => TRUE,
      'edit own article content' => TRUE,
      'edit own background_image content' => TRUE,
      'edit own committee content' => TRUE,
      'edit own division_promo content' => TRUE,
      'edit own homepage_background_video content' => TRUE,
      'edit own large_event content' => TRUE,
      'edit own page content' => TRUE,
      'edit own person content' => TRUE,
      'edit own small_event content' => TRUE,
      'use text format full_html' => TRUE,
      'view own unpublished content' => TRUE,
      'view revisions' => TRUE,
      'view the administration theme' => TRUE,
    ),
  );

  // Exported role: Site Manager
  $roles['Site Manager'] = array(
    'name' => 'Site Manager',
    'weight' => 5,
    'permissions' => array(
      'access administration menu' => TRUE,
      'access administration pages' => TRUE,
      'access content overview' => TRUE,
      'access contextual links' => TRUE,
      'access site reports' => TRUE,
      'access the block administration page' => TRUE,
      'access user profiles' => TRUE,
      'add terms in article_type' => TRUE,
      'add terms in event_type' => TRUE,
      'add terms in resource_topic' => TRUE,
      'add terms in resource_type' => TRUE,
      'add terms in tags' => TRUE,
      'add terms in topics' => TRUE,
      'administer menu' => TRUE,
      'administer menu attributes' => TRUE,
      'administer modules' => TRUE,
      'administer permissions' => TRUE,
      'administer redirects' => TRUE,
      'administer url aliases' => TRUE,
      'administer users' => TRUE,
      'configure all block body fields' => TRUE,
      'configure all block descriptions' => TRUE,
      'configure all block titles' => TRUE,
      'configure all content type visibility settings' => TRUE,
      'configure all language settings' => TRUE,
      'configure all page visibility settings' => TRUE,
      'configure all region settings' => TRUE,
      'configure all role visibility settings' => TRUE,
      'configure all user visibility settings' => TRUE,
      'configure all visibility settings' => TRUE,
      'create article content' => TRUE,
      'create background_image content' => TRUE,
      'create committee content' => TRUE,
      'create division_promo content' => TRUE,
      'create homepage_background_video content' => TRUE,
      'create homepage_feature content' => TRUE,
      'create homepage_hero content' => TRUE,
      'create large_event content' => TRUE,
      'create media content' => TRUE,
      'create page content' => TRUE,
      'create person content' => TRUE,
      'create resource content' => TRUE,
      'create small_event content' => TRUE,
      'create url aliases' => TRUE,
      'cron permission' => TRUE,
      'delete any article content' => TRUE,
      'delete any background_image content' => TRUE,
      'delete any committee content' => TRUE,
      'delete any division_promo content' => TRUE,
      'delete any homepage_background_video content' => TRUE,
      'delete any homepage_feature content' => TRUE,
      'delete any homepage_hero content' => TRUE,
      'delete any large_event content' => TRUE,
      'delete any media content' => TRUE,
      'delete any page content' => TRUE,
      'delete any person content' => TRUE,
      'delete any resource content' => TRUE,
      'delete any small_event content' => TRUE,
      'delete own article content' => TRUE,
      'delete own background_image content' => TRUE,
      'delete own committee content' => TRUE,
      'delete own division_promo content' => TRUE,
      'delete own homepage_background_video content' => TRUE,
      'delete own homepage_feature content' => TRUE,
      'delete own homepage_hero content' => TRUE,
      'delete own large_event content' => TRUE,
      'delete own media content' => TRUE,
      'delete own person content' => TRUE,
      'delete own resource content' => TRUE,
      'delete own small_event content' => TRUE,
      'edit any article content' => TRUE,
      'edit any background_image content' => TRUE,
      'edit any committee content' => TRUE,
      'edit any division_promo content' => TRUE,
      'edit any homepage_background_video content' => TRUE,
      'edit any homepage_feature content' => TRUE,
      'edit any homepage_hero content' => TRUE,
      'edit any large_event content' => TRUE,
      'edit any media content' => TRUE,
      'edit any page content' => TRUE,
      'edit any person content' => TRUE,
      'edit any resource content' => TRUE,
      'edit any small_event content' => TRUE,
      'edit media' => TRUE,
      'edit own article content' => TRUE,
      'edit own background_image content' => TRUE,
      'edit own committee content' => TRUE,
      'edit own division_promo content' => TRUE,
      'edit own homepage_background_video content' => TRUE,
      'edit own homepage_feature content' => TRUE,
      'edit own homepage_hero content' => TRUE,
      'edit own large_event content' => TRUE,
      'edit own media content' => TRUE,
      'edit own page content' => TRUE,
      'edit own person content' => TRUE,
      'edit own resource content' => TRUE,
      'edit own small_event content' => TRUE,
      'edit terms in 1' => TRUE,
      'edit terms in 2' => TRUE,
      'edit terms in 3' => TRUE,
      'edit terms in 4' => TRUE,
      'edit terms in 5' => TRUE,
      'edit terms in 6' => TRUE,
      'flush caches' => TRUE,
      'import media' => TRUE,
      'manipulate all queues' => TRUE,
      'manipulate queues' => TRUE,
      'override article published option' => TRUE,
      'override committee published option' => TRUE,
      'override homepage_feature published option' => TRUE,
      'override homepage_hero published option' => TRUE,
      'override large_event published option' => TRUE,
      'override page published option' => TRUE,
      'override person published option' => TRUE,
      'override resource published option' => TRUE,
      'override small_event published option' => TRUE,
      'revert revisions' => TRUE,
      'use text format full_html' => TRUE,
      'view all blocks' => TRUE,
      'view own unpublished content' => TRUE,
      'view revisions' => TRUE,
      'view the administration theme' => TRUE,
    ),
  );

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
    'permissions' => array(
      'access administration menu' => TRUE,
      'access administration pages' => TRUE,
      'access all views' => TRUE,
      'access all webform results' => TRUE,
      'access backup and migrate' => TRUE,
      'access backup files' => TRUE,
      'access comments' => TRUE,
      'access content' => TRUE,
      'access content overview' => TRUE,
      'access contextual links' => TRUE,
      'access dashboard' => TRUE,
      'access own webform results' => TRUE,
      'access own webform submissions' => TRUE,
      'access rules debug' => TRUE,
      'access site in maintenance mode' => TRUE,
      'access site reports' => TRUE,
      'access the block administration page' => TRUE,
      'access toolbar' => TRUE,
      'access user profiles' => TRUE,
      'access workbench' => TRUE,
      'add terms in article_type' => TRUE,
      'add terms in event_type' => TRUE,
      'add terms in resource_topic' => TRUE,
      'add terms in resource_type' => TRUE,
      'add terms in tags' => TRUE,
      'add terms in topics' => TRUE,
      'administer actions' => TRUE,
      'administer backup and migrate' => TRUE,
      'administer block access settings' => TRUE,
      'administer block classes' => TRUE,
      'administer blocks' => TRUE,
      'administer browser class' => TRUE,
      'administer ckeditor' => TRUE,
      'administer comments' => TRUE,
      'administer content types' => TRUE,
      'administer features' => TRUE,
      'administer feeds' => TRUE,
      'administer field collections' => TRUE,
      'administer fieldgroups' => TRUE,
      'administer filters' => TRUE,
      'administer image styles' => TRUE,
      'administer media' => TRUE,
      'administer menu' => TRUE,
      'administer menu attributes' => TRUE,
      'administer modules' => TRUE,
      'administer nodequeue' => TRUE,
      'administer nodes' => TRUE,
      'administer path breadcrumbs' => TRUE,
      'administer pathauto' => TRUE,
      'administer permissions' => TRUE,
      'administer redirects' => TRUE,
      'administer rules' => TRUE,
      'administer salesforce' => TRUE,
      'administer salesforce mapping' => TRUE,
      'administer search' => TRUE,
      'administer shortcuts' => TRUE,
      'administer site configuration' => TRUE,
      'administer software updates' => TRUE,
      'administer taxonomy' => TRUE,
      'administer tb_megamenu' => TRUE,
      'administer themes' => TRUE,
      'administer url aliases' => TRUE,
      'administer users' => TRUE,
      'administer uuid' => TRUE,
      'administer views' => TRUE,
      'administer workbench' => TRUE,
      'block IP addresses' => TRUE,
      'bypass node access' => TRUE,
      'bypass rules access' => TRUE,
      'cancel account' => TRUE,
      'change own username' => TRUE,
      'clear feed feeds' => TRUE,
      'clear node feeds' => TRUE,
      'clear opml feeds' => TRUE,
      'clear user feeds' => TRUE,
      'configure all block body fields' => TRUE,
      'configure all block descriptions' => TRUE,
      'configure all block titles' => TRUE,
      'configure all blocks' => TRUE,
      'configure all content type visibility settings' => TRUE,
      'configure all language settings' => TRUE,
      'configure all page visibility settings' => TRUE,
      'configure all region settings' => TRUE,
      'configure all role visibility settings' => TRUE,
      'configure all user visibility settings' => TRUE,
      'configure all visibility settings' => TRUE,
      'configure openid connect clients' => TRUE,
      'create article content' => TRUE,
      'create blocks' => TRUE,
      'create page content' => TRUE,
      'create salesforce mapping object' => TRUE,
      'create url aliases' => TRUE,
      'customize ckeditor' => TRUE,
      'customize shortcut links' => TRUE,
      'delete all blocks' => TRUE,
      'delete all webform submissions' => TRUE,
      'delete any article content' => TRUE,
      'delete any page content' => TRUE,
      'delete backup files' => TRUE,
      'delete own article content' => TRUE,
      'delete own page content' => TRUE,
      'delete own webform submissions' => TRUE,
      'delete revisions' => TRUE,
      'delete salesforce mapping object' => TRUE,
      'delete terms in 1' => TRUE,
      'disable all blocks' => TRUE,
      'display drupal links' => TRUE,
      'edit all webform submissions' => TRUE,
      'edit any article content' => TRUE,
      'edit any page content' => TRUE,
      'edit media' => TRUE,
      'edit own article content' => TRUE,
      'edit own comments' => TRUE,
      'edit own page content' => TRUE,
      'edit own webform submissions' => TRUE,
      'edit salesforce mapping object' => TRUE,
      'edit terms in 1' => TRUE,
      'edit webform components' => TRUE,
      'enable all blocks' => TRUE,
      'enter article revision log entry' => TRUE,
      'enter background_image revision log entry' => TRUE,
      'enter committee revision log entry' => TRUE,
      'enter division_promo revision log entry' => TRUE,
      'enter feed revision log entry' => TRUE,
      'enter feed_item revision log entry' => TRUE,
      'enter homepage_background_video revision log entry' => TRUE,
      'enter homepage_feature revision log entry' => TRUE,
      'enter homepage_hero revision log entry' => TRUE,
      'enter large_event revision log entry' => TRUE,
      'enter media revision log entry' => TRUE,
      'enter page revision log entry' => TRUE,
      'enter person revision log entry' => TRUE,
      'enter resource revision log entry' => TRUE,
      'enter small_event revision log entry' => TRUE,
      'enter webform revision log entry' => TRUE,
      'flush caches' => TRUE,
      'generate features' => TRUE,
      'import feed feeds' => TRUE,
      'import media' => TRUE,
      'import node feeds' => TRUE,
      'import opml feeds' => TRUE,
      'import user feeds' => TRUE,
      'manage features' => TRUE,
      'manage own openid_connect accounts' => TRUE,
      'manipulate all queues' => TRUE,
      'manipulate queues' => TRUE,
      'move all blocks' => TRUE,
      'notify of path changes' => TRUE,
      'openid_connect set own password' => TRUE,
      'override article authored by option' => TRUE,
      'override article authored on option' => TRUE,
      'override article promote to front page option' => TRUE,
      'override article published option' => TRUE,
      'override article revision option' => TRUE,
      'override article sticky option' => TRUE,
      'override background_image authored by option' => TRUE,
      'override background_image authored on option' => TRUE,
      'override background_image promote to front page option' => TRUE,
      'override background_image published option' => TRUE,
      'override background_image revision option' => TRUE,
      'override background_image sticky option' => TRUE,
      'override committee authored by option' => TRUE,
      'override committee authored on option' => TRUE,
      'override committee promote to front page option' => TRUE,
      'override committee published option' => TRUE,
      'override committee revision option' => TRUE,
      'override committee sticky option' => TRUE,
      'override division_promo authored by option' => TRUE,
      'override division_promo authored on option' => TRUE,
      'override division_promo promote to front page option' => TRUE,
      'override division_promo published option' => TRUE,
      'override division_promo revision option' => TRUE,
      'override division_promo sticky option' => TRUE,
      'override feed authored by option' => TRUE,
      'override feed authored on option' => TRUE,
      'override feed promote to front page option' => TRUE,
      'override feed published option' => TRUE,
      'override feed revision option' => TRUE,
      'override feed sticky option' => TRUE,
      'override feed_item authored by option' => TRUE,
      'override feed_item authored on option' => TRUE,
      'override feed_item promote to front page option' => TRUE,
      'override feed_item published option' => TRUE,
      'override feed_item revision option' => TRUE,
      'override feed_item sticky option' => TRUE,
      'override homepage_background_video authored by option' => TRUE,
      'override homepage_background_video authored on option' => TRUE,
      'override homepage_background_video promote to front page option' => TRUE,
      'override homepage_background_video published option' => TRUE,
      'override homepage_background_video revision option' => TRUE,
      'override homepage_background_video sticky option' => TRUE,
      'override homepage_feature authored by option' => TRUE,
      'override homepage_feature authored on option' => TRUE,
      'override homepage_feature promote to front page option' => TRUE,
      'override homepage_feature published option' => TRUE,
      'override homepage_feature revision option' => TRUE,
      'override homepage_feature sticky option' => TRUE,
      'override homepage_hero authored by option' => TRUE,
      'override homepage_hero authored on option' => TRUE,
      'override homepage_hero promote to front page option' => TRUE,
      'override homepage_hero published option' => TRUE,
      'override homepage_hero revision option' => TRUE,
      'override homepage_hero sticky option' => TRUE,
      'override large_event authored by option' => TRUE,
      'override large_event authored on option' => TRUE,
      'override large_event promote to front page option' => TRUE,
      'override large_event published option' => TRUE,
      'override large_event revision option' => TRUE,
      'override large_event sticky option' => TRUE,
      'override media authored by option' => TRUE,
      'override media authored on option' => TRUE,
      'override media promote to front page option' => TRUE,
      'override media published option' => TRUE,
      'override media revision option' => TRUE,
      'override media sticky option' => TRUE,
      'override page authored by option' => TRUE,
      'override page authored on option' => TRUE,
      'override page promote to front page option' => TRUE,
      'override page published option' => TRUE,
      'override page revision option' => TRUE,
      'override page sticky option' => TRUE,
      'override person authored by option' => TRUE,
      'override person authored on option' => TRUE,
      'override person promote to front page option' => TRUE,
      'override person published option' => TRUE,
      'override person revision option' => TRUE,
      'override person sticky option' => TRUE,
      'override resource authored by option' => TRUE,
      'override resource authored on option' => TRUE,
      'override resource promote to front page option' => TRUE,
      'override resource published option' => TRUE,
      'override resource revision option' => TRUE,
      'override resource sticky option' => TRUE,
      'override small_event authored by option' => TRUE,
      'override small_event authored on option' => TRUE,
      'override small_event promote to front page option' => TRUE,
      'override small_event published option' => TRUE,
      'override small_event revision option' => TRUE,
      'override small_event sticky option' => TRUE,
      'override webform authored by option' => TRUE,
      'override webform authored on option' => TRUE,
      'override webform promote to front page option' => TRUE,
      'override webform published option' => TRUE,
      'override webform revision option' => TRUE,
      'override webform sticky option' => TRUE,
      'perform backup' => TRUE,
      'post comments' => TRUE,
      'rename features' => TRUE,
      'restore from backup' => TRUE,
      'revert revisions' => TRUE,
      'search content' => TRUE,
      'select account cancellation method' => TRUE,
      'skip comment approval' => TRUE,
      'submit latitude/longitude' => TRUE,
      'switch shortcut sets' => TRUE,
      'unlock feed feeds' => TRUE,
      'unlock node feeds' => TRUE,
      'unlock opml feeds' => TRUE,
      'unlock user feeds' => TRUE,
      'use advanced search' => TRUE,
      'use ctools import' => TRUE,
      'use text format filtered_html' => TRUE,
      'use text format full_html' => TRUE,
      'view all blocks' => TRUE,
      'view location directory' => TRUE,
      'view media' => TRUE,
      'view mobile detect debug' => TRUE,
      'view node location table' => TRUE,
      'view own unpublished content' => TRUE,
      'view revisions' => TRUE,
      'view salesforce mapping object' => TRUE,
      'view the administration theme' => TRUE,
      'view user location table' => TRUE,
    ),
  );

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
    'weight' => 0,
    'permissions' => array(
      'access comments' => TRUE,
      'access content' => TRUE,
      'search content' => TRUE,
      'use advanced search' => TRUE,
      'use text format filtered_html' => TRUE,
      'view media' => TRUE,
    ),
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
    'weight' => 1,
    'permissions' => array(
      'access comments' => TRUE,
      'access content' => TRUE,
      'post comments' => TRUE,
      'search content' => TRUE,
      'skip comment approval' => TRUE,
      'use advanced search' => TRUE,
      'use text format filtered_html' => TRUE,
      'view media' => TRUE,
    ),
  );

  return $roles;
}