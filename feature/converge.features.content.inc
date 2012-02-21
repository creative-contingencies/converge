<?php

/**
 * Implementation of hook_content_default_fields().
 */
function converge_content_default_fields() {
  $fields = array();

  // Exported field: field_day_date
  $fields['day-field_day_date'] = array(
    'field_name' => 'field_day_date',
    'type_name' => 'day',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'day_only',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'Y-m-d',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-1:+2',
      'label_position' => 'above',
      'label' => 'Date',
      'weight' => '-4',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_day_timeslots
  $fields['day-field_day_timeslots'] = array(
    'field_name' => 'field_day_timeslots',
    'type_name' => 'day',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'timeslot' => 'timeslot',
      'day' => 0,
      'image' => 0,
      'profile' => 0,
      'simplenews' => 0,
      'old_timeslot' => 0,
      'page' => 0,
      'panel' => 0,
      'article_review' => 0,
      'placeholder' => 0,
      'planet' => 0,
      'poll' => 0,
      'article' => 0,
      'product' => 0,
      'room' => 0,
      'story' => 0,
      'supporter' => 0,
      'tshirt' => 0,
      'webform' => 0,
      'nomination' => FALSE,
    ),
    'advanced_view' => 'timeslot',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Timeslots',
      'weight' => '3',
      'description' => 'Choose all timeslots that happen on this day.',
      'type' => 'nodereference_buttons',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_author_feedback
  $fields['article_review-field_author_feedback'] = array(
    'field_name' => 'field_author_feedback',
    'type_name' => 'article_review',
    'display_settings' => array(
      'weight' => '5',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_author_feedback][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Author Feedback',
      'weight' => '7',
      'description' => 'This field is viewable by the Authors.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_criteria_discussion
  $fields['article_review-field_criteria_discussion'] = array(
    'field_name' => 'field_criteria_discussion',
    'type_name' => 'article_review',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'fivestar',
    'required' => '1',
    'multiple' => '0',
    'module' => 'fivestar',
    'active' => '1',
    'stars' => '5',
    'dynamic_target' => 'field_paper',
    'php_target' => '',
    'axis' => 'Discussion',
    'widget' => array(
      'allow_clear' => 1,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Discussion (eg. Evaluation and critique of results/experiences, as relevant)',
      'weight' => '5',
      'description' => 'Rate this paper\'s discussion, evaluation or critique of results, evidence or experiences by selecting the number of stars where 1 = poor and 5 = excellent.',
      'type' => 'stars',
      'module' => 'fivestar',
    ),
  );

  // Exported field: field_criteria_impact
  $fields['article_review-field_criteria_impact'] = array(
    'field_name' => 'field_criteria_impact',
    'type_name' => 'article_review',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'fivestar',
    'required' => '1',
    'multiple' => '0',
    'module' => 'fivestar',
    'active' => '1',
    'stars' => '5',
    'dynamic_target' => 'field_paper',
    'php_target' => '',
    'axis' => 'Impact',
    'widget' => array(
      'allow_clear' => 1,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Potential value/impact of research or developments',
      'weight' => '4',
      'description' => 'Rate this paper\'s potential value / impact of research or developments by selecting the number of stars where 1 = poor and 5 = excellent.',
      'type' => 'stars',
      'module' => 'fivestar',
    ),
  );

  // Exported field: field_criteria_interesting
  $fields['article_review-field_criteria_interesting'] = array(
    'field_name' => 'field_criteria_interesting',
    'type_name' => 'article_review',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'fivestar',
    'required' => '1',
    'multiple' => '0',
    'module' => 'fivestar',
    'active' => '1',
    'stars' => '5',
    'dynamic_target' => 'field_paper',
    'php_target' => '',
    'axis' => 'Interesting',
    'widget' => array(
      'allow_clear' => 1,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Interest and relevance for a national audience',
      'weight' => '2',
      'description' => 'Rate this paper\'s interest and relevance for a national audience by selecting the number of stars where 1 = poor and 5 = excellent.',
      'type' => 'stars',
      'module' => 'fivestar',
    ),
  );

  // Exported field: field_criteria_references
  $fields['article_review-field_criteria_references'] = array(
    'field_name' => 'field_criteria_references',
    'type_name' => 'article_review',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'fivestar',
    'required' => '1',
    'multiple' => '0',
    'module' => 'fivestar',
    'active' => '1',
    'stars' => '5',
    'dynamic_target' => 'field_paper',
    'php_target' => '',
    'axis' => 'References',
    'widget' => array(
      'allow_clear' => 1,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Adequate review of, or reference to, related work',
      'weight' => '3',
      'description' => 'Rate this paper has adequate review of, or reference to related work by selecting the number of stars where 1 = poor and 5 = excellent.',
      'type' => 'stars',
      'module' => 'fivestar',
    ),
  );

  // Exported field: field_criteria_writing
  $fields['article_review-field_criteria_writing'] = array(
    'field_name' => 'field_criteria_writing',
    'type_name' => 'article_review',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'fivestar',
    'required' => '1',
    'multiple' => '0',
    'module' => 'fivestar',
    'active' => '1',
    'stars' => '5',
    'dynamic_target' => 'field_paper',
    'php_target' => '',
    'axis' => 'Writing',
    'widget' => array(
      'allow_clear' => 1,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Quality of writing organisation, clarity, style',
      'weight' => '6',
      'description' => 'Rate this paper\'s quality of writing organisation, clarity and style by selecting the number of stars where 1 = poor and 5 = excellent.',
      'type' => 'stars',
      'module' => 'fivestar',
    ),
  );

  // Exported field: field_paper
  $fields['article_review-field_paper'] = array(
    'field_name' => 'field_paper',
    'type_name' => 'article_review',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'article' => 'article',
      'image' => 0,
      'page' => 0,
      'panel' => 0,
      'article_review' => 0,
      'profile' => 0,
      'product' => 0,
      'story' => 0,
      'webform' => 0,
      'webform_report' => 0,
      'placeholder' => FALSE,
      'day' => FALSE,
      'simplenews' => FALSE,
      'nomination' => FALSE,
      'old_timeslot' => FALSE,
      'poll' => FALSE,
      'room' => FALSE,
      'supporter' => FALSE,
      'tshirt' => FALSE,
      'timeslot' => FALSE,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => NULL,
      'default_value_php' => 'if ( isset($_GET[\'nid\']) && $_GET[\'nid\'] > 0 ) {
return array(
 0 => array(\'nid\' => $_GET[\'nid\'])
);
}
else {
return array(
 0 => array(\'nid\' => 0)
);
}',
      'label' => 'Paper',
      'weight' => '1',
      'description' => 'Please enter the title of the Paper you wish to review.',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_review
  $fields['article_review-field_review'] = array(
    'field_name' => 'field_review',
    'type_name' => 'article_review',
    'display_settings' => array(
      'weight' => '6',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '10',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_review][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Private comments',
      'weight' => '8',
      'description' => 'This field is only viewable by reviewers.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_review_recommendation
  $fields['article_review-field_review_recommendation'] = array(
    'field_name' => 'field_review_recommendation',
    'type_name' => 'article_review',
    'display_settings' => array(
      'weight' => '7',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Accept
Accept with changes
Reject',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Recommendation',
      'weight' => '9',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_profile_accessibility
  $fields['profile-field_profile_accessibility'] = array(
    'field_name' => 'field_profile_accessibility',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_accessibility][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Mobility or Accessibility',
      'weight' => '13',
      'description' => 'Do you have any mobility or accessibility needs we should know about? ',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_address
  $fields['profile-field_profile_address'] = array(
    'field_name' => 'field_profile_address',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_address][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Address',
      'weight' => '6',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_admin
  $fields['profile-field_profile_admin'] = array(
    'field_name' => 'field_profile_admin',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_admin][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Administrative Comments',
      'weight' => '-3',
      'description' => 'Add any administrative comments here. Normal users cannot see administrative comments, only shop and site administrators can.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_bio
  $fields['profile-field_profile_bio'] = array(
    'field_name' => 'field_profile_bio',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_bio][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Bio',
      'weight' => '15',
      'description' => 'Please tell us a bit about yourself, such as relevant experience.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_blog
  $fields['profile-field_profile_blog'] = array(
    'field_name' => 'field_profile_blog',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Blog or Website',
      'weight' => '16',
      'description' => 'Enter the address to your blog or website. The link is shown below the bio on your profile page!',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_profile_city
  $fields['profile-field_profile_city'] = array(
    'field_name' => 'field_profile_city',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_city][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Town, City or Suburb',
      'weight' => '7',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_country
  $fields['profile-field_profile_country'] = array(
    'field_name' => 'field_profile_country',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_country][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Country',
      'weight' => '10',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_dietary
  $fields['profile-field_profile_dietary'] = array(
    'field_name' => 'field_profile_dietary',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_dietary][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Dietary Requirements',
      'weight' => '12',
      'description' => 'Do you have any special dietary requirements?',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_firstname
  $fields['profile-field_profile_firstname'] = array(
    'field_name' => 'field_profile_firstname',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_firstname][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'First name',
      'weight' => 0,
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_gender
  $fields['profile-field_profile_gender'] = array(
    'field_name' => 'field_profile_gender',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Female
Male',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Gender',
      'weight' => 0,
      'description' => 'Please indicate your gender.',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_profile_ignore
  $fields['profile-field_profile_ignore'] = array(
    'field_name' => 'field_profile_ignore',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0
1|Ignore this user when creating mail merge lists',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Ignore',
      'weight' => '-1',
      'description' => 'If this user should not be included in mail merge lists, check this box. This might be because they\'re a co-presenter and aren\'t attending the conference, or because they\'re a sponsor and aren\'t choosing sessions or buying a ticket.',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_profile_interests
  $fields['profile-field_profile_interests'] = array(
    'field_name' => 'field_profile_interests',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '1',
    'module' => 'content_taxonomy',
    'active' => '1',
    'save_term_node' => 1,
    'vid' => '4',
    'parent' => '0',
    'parent_php_code' => '',
    'depth' => '',
    'widget' => array(
      'group_parent' => '0',
      'show_depth' => 1,
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Interests',
      'weight' => '11',
      'description' => 'Please let us know what your areas of interest are, so we can suggest conference sessions that you might want to see.',
      'type' => 'content_taxonomy_options',
      'module' => 'content_taxonomy_options',
    ),
  );

  // Exported field: field_profile_organisation
  $fields['profile-field_profile_organisation'] = array(
    'field_name' => 'field_profile_organisation',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_organisation][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'School, Organisation or Affiliation',
      'weight' => '3',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_phone
  $fields['profile-field_profile_phone'] = array(
    'field_name' => 'field_profile_phone',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '20',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_phone][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Phone',
      'weight' => '5',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_position
  $fields['profile-field_profile_position'] = array(
    'field_name' => 'field_profile_position',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_position][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Position',
      'weight' => '2',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_postcode
  $fields['profile-field_profile_postcode'] = array(
    'field_name' => 'field_profile_postcode',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '10',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_postcode][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Postcode',
      'weight' => '9',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_sector_region
  $fields['profile-field_profile_sector_region'] = array(
    'field_name' => 'field_profile_sector_region',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Barwon South West
Eastern Metropolitan
Gippsland
Grampians
Hume
Loddon Mallee
Northern Metropolitan
Southern Metropolitan
Western Metropolitan
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Region',
      'weight' => '2',
      'description' => 'Please indicate the Victorian region in which you are based. ',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_profile_sector_sector
  $fields['profile-field_profile_sector_sector'] = array(
    'field_name' => 'field_profile_sector_sector',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Catholic
Government
Independent',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Sector',
      'weight' => '1',
      'description' => 'Please indicate the sector in which you work.',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_profile_state
  $fields['profile-field_profile_state'] = array(
    'field_name' => 'field_profile_state',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_state][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'State, Region or Province',
      'weight' => '8',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_surname
  $fields['profile-field_profile_surname'] = array(
    'field_name' => 'field_profile_surname',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_surname][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Surname or Family Name',
      'weight' => '1',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_vip
  $fields['profile-field_profile_vip'] = array(
    'field_name' => 'field_profile_vip',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '32',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '32',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_vip][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'VIP Insert',
      'weight' => '-2',
      'description' => 'Badge insert data for VIPs',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_article_admin_notes
  $fields['article-field_article_admin_notes'] = array(
    'field_name' => 'field_article_admin_notes',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '31',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '8',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_article_admin_notes][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Administrative Notes',
      'weight' => '31',
      'description' => 'Add any administrative notes. This field is available only to the paper committee chairs.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_article_attendee_notes
  $fields['article-field_article_attendee_notes'] = array(
    'field_name' => 'field_article_attendee_notes',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '35',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '8',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_article_attendee_notes][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Attendee Notes',
      'weight' => '35',
      'description' => 'If there is anything that attendees to this session need to bring (eg. a laptop) or prepare, such as installing and activating software, please make a note of it here. If attendees are required to install software prior to this session, you should include a download link for that software as well.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_article_autoselect
  $fields['article-field_article_autoselect'] = array(
    'field_name' => 'field_article_autoselect',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '54',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|
1|Auto-select this session for attendees',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Autoselect',
      'weight' => '54',
      'description' => 'If this box is checked, this session will be automatically added to the program of anyone who purchases a ticket that gives them access to this session.',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_article_day
  $fields['article-field_article_day'] = array(
    'field_name' => 'field_article_day',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '52',
      'parent' => 'group_article_scheduling',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'plain',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'day' => 'day',
      'image' => 0,
      'profile' => 0,
      'page' => 0,
      'panel' => 0,
      'article_review' => 0,
      'placeholder' => 0,
      'planet' => 0,
      'poll' => 0,
      'article' => 0,
      'product' => 0,
      'story' => 0,
      'supporter' => 0,
      'webform' => 0,
      'old_timeslot' => 0,
      'simplenews' => FALSE,
      'nomination' => FALSE,
      'room' => FALSE,
      'tshirt' => FALSE,
      'timeslot' => FALSE,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Day',
      'weight' => '52',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_article_files
  $fields['article-field_article_files'] = array(
    'field_name' => 'field_article_files',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '39',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'txt pdf jpg png gif odt odp doc docx ppt pptx zip',
      'file_path' => 'article/[uid]',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'Files',
      'weight' => '39',
      'description' => 'You can attach one or more files to your article. Please provide a concise description for each file you add.',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_article_presenters
  $fields['article-field_article_presenters'] = array(
    'field_name' => 'field_article_presenters',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '37',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 2,
      '7' => 0,
      '5' => 0,
      '10' => FALSE,
      '8' => FALSE,
      '16' => FALSE,
      '14' => FALSE,
      '12' => FALSE,
      '24' => FALSE,
      '20' => FALSE,
      '26' => FALSE,
      '18' => FALSE,
      '28' => FALSE,
      '22' => FALSE,
    ),
    'referenceable_status' => 1,
    'advanced_view' => '',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'starts_with',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => array(
        '0' => array(
          'uid' => NULL,
          '_error_element' => 'default_value_widget][field_article_presenters][0][uid][uid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Presenters',
      'weight' => '37',
      'description' => '',
      'type' => 'userreference_autocomplete',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_article_reviewers
  $fields['article-field_article_reviewers'] = array(
    'field_name' => 'field_article_reviewers',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '41',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 0,
      '7' => 0,
      '10' => 0,
      '8' => 0,
      '14' => 0,
      '12' => 0,
      '5' => 0,
      '16' => FALSE,
      '24' => FALSE,
      '20' => FALSE,
      '26' => FALSE,
      '18' => FALSE,
      '28' => FALSE,
      '22' => FALSE,
    ),
    'referenceable_status' => '',
    'advanced_view' => 'list_reviewers',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => array(
        '0' => array(
          'uid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Reviewers',
      'weight' => '41',
      'description' => '',
      'type' => 'userreference_select',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_article_room
  $fields['article-field_article_room'] = array(
    'field_name' => 'field_article_room',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '51',
      'parent' => 'group_article_scheduling',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'plain',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'room' => 'room',
      'day' => 0,
      'image' => 0,
      'profile' => 0,
      'simplenews' => 0,
      'old_timeslot' => 0,
      'page' => 0,
      'panel' => 0,
      'article_review' => 0,
      'placeholder' => 0,
      'planet' => 0,
      'poll' => 0,
      'article' => 0,
      'product' => 0,
      'story' => 0,
      'supporter' => 0,
      'tshirt' => 0,
      'timeslot' => 0,
      'webform' => 0,
      'nomination' => FALSE,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Room',
      'weight' => '51',
      'description' => 'Select the room this session is to run in.',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_article_scheduled
  $fields['article-field_article_scheduled'] = array(
    'field_name' => 'field_article_scheduled',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '50',
      'parent' => 'group_article_scheduling',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'plain',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'timeslot' => 'timeslot',
      'day' => 0,
      'image' => 0,
      'profile' => 0,
      'simplenews' => 0,
      'old_timeslot' => 0,
      'page' => 0,
      'panel' => 0,
      'article_review' => 0,
      'placeholder' => 0,
      'planet' => 0,
      'poll' => 0,
      'article' => 0,
      'product' => 0,
      'room' => 0,
      'story' => 0,
      'supporter' => 0,
      'tshirt' => 0,
      'webform' => 0,
      'nomination' => FALSE,
    ),
    'advanced_view' => 'timeslot',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Scheduled',
      'weight' => '50',
      'description' => 'Select the timeslot into which this session is scheduled.',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_article_status
  $fields['article-field_article_status'] = array(
    'field_name' => 'field_article_status',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '40',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'pending|Pending
review|Review in progress
accepted|Accepted
accepted_minor_changes|Accepted with minor changes
needs_changes|Major changes needed
rejected|Rejected
withdrawn|Withdrawn
cancelled|Cancelled',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'pending',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Status',
      'weight' => '40',
      'description' => 'This field is used by the papers committee to flag whether or not a article has been accepted.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_article_timeslot
  $fields['article-field_article_timeslot'] = array(
    'field_name' => 'field_article_timeslot',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '53',
      'parent' => 'group_article_scheduling',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'plain',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'day' => 0,
      'image' => 0,
      'profile' => 0,
      'page' => 0,
      'panel' => 0,
      'article_review' => 0,
      'placeholder' => 0,
      'planet' => 0,
      'poll' => 0,
      'article' => 0,
      'product' => 0,
      'story' => 0,
      'supporter' => 0,
      'webform' => 0,
      'old_timeslot' => 'old_timeslot',
      'simplenews' => FALSE,
      'nomination' => FALSE,
      'room' => FALSE,
      'tshirt' => FALSE,
      'timeslot' => FALSE,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Timeslot',
      'weight' => '53',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_article_webform_id
  $fields['article-field_article_webform_id'] = array(
    'field_name' => 'field_article_webform_id',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '42',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_article_webform_id][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Webform ID',
      'weight' => '42',
      'description' => 'This field contains the webform submission ID that this article was imported from. We use this to make sure we don\'t import a article twice.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_room_capacity
  $fields['room-field_room_capacity'] = array(
    'field_name' => 'field_room_capacity',
    'type_name' => 'room',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_room_capacity][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Capacity',
      'weight' => '-3',
      'description' => 'Enter the maximum number of people this room can hold.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_room_code
  $fields['room-field_room_code'] = array(
    'field_name' => 'field_room_code',
    'type_name' => 'room',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '32',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_room_code][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Code',
      'weight' => '-4',
      'description' => 'Enter the room code, name or number that is used by the venue, if it differs from what is used on the program.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_timeslot_date
  $fields['timeslot-field_timeslot_date'] = array(
    'field_name' => 'field_timeslot_date',
    'type_name' => 'timeslot',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'datetime',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'site',
    'todate' => 'required',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'blank',
      'default_value_code2' => '',
      'input_format' => 'Y-m-d H:i',
      'input_format_custom' => '',
      'increment' => '5',
      'text_parts' => array(),
      'year_range' => '-1:+2',
      'label_position' => 'above',
      'label' => 'Date',
      'weight' => '-4',
      'description' => 'Please enter the start time and end time for this timeslot.',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Adequate review of, or reference to, related work');
  t('Administrative Comments');
  t('Administrative Notes');
  t('Attendee Notes');
  t('Author Feedback');
  t('Autoselect');
  t('Bio');
  t('Blog or Website');
  t('Capacity');
  t('Code');
  t('Country');
  t('Date');
  t('Day');
  t('Dietary Requirements');
  t('Discussion (eg. Evaluation and critique of results/experiences, as relevant)');
  t('Equipment');
  t('Files');
  t('First name');
  t('Gender');
  t('Ignore');
  t('Interest and relevance for a national audience');
  t('Interests');
  t('Internet');
  t('Mobility or Accessibility');
  t('Paper');
  t('Phone');
  t('Position');
  t('Postcode');
  t('Potential value/impact of research or developments');
  t('Presenters');
  t('Private comments');
  t('Quality of writing organisation, clarity, style');
  t('Recommendation');
  t('Region');
  t('Reviewers');
  t('Room');
  t('Scheduled');
  t('School, Organisation or Affiliation');
  t('Sector');
  t('State, Region or Province');
  t('Status');
  t('Surname or Family Name');
  t('Timeslot');
  t('Timeslots');
  t('Town, City or Suburb');
  t('VIP Insert');
  t('Webform ID');

  return $fields;
}
