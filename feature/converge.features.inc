<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function converge_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function converge_node_info() {
  $items = array(
    'day' => array(
      'name' => t('Day'),
      'module' => 'features',
      'description' => t('The <em>day</em> type is used for scheduling. Each session that is to be scheduled for the conference must occur on a particular <em>day</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'paper_review' => array(
      'name' => t('Paper Review'),
      'module' => 'features',
      'description' => t('Assign feedback and details to a paper article.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => t('Use your mouse to hover over the stars, then click the number of stars
you wish to assign to each of the listed review criteria. When hovering
over the stars, they glow yellow, once selected they change to red.'),
    ),
    'profile' => array(
      'name' => t('Profile'),
      'module' => 'features',
      'description' => t('A user profile built as content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'article' => array(
      'name' => t('Article'),
      'module' => 'features',
      'description' => t('This node holds articles for papers, presentations and talks. A article can be created by both anonymous and registered users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Abstract'),
      'min_word_count' => '0',
      'help' => t('The Call for Papers has now closed, however we are still accepting submissions which will be placed on a waiting list.

For further details on submitting a paper or article for ACEC2010 read more <a href="/presenters">presenter info</a>.'),
    ),
    'room' => array(
      'name' => t('Room'),
      'module' => 'features',
      'description' => t('The <em>room</em> node type represents rooms that sessions can be scheduled into.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'timeslot' => array(
      'name' => t('Timeslot'),
      'module' => 'features',
      'description' => t('A <em>timeslot</em> defines a period of time in which a <em>article</em> can be scheduled.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function converge_views_api() {
  return array(
    'api' => '2',
  );
}
