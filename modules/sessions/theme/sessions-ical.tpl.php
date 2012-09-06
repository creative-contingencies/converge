<?php
 /**
  * Variables:
  *  - $account: A valid username string.
  *  - $content: A keyed array containing data to be tabulated.
  *    'header' - The table headers.
  *    'rows'   - The table rows.
  */

  $offset = variable_get('date_default_timezone', 0);
  $offset += 3600;

  header('Content-Type: text/Calendar');
  header('Content-Disposition: inline; filename=ACEC2012.ics');

  print "BEGIN:VCALENDAR\n";
  print "VERSION:2.0\n";
  print "METHOD:PUBLISH\n";
  print "X-WR-CALNAME: Calendar | ACEC2012 for {$username}\n";
  print "PRODID:-//Drupal iCal API//EN\n";

  foreach ($content['rows'] as $idx => $row) {

    // Don't include timeslots without a selection.
    if (!$row['nid'])
      continue;

    // Turn from and to dates back into a timestamp.
    $date_from = strtotime($row['date_from']);
    $date_to = strtotime($row['date_to']);

    print "BEGIN:VEVENT\n";
    print "UID:acec2012:program:{$row['uuid']}:session:{$row['nid']}\n";
    print "SUMMARY:{$row['session']}\n";
    print strftime('DTSTAMP;TZID=Australia/Perth;VALUE=DATE-TIME:%Y%m%dT%H%M%S', time()) ."\n";
    print strftime('DTSTART;TZID=Australia/Perth;VALUE=DATE-TIME:%Y%m%dT%H%M%S', ($date_from + $offset)) ."\n";
    print strftime('DTEND;TZID=Australia/Perth;VALUE=DATE-TIME:%Y%m%dT%H%M%S', ($date_to + $offset)) ."\n";
    print "URL;VALUE=URI:" . url('node/' . $row['nid'], array('absolute' => TRUE)) ."\n";
    print "LOCATION:{$row['room']}\n";
    print "END:VEVENT\n";
  }
  print "END:VCALENDAR\n";
?>
