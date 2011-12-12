<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function converge_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_profile_admin
  $groups['profile-group_profile_admin'] = array(
    'group_type' => 'standard',
    'type_name' => 'profile',
    'group_name' => 'group_profile_admin',
    'label' => 'Administration',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => 'These fields are visible to administrators only.',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_plain' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_html' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '-4',
    'fields' => array(
      '0' => 'field_profile_admin',
      '1' => 'field_profile_vip',
      '2' => 'field_profile_ignore',
    ),
  );

  // Exported group: group_profile_sector
  $groups['profile-group_profile_sector'] = array(
    'group_type' => 'standard',
    'type_name' => 'profile',
    'group_name' => 'group_profile_sector',
    'label' => 'Education Sector Details',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => 'We are required to collect this data to meet the reporting requirements of a funding agreement with the Victorian Department of Education and Early Childhood. It is only relevant for those from Victorian schools and organisations and it is therefore optional to complete this section. ',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_plain' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_html' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '17',
    'fields' => array(
      '0' => 'field_profile_gender',
      '1' => 'field_profile_sector_sector',
      '2' => 'field_profile_sector_region',
    ),
  );

  // Exported group: group_proposal_scheduling
  $groups['proposal-group_proposal_scheduling'] = array(
    'group_type' => 'standard',
    'type_name' => 'proposal',
    'group_name' => 'group_proposal_scheduling',
    'label' => 'Scheduling',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '33',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'hidden',
          'exclude' => 1,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_plain' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_html' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '33',
    'fields' => array(
      '0' => 'field_proposal_scheduled',
      '1' => 'field_proposal_room',
      '2' => 'field_proposal_day',
      '3' => 'field_proposal_timeslot',
    ),
  );

  // Exported group: group_proposal_tech
  $groups['proposal-group_proposal_tech'] = array(
    'group_type' => 'standard',
    'type_name' => 'proposal',
    'group_name' => 'group_proposal_tech',
    'label' => 'Technical Requirements',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => 'All presentation rooms are equipped with a computer, data projector and screen. There is wired internet at a speed of 128Kb/sec. If you require any other equipment or more bandwidth, please specify it here.
<p><em>NOTE</em>: If attendees should download and install software on their laptops for a hands-on session, you should specify this in your abstract. You are required to make the  software available to attendees. E.g. include a link to download the software in your proposal abstract.',
      ),
      'display' => array(
        'weight' => '36',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_plain' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_html' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '36',
    'fields' => array(
      '0' => 'field_proposal_tech_internet',
      '1' => 'field_proposal_tech_equipment',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Administration');
  t('Education Sector Details');
  t('Scheduling');
  t('Technical Requirements');

  return $groups;
}
