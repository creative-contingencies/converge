<?php
/**
 * Implementation of hook_views_data()
 */
function sessions_views_data() {
  $data = array();
  $data['converge_session_selection'] = array(
    'sid' => array(
      'title' => t('sid'),
      'help' => t('Unique selection ID.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'uid' => array(
      'title' => t('User'),
      'help' => t('The user who selected the conference session.'),
      'relationship' => array(
        'handler' => 'views_handler_relationship',
        'base' => 'users',
        'base field' => 'uid',
        'label' => t('user'),
      ),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'nid' => array(
      'title' => t('Proposal'),
      'help' => t('The selected proposal node.'),
      'field' => array(
        'handler' => 'views_handler_field_node',
        'click sortable' => TRUE,
      ),
      'relationship' => array(
        'handler' => 'views_handler_relationship',
        'base' => 'node',
        'base field' => 'nid',
        'label' => t('proposal'),
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_node_nid',
        'parent' => 'views_handler_argument_node_nid',
        'numeric' => TRUE,
        'validate type' => 'nid',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'timeslot' => array(
      'title' => t('Timeslot'),
      'help' => t('Timeslot Node'),
      'relationship' => array(
        'handler' => 'views_handler_relationship',
        'base' => 'node',
        'base field' => 'nid',
        'label' => t('timeslot'),
      ),
      'field' => array(
        'handler' => 'views_handler_field_node',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_node_nid',
        'parent' => 'views_handler_argument_node_nid',
        'numeric' => TRUE,
        'validate type' => 'nid',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'modified' => array(
      'title' => t('Time Selected'),
      'help' => t('Timestamp of when this selection was made'),
      'field' => array(
        'handler' => 'views_handler_field_date',
        'click sortable' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_date',
        'allow empty' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort_date',
      ),
    ),
    'table' => array(
      'base' => array(
        'field' => 'sid',
        'title' => t('CCC: Session Selections'),
        'help' => t('Session selections made by users who have registered for an event.'),
        'weight' => -10,
      ),
      'group' => t('Conference Sessions'),
    ),
  );
  return $data;
}

/**
 * Implementation of hook_views_data_alter().
 */
function sessions_views_data_alter(&$data) {
  // node relationship for profiles
  $data['users']['converge_session_selection'] = array(
    'group' => t('Conference Sessions'),
    'title' => t('Session Selections'),
    'help' => t('Create a relationship to the session selections of the user.'),
    'relationship' => array(
      'base' => 'converge_session_selections',
      'base field' => 'uid',
      'relationship field' => 'uid',
      'label' => t('Session Selections'),
    ),
  );
  $data['node']['converge_session_selection'] = array(
    'group' => t('Conference Sessions'),
    'title' => t('Selected Session'),
    'help' => t('Create a relationship to the session selections of the user.'),
    'relationship' => array(
      'base' => 'converge_session_selections',
      'base field' => 'nid',
      'relationship field' => 'nid',
      'label' => t('Selected Session'),
    ),
  );
  $data['node']['converge_session_selection'] = array(
    'group' => t('Conference Sessions'),
    'title' => t('Session Timeslot'),
    'help' => t('Create a relationship to the session selections of the user.'),
    'relationship' => array(
      'base' => 'converge_session_selections',
      'base field' => 'nid',
      'relationship field' => 'timeslot',
      'label' => t('Session Timeslot'),
    ),
  );
}
