<?php

/**
 * Implementation of hook_user_default_roles().
 */
function converge_user_default_roles() {
  $roles = array();

  // Exported role: attendee
  $roles['attendee'] = array(
    'name' => 'attendee',
  );

  // Exported role: papers chair
  $roles['papers chair'] = array(
    'name' => 'papers chair',
  );

  // Exported role: presenter
  $roles['presenter'] = array(
    'name' => 'presenter',
  );

  // Exported role: reviewer
  $roles['reviewer'] = array(
    'name' => 'reviewer',
  );

  // Exported role: volunteer
  $roles['volunteer'] = array(
    'name' => 'volunteer',
  );

  return $roles;
}
