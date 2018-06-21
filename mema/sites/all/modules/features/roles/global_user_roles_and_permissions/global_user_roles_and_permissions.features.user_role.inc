<?php
/**
 * @file
 * global_user_roles_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function global_user_roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Content Administrator.
  $roles['Content Administrator'] = array(
    'name' => 'Content Administrator',
    'weight' => 4,
  );

  // Exported role: Content Editor.
  $roles['Content Editor'] = array(
    'name' => 'Content Editor',
    'weight' => 3,
  );

  return $roles;
}
