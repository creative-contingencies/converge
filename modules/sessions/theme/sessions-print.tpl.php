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
  <title>My Program for <?php print $username; ?></title>
<style type="text/css">
  table tr th {
    color: #fff;
    background: #057338;
    font-family: Arial, Verdana, sans-serif;
  }
  table tr.even {
    background: #eee;
  }
  table td {
    align: left;
    verical-align: top;
    font-family: Arial, Verdana, sans-serif;
    font-size: 0.8em;
  }
  h2, h3 {
    color: #057338;
    font-size: 1.2em;
    font-family: Arial, Verdana, sans-serif;
  }
  h3 {
    margin-bottom: 0px;
    margin-top: 8px;
    font-family: Arial, Verdana, sans-serif;
  }
</style>
</head>
<body>
	<h2><img src="/sites/acec2012.acce.edu.au/files/ACEC2012-shoutout.png" align="right" />
		My Program for <?php print $username; ?></h2>
		<br clear="all">
		<p>&nbsp;</p>
  <?php print $table; ?>

</body>
</html>
