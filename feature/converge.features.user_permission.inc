<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function converge_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'content editor',
      '3' => 'site administrator',
    ),
  );

  // Exported permission: administer review settings
  $permissions['administer review settings'] = array(
    'name' => 'administer review settings',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: create day content
  $permissions['create day content'] = array(
    'name' => 'create day content',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'papers chair',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: create paper_review content
  $permissions['create paper_review content'] = array(
    'name' => 'create paper_review content',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'reviewer',
    ),
  );

  // Exported permission: create profile content
  $permissions['create profile content'] = array(
    'name' => 'create profile content',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: create proposal content
  $permissions['create proposal content'] = array(
    'name' => 'create proposal content',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'content editor',
      '2' => 'papers chair',
      '3' => 'site administrator',
    ),
  );

  // Exported permission: create room content
  $permissions['create room content'] = array(
    'name' => 'create room content',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'papers chair',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: create timeslot content
  $permissions['create timeslot content'] = array(
    'name' => 'create timeslot content',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'papers chair',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: delete any day content
  $permissions['delete any day content'] = array(
    'name' => 'delete any day content',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'papers chair',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: delete any paper_review content
  $permissions['delete any paper_review content'] = array(
    'name' => 'delete any paper_review content',
    'roles' => array(
      '0' => 'papers chair',
    ),
  );

  // Exported permission: delete any profile content
  $permissions['delete any profile content'] = array(
    'name' => 'delete any profile content',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: delete any proposal content
  $permissions['delete any proposal content'] = array(
    'name' => 'delete any proposal content',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: delete any room content
  $permissions['delete any room content'] = array(
    'name' => 'delete any room content',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'papers chair',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: delete any timeslot content
  $permissions['delete any timeslot content'] = array(
    'name' => 'delete any timeslot content',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'papers chair',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: delete own day content
  $permissions['delete own day content'] = array(
    'name' => 'delete own day content',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: delete own paper_review content
  $permissions['delete own paper_review content'] = array(
    'name' => 'delete own paper_review content',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'reviewer',
    ),
  );

  // Exported permission: delete own placeholder content
  $permissions['delete own placeholder content'] = array(
    'name' => 'delete own placeholder content',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: delete own profile content
  $permissions['delete own profile content'] = array(
    'name' => 'delete own profile content',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: delete own proposal content
  $permissions['delete own proposal content'] = array(
    'name' => 'delete own proposal content',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: delete own room content
  $permissions['delete own room content'] = array(
    'name' => 'delete own room content',
    'roles' => array(),
  );

  // Exported permission: delete own timeslot content
  $permissions['delete own timeslot content'] = array(
    'name' => 'delete own timeslot content',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: edit any day content
  $permissions['edit any day content'] = array(
    'name' => 'edit any day content',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'papers chair',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: edit any paper_review content
  $permissions['edit any paper_review content'] = array(
    'name' => 'edit any paper_review content',
    'roles' => array(
      '0' => 'papers chair',
    ),
  );

  // Exported permission: edit any profile content
  $permissions['edit any profile content'] = array(
    'name' => 'edit any profile content',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: edit any proposal content
  $permissions['edit any proposal content'] = array(
    'name' => 'edit any proposal content',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'papers chair',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: edit any room content
  $permissions['edit any room content'] = array(
    'name' => 'edit any room content',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'papers chair',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: edit any timeslot content
  $permissions['edit any timeslot content'] = array(
    'name' => 'edit any timeslot content',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'papers chair',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: edit field_author_feedback
  $permissions['edit field_author_feedback'] = array(
    'name' => 'edit field_author_feedback',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'reviewer',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: edit field_criteria_discussion
  $permissions['edit field_criteria_discussion'] = array(
    'name' => 'edit field_criteria_discussion',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'reviewer',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: edit field_criteria_impact
  $permissions['edit field_criteria_impact'] = array(
    'name' => 'edit field_criteria_impact',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'reviewer',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: edit field_criteria_interesting
  $permissions['edit field_criteria_interesting'] = array(
    'name' => 'edit field_criteria_interesting',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'reviewer',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: edit field_criteria_references
  $permissions['edit field_criteria_references'] = array(
    'name' => 'edit field_criteria_references',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'reviewer',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: edit field_criteria_writing
  $permissions['edit field_criteria_writing'] = array(
    'name' => 'edit field_criteria_writing',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'reviewer',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: edit field_day_date
  $permissions['edit field_day_date'] = array(
    'name' => 'edit field_day_date',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'papers chair',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: edit field_day_timeslots
  $permissions['edit field_day_timeslots'] = array(
    'name' => 'edit field_day_timeslots',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: edit field_paper
  $permissions['edit field_paper'] = array(
    'name' => 'edit field_paper',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'reviewer',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: edit field_profile_accessibility
  $permissions['edit field_profile_accessibility'] = array(
    'name' => 'edit field_profile_accessibility',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'papers chair',
      '3' => 'reviewer',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: edit field_profile_address
  $permissions['edit field_profile_address'] = array(
    'name' => 'edit field_profile_address',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'papers chair',
      '3' => 'reviewer',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: edit field_profile_admin
  $permissions['edit field_profile_admin'] = array(
    'name' => 'edit field_profile_admin',
    'roles' => array(
      '0' => 'shop administrator',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: edit field_profile_bio
  $permissions['edit field_profile_bio'] = array(
    'name' => 'edit field_profile_bio',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'papers chair',
      '3' => 'reviewer',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: edit field_profile_blog
  $permissions['edit field_profile_blog'] = array(
    'name' => 'edit field_profile_blog',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'papers chair',
      '3' => 'reviewer',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: edit field_profile_city
  $permissions['edit field_profile_city'] = array(
    'name' => 'edit field_profile_city',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'papers chair',
      '3' => 'reviewer',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: edit field_profile_country
  $permissions['edit field_profile_country'] = array(
    'name' => 'edit field_profile_country',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'papers chair',
      '3' => 'reviewer',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: edit field_profile_dietary
  $permissions['edit field_profile_dietary'] = array(
    'name' => 'edit field_profile_dietary',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'papers chair',
      '3' => 'reviewer',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: edit field_profile_firstname
  $permissions['edit field_profile_firstname'] = array(
    'name' => 'edit field_profile_firstname',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'papers chair',
      '3' => 'reviewer',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: edit field_profile_gender
  $permissions['edit field_profile_gender'] = array(
    'name' => 'edit field_profile_gender',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'papers chair',
      '3' => 'reviewer',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: edit field_profile_ignore
  $permissions['edit field_profile_ignore'] = array(
    'name' => 'edit field_profile_ignore',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: edit field_profile_interests
  $permissions['edit field_profile_interests'] = array(
    'name' => 'edit field_profile_interests',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'papers chair',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: edit field_profile_organisation
  $permissions['edit field_profile_organisation'] = array(
    'name' => 'edit field_profile_organisation',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'papers chair',
      '3' => 'reviewer',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: edit field_profile_phone
  $permissions['edit field_profile_phone'] = array(
    'name' => 'edit field_profile_phone',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'papers chair',
      '3' => 'reviewer',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: edit field_profile_position
  $permissions['edit field_profile_position'] = array(
    'name' => 'edit field_profile_position',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'papers chair',
      '3' => 'reviewer',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: edit field_profile_postcode
  $permissions['edit field_profile_postcode'] = array(
    'name' => 'edit field_profile_postcode',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'papers chair',
      '3' => 'reviewer',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: edit field_profile_sector_region
  $permissions['edit field_profile_sector_region'] = array(
    'name' => 'edit field_profile_sector_region',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'papers chair',
      '3' => 'reviewer',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: edit field_profile_sector_sector
  $permissions['edit field_profile_sector_sector'] = array(
    'name' => 'edit field_profile_sector_sector',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'papers chair',
      '3' => 'reviewer',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: edit field_profile_state
  $permissions['edit field_profile_state'] = array(
    'name' => 'edit field_profile_state',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'papers chair',
      '3' => 'reviewer',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: edit field_profile_surname
  $permissions['edit field_profile_surname'] = array(
    'name' => 'edit field_profile_surname',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'papers chair',
      '3' => 'reviewer',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: edit field_profile_vip
  $permissions['edit field_profile_vip'] = array(
    'name' => 'edit field_profile_vip',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: edit field_proposal_admin_notes
  $permissions['edit field_proposal_admin_notes'] = array(
    'name' => 'edit field_proposal_admin_notes',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'papers chair',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: edit field_proposal_attendee_notes
  $permissions['edit field_proposal_attendee_notes'] = array(
    'name' => 'edit field_proposal_attendee_notes',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'content editor',
      '2' => 'papers chair',
      '3' => 'site administrator',
    ),
  );

  // Exported permission: edit field_proposal_autoselect
  $permissions['edit field_proposal_autoselect'] = array(
    'name' => 'edit field_proposal_autoselect',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: edit field_proposal_day
  $permissions['edit field_proposal_day'] = array(
    'name' => 'edit field_proposal_day',
    'roles' => array(),
  );

  // Exported permission: edit field_proposal_files
  $permissions['edit field_proposal_files'] = array(
    'name' => 'edit field_proposal_files',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'content editor',
      '2' => 'papers chair',
      '3' => 'presenter',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: edit field_proposal_presenters
  $permissions['edit field_proposal_presenters'] = array(
    'name' => 'edit field_proposal_presenters',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: edit field_proposal_reviewers
  $permissions['edit field_proposal_reviewers'] = array(
    'name' => 'edit field_proposal_reviewers',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: edit field_proposal_room
  $permissions['edit field_proposal_room'] = array(
    'name' => 'edit field_proposal_room',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'papers chair',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: edit field_proposal_scheduled
  $permissions['edit field_proposal_scheduled'] = array(
    'name' => 'edit field_proposal_scheduled',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'papers chair',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: edit field_proposal_status
  $permissions['edit field_proposal_status'] = array(
    'name' => 'edit field_proposal_status',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'papers chair',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: edit field_proposal_tech_equipment
  $permissions['edit field_proposal_tech_equipment'] = array(
    'name' => 'edit field_proposal_tech_equipment',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'content editor',
      '3' => 'papers chair',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: edit field_proposal_tech_internet
  $permissions['edit field_proposal_tech_internet'] = array(
    'name' => 'edit field_proposal_tech_internet',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'content editor',
      '3' => 'papers chair',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: edit field_registration_day
  $permissions['edit field_registration_day'] = array(
    'name' => 'edit field_registration_day',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'papers chair',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: edit field_registration_hide
  $permissions['edit field_registration_hide'] = array(
    'name' => 'edit field_registration_hide',
    'roles' => array(
      '0' => 'shop administrator',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: edit field_review
  $permissions['edit field_review'] = array(
    'name' => 'edit field_review',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'reviewer',
    ),
  );

  // Exported permission: edit field_review_recommendation
  $permissions['edit field_review_recommendation'] = array(
    'name' => 'edit field_review_recommendation',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'reviewer',
    ),
  );

  // Exported permission: edit field_room_capacity
  $permissions['edit field_room_capacity'] = array(
    'name' => 'edit field_room_capacity',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'papers chair',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: edit field_room_code
  $permissions['edit field_room_code'] = array(
    'name' => 'edit field_room_code',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'papers chair',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: edit field_supporter_badge
  $permissions['edit field_supporter_badge'] = array(
    'name' => 'edit field_supporter_badge',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: edit field_supporter_website
  $permissions['edit field_supporter_website'] = array(
    'name' => 'edit field_supporter_website',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: edit field_timeslot_date
  $permissions['edit field_timeslot_date'] = array(
    'name' => 'edit field_timeslot_date',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'papers chair',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: edit field_timeslot_time
  $permissions['edit field_timeslot_time'] = array(
    'name' => 'edit field_timeslot_time',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: edit own day content
  $permissions['edit own day content'] = array(
    'name' => 'edit own day content',
    'roles' => array(
      '0' => 'papers chair',
    ),
  );

  // Exported permission: edit own paper_review content
  $permissions['edit own paper_review content'] = array(
    'name' => 'edit own paper_review content',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'reviewer',
    ),
  );

  // Exported permission: edit own profile content
  $permissions['edit own profile content'] = array(
    'name' => 'edit own profile content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own proposal content
  $permissions['edit own proposal content'] = array(
    'name' => 'edit own proposal content',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'reviewer',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: edit own room content
  $permissions['edit own room content'] = array(
    'name' => 'edit own room content',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: edit own timeslot content
  $permissions['edit own timeslot content'] = array(
    'name' => 'edit own timeslot content',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: export proposals
  $permissions['export proposals'] = array(
    'name' => 'export proposals',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: rate content
  $permissions['rate content'] = array(
    'name' => 'rate content',
    'roles' => array(
      '0' => 'attendee',
      '1' => 'authenticated user',
      '2' => 'papers chair',
    ),
  );

  // Exported permission: send authors their status
  $permissions['send authors their status'] = array(
    'name' => 'send authors their status',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: send reviewers reminders
  $permissions['send reviewers reminders'] = array(
    'name' => 'send reviewers reminders',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: view field_author_feedback
  $permissions['view field_author_feedback'] = array(
    'name' => 'view field_author_feedback',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'papers chair',
      '2' => 'presenter',
      '3' => 'reviewer',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: view field_criteria_discussion
  $permissions['view field_criteria_discussion'] = array(
    'name' => 'view field_criteria_discussion',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'reviewer',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: view field_criteria_impact
  $permissions['view field_criteria_impact'] = array(
    'name' => 'view field_criteria_impact',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'reviewer',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: view field_criteria_interesting
  $permissions['view field_criteria_interesting'] = array(
    'name' => 'view field_criteria_interesting',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'reviewer',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: view field_criteria_references
  $permissions['view field_criteria_references'] = array(
    'name' => 'view field_criteria_references',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'reviewer',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: view field_criteria_writing
  $permissions['view field_criteria_writing'] = array(
    'name' => 'view field_criteria_writing',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'reviewer',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: view field_day_date
  $permissions['view field_day_date'] = array(
    'name' => 'view field_day_date',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'content editor',
      '3' => 'papers chair',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: view field_day_timeslots
  $permissions['view field_day_timeslots'] = array(
    'name' => 'view field_day_timeslots',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: view field_paper
  $permissions['view field_paper'] = array(
    'name' => 'view field_paper',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'reviewer',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: view field_profile_accessibility
  $permissions['view field_profile_accessibility'] = array(
    'name' => 'view field_profile_accessibility',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: view field_profile_address
  $permissions['view field_profile_address'] = array(
    'name' => 'view field_profile_address',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'content editor',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: view field_profile_admin
  $permissions['view field_profile_admin'] = array(
    'name' => 'view field_profile_admin',
    'roles' => array(
      '0' => 'shop administrator',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: view field_profile_bio
  $permissions['view field_profile_bio'] = array(
    'name' => 'view field_profile_bio',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'content editor',
      '3' => 'site administrator',
    ),
  );

  // Exported permission: view field_profile_blog
  $permissions['view field_profile_blog'] = array(
    'name' => 'view field_profile_blog',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'content editor',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: view field_profile_city
  $permissions['view field_profile_city'] = array(
    'name' => 'view field_profile_city',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'content editor',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: view field_profile_country
  $permissions['view field_profile_country'] = array(
    'name' => 'view field_profile_country',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'content editor',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: view field_profile_dietary
  $permissions['view field_profile_dietary'] = array(
    'name' => 'view field_profile_dietary',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: view field_profile_firstname
  $permissions['view field_profile_firstname'] = array(
    'name' => 'view field_profile_firstname',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'content editor',
      '3' => 'site administrator',
    ),
  );

  // Exported permission: view field_profile_gender
  $permissions['view field_profile_gender'] = array(
    'name' => 'view field_profile_gender',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: view field_profile_ignore
  $permissions['view field_profile_ignore'] = array(
    'name' => 'view field_profile_ignore',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: view field_profile_interests
  $permissions['view field_profile_interests'] = array(
    'name' => 'view field_profile_interests',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: view field_profile_organisation
  $permissions['view field_profile_organisation'] = array(
    'name' => 'view field_profile_organisation',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: view field_profile_phone
  $permissions['view field_profile_phone'] = array(
    'name' => 'view field_profile_phone',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'content editor',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: view field_profile_position
  $permissions['view field_profile_position'] = array(
    'name' => 'view field_profile_position',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: view field_profile_postcode
  $permissions['view field_profile_postcode'] = array(
    'name' => 'view field_profile_postcode',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'content editor',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: view field_profile_sector_region
  $permissions['view field_profile_sector_region'] = array(
    'name' => 'view field_profile_sector_region',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: view field_profile_sector_sector
  $permissions['view field_profile_sector_sector'] = array(
    'name' => 'view field_profile_sector_sector',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: view field_profile_state
  $permissions['view field_profile_state'] = array(
    'name' => 'view field_profile_state',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'content editor',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: view field_profile_surname
  $permissions['view field_profile_surname'] = array(
    'name' => 'view field_profile_surname',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'content editor',
      '3' => 'site administrator',
    ),
  );

  // Exported permission: view field_profile_vip
  $permissions['view field_profile_vip'] = array(
    'name' => 'view field_profile_vip',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: view field_proposal_admin_notes
  $permissions['view field_proposal_admin_notes'] = array(
    'name' => 'view field_proposal_admin_notes',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'papers chair',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: view field_proposal_attendee_notes
  $permissions['view field_proposal_attendee_notes'] = array(
    'name' => 'view field_proposal_attendee_notes',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'content editor',
      '3' => 'site administrator',
    ),
  );

  // Exported permission: view field_proposal_autoselect
  $permissions['view field_proposal_autoselect'] = array(
    'name' => 'view field_proposal_autoselect',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_proposal_day
  $permissions['view field_proposal_day'] = array(
    'name' => 'view field_proposal_day',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'content editor',
    ),
  );

  // Exported permission: view field_proposal_files
  $permissions['view field_proposal_files'] = array(
    'name' => 'view field_proposal_files',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'content editor',
      '3' => 'papers chair',
      '4' => 'presenter',
      '5' => 'site administrator',
    ),
  );

  // Exported permission: view field_proposal_presenters
  $permissions['view field_proposal_presenters'] = array(
    'name' => 'view field_proposal_presenters',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'content editor',
      '3' => 'papers chair',
    ),
  );

  // Exported permission: view field_proposal_reviewers
  $permissions['view field_proposal_reviewers'] = array(
    'name' => 'view field_proposal_reviewers',
    'roles' => array(
      '0' => 'papers chair',
    ),
  );

  // Exported permission: view field_proposal_room
  $permissions['view field_proposal_room'] = array(
    'name' => 'view field_proposal_room',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'content editor',
      '3' => 'site administrator',
    ),
  );

  // Exported permission: view field_proposal_scheduled
  $permissions['view field_proposal_scheduled'] = array(
    'name' => 'view field_proposal_scheduled',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'content editor',
      '3' => 'papers chair',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: view field_proposal_status
  $permissions['view field_proposal_status'] = array(
    'name' => 'view field_proposal_status',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'content editor',
      '2' => 'papers chair',
      '3' => 'site administrator',
    ),
  );

  // Exported permission: view field_proposal_tech_equipment
  $permissions['view field_proposal_tech_equipment'] = array(
    'name' => 'view field_proposal_tech_equipment',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'papers chair',
      '2' => 'reviewer',
      '3' => 'site administrator',
    ),
  );

  // Exported permission: view field_proposal_tech_internet
  $permissions['view field_proposal_tech_internet'] = array(
    'name' => 'view field_proposal_tech_internet',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'papers chair',
      '2' => 'reviewer',
      '3' => 'site administrator',
    ),
  );

  // Exported permission: view field_registration_day
  $permissions['view field_registration_day'] = array(
    'name' => 'view field_registration_day',
    'roles' => array(
      '0' => 'content editor',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: view field_registration_hide
  $permissions['view field_registration_hide'] = array(
    'name' => 'view field_registration_hide',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_review
  $permissions['view field_review'] = array(
    'name' => 'view field_review',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'reviewer',
    ),
  );

  // Exported permission: view field_review_recommendation
  $permissions['view field_review_recommendation'] = array(
    'name' => 'view field_review_recommendation',
    'roles' => array(
      '0' => 'papers chair',
      '1' => 'reviewer',
    ),
  );

  // Exported permission: view field_room_capacity
  $permissions['view field_room_capacity'] = array(
    'name' => 'view field_room_capacity',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'content editor',
      '2' => 'papers chair',
      '3' => 'site administrator',
    ),
  );

  // Exported permission: view field_room_code
  $permissions['view field_room_code'] = array(
    'name' => 'view field_room_code',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'content editor',
      '2' => 'papers chair',
      '3' => 'site administrator',
    ),
  );

  // Exported permission: view field_supporter_badge
  $permissions['view field_supporter_badge'] = array(
    'name' => 'view field_supporter_badge',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_supporter_website
  $permissions['view field_supporter_website'] = array(
    'name' => 'view field_supporter_website',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'content editor',
    ),
  );

  // Exported permission: view field_timeslot_date
  $permissions['view field_timeslot_date'] = array(
    'name' => 'view field_timeslot_date',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'content editor',
      '3' => 'papers chair',
      '4' => 'site administrator',
    ),
  );

  // Exported permission: view field_timeslot_time
  $permissions['view field_timeslot_time'] = array(
    'name' => 'view field_timeslot_time',
    'roles' => array(),
  );

  return $permissions;
}
