<?php
/**
 * @file proposal.admin.pages.inc
 * Holds admin screens associated with the proposals module.
 */

/**
 * Return a table containing a grid with all scheduled proposals.
 */
function proposal_grid() {

  $offset = variable_get('date_default_timezone', 0);
  // $offset += 3600;

  $rooms = array();
  $timeslots = array();
  $header = array(t('Conference Grid'));

  // select all timeslots.
  $result = db_query("SELECT DISTINCT n.nid, n.title, ctt.field_timeslot_date_value AS timeslot FROM {node} AS n INNER JOIN {content_type_timeslot} AS ctt USING (vid) WHERE n.status <> 0 ORDER BY ctt.field_timeslot_date_value ASC");
  while ($row = db_fetch_object($result)) {
    $datetime = strtotime($row->timeslot);
    $datetime += $offset;
    $title = format_date($datetime, 'medium');

    $timeslots[$row->nid] = $row;
    $rows[$row->nid][0] = l($row->title, 'node/' . $row->nid, array('attributes' => array('title' => $title)));
  }

  // select all rooms.
  $result = db_query("SELECT n.nid, n.title, r.field_room_capacity_value AS capacity, r.field_room_code_value AS code FROM {node} AS n INNER JOIN {content_type_room} AS r USING(vid) WHERE n.status <> 0 AND n.type = 'room' ORDER BY n.title ASC");
  while ($row = db_fetch_object($result)) {
    $rooms[$row->nid] = $row;
    $title = t('Room @code holds @capacity pax', array('@code' => $row->code, '@capacity' => $row->capacity));
    $header[$row->nid] = l($row->title, 'node/' . $row->nid, array('attributes' => array('title' => $title)));
    foreach ($timeslots as $tid => $timeslot) {
      $rows[$tid][$row->nid] = '';
    }
  }

  // select all proposals with both a room and a timeslot.
  $result = db_query("SELECT p.nid, p.field_proposal_room_nid AS room, p.field_proposal_scheduled_nid AS timeslot, n.title FROM {content_type_proposal} AS p LEFT JOIN {node} AS n USING(vid) WHERE p.field_proposal_room_nid IS NOT NULL AND p.field_proposal_scheduled_nid IS NOT NULL");
  while ($row = db_fetch_object($result)) {
    $datetime = strtotime($timeslots[$row->timeslot]->timeslot);
    $datetime += $offset;

    if (!empty($rows[$row->timeslot][$row->room])) {
      $rows[$row->timeslot][$row->room] .= '<strong>ALERT</strong>';
    }

    $title = t('@proposal in @room at @timeslot', array('@proposal' => $row->title, '@room' => $rooms[$row->room]->title, '@timeslot' => format_date($datetime, 'medium')));
    $rows[$row->timeslot][$row->room] .= l($row->nid, 'node/'. $row->nid, array('attributes' => array('title' => $title)));
  }

  return theme('table', $header, $rows);
}

/**
 * Return a table containing a grid with all scheduled proposals.
 */
function proposal_grid_title($links = 1, $csv = '') {

  $offset = variable_get('date_default_timezone', 0);
  // $offset += 3600;

  $links = intval($links);

  $rooms = array();
  $timeslots = array();
  $header = array(t('Conference Grid with Titles'));

  // select all timeslots.
  $result = db_query("SELECT DISTINCT n.nid, n.title, ctt.field_timeslot_date_value AS timeslot, ctt.field_timeslot_date_value2 AS timeslot2 FROM {node} AS n INNER JOIN {content_type_timeslot} AS ctt USING (vid) WHERE n.status <> 0 ORDER BY ctt.field_timeslot_date_value ASC");
  while ($row = db_fetch_object($result)) {
    $datetime = strtotime($row->timeslot);
    $datetime += $offset;
    $datetime2 = strtotime($row->timeslot2);
    $datetime2 += $offset;
    $title = t('@start - @end', array('@start' => format_date($datetime, 'custom', 'H:i'), '@end' => format_date($datetime2, 'custom', 'H:i')));
    $timeslots[$row->nid] = $row;

    if ($links)  {
      $rows[$row->nid][0] = l($title, 'node/' . $row->nid, array('absolute' => TRUE, 'attributes' => array('title' => $title)));
    }
    else {
      $rows[$row->nid][0] = $title;
    }
  }

  // select all rooms.
  $result = db_query("SELECT n.nid, n.title, r.field_room_capacity_value AS capacity, r.field_room_code_value AS code FROM {node} AS n INNER JOIN {content_type_room} AS r USING(vid) WHERE n.status <> 0 AND n.type = 'room' ORDER BY n.title ASC");
  while ($row = db_fetch_object($result)) {
    $rooms[$row->nid] = $row;
    $title = t('Room @code holds @capacity pax', array('@code' => $row->code, '@capacity' => $row->capacity));
    if ($links)  {
      $header[$row->nid] = l($row->title, 'node/' . $row->nid, array('absolute' => TRUE, 'attributes' => array('title' => $title)));
    }
    else {
      $header[$row->nid] = $row->title;
    }
    foreach ($timeslots as $tid => $timeslot) {
      $rows[$tid][$row->nid] = '';
    }
  }

  // select all proposals with both a room and a timeslot.
  $result = db_query("SELECT p.nid, p.field_proposal_room_nid AS room, p.field_proposal_scheduled_nid AS timeslot, n.title FROM {content_type_proposal} AS p LEFT JOIN {node} AS n USING(vid) WHERE p.field_proposal_room_nid IS NOT NULL AND p.field_proposal_scheduled_nid IS NOT NULL");
  while ($row = db_fetch_object($result)) {
    $datetime = strtotime($timeslots[$row->timeslot]->timeslot);
    $datetime += $offset;

    $title = t('@proposal in @room at @timeslot', array('@proposal' => $row->title, '@room' => $rooms[$row->room]->title, '@timeslot' => format_date($datetime, 'medium')));
    if ($links)  {
      $rows[$row->timeslot][$row->room] .= l($row->title, 'node/'. $row->nid, array('absolute' => TRUE, 'attributes' => array('title' => $title)));
    }
    else {
      $rows[$row->timeslot][$row->room] .= $row->title;
    }
  }

  if (!empty($csv)) {
    header('Content-type: application/csv'); 
    header('Content-Disposition: attachment; filename=converge_grid_titles.csv'); 

    $fp = fopen("php://temp", "w");
    fputcsv($fp, $header);
    foreach ($rows as $row) {
      fputcsv($fp, $row);
    }
    rewind($fp);
    $data = fread($fp, 1048576);
    fclose($fp);
    die(rtrim($data, "\n"));
  }

  return theme('table', $header, $rows);
}
