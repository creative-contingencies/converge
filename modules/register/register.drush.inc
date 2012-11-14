<?php
/**
 * @file register.drush.inc
 * Drush commands to fixup registrations.
 */

/**
 * Implements hook_drush_command().
 */
function register_drush_command() {
  $items['register-profile-fix'] = array(
    'aliases' => array('rpf'),
    'callback' => 'drush_register_profile_fix',
    'description' => dt('Create profile nodes for signups that lack them.'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
  );
  return $items;
}

/**
 * Implements hook_hook_drush_command_validate().
 */
function drush_register_profile_fix_validate() {
  $users = db_result(db_query("SELECT COUNT(uid) FROM {uc_signup_log} sl WHERE type = 1 AND uid NOT IN (SELECT uid FROM {node} WHERE type = 'profile')"));

  drush_log(dt('Going to create profiles for @count', array('@count' => format_plural($users, '1 user', '@count users'))), 'warning');
  $continue = drush_confirm(dt('There is no undo. Continue?'));
  if (empty($continue)) {
    drush_log(dt('Aborting'), 'warning');
    return 0;
  }
}

/**
 * Callback.
 *
 * Select all signed up users without a profile node, create a profile node for them.
 */
function drush_register_profile_fix() {
  $statuses = register_profile_fix();
  foreach ($statuses as $status) {
    drush_log(dt('  @status', array('@status' => $status)), 'ok');
  }
  return 0;
}
