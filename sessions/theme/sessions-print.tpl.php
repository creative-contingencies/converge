<?php
 /**
  * Variables:
  *  - $account: A valid username string.
  *  - $content: A keyed array containing data to be tabulated.
  *    'header' - The table headers.
  *    'rows'   - The table rows.
  */

  foreach ($content['rows'] as $idx => $row) {
    unset($content['rows'][$idx]['date_from']);
    unset($content['rows'][$idx]['date_to']);
    unset($content['rows'][$idx]['nid']);
    unset($content['rows'][$idx]['uuid']);
  }

  $table = theme('table', $content['header'], $content['rows'], array('cellpadding' => 8, 'cellspacing' => 0));
?>

<html>
<head>
  <title>Program for <?php print $username; ?></title>
<style type="text/css">
  table tr th {
    color: #fff;
    background: #333;
  }
  table tr.even {
    background: #ccc;
  }
  table td {
    align: left;
    verical-align: top;
  }
  h2, h3 {
    font-family: sans-serif;
  }
  h3 {
    margin-bottom: 0px;
    margin-top: 8px;
  }
</style>
</head>
<body>

  <h2>OSDC2010 Program for <?php print $username; ?></h2>

  <?php print $table; ?>

</body>
</html>
