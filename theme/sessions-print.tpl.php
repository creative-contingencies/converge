<?php
 /**
  * Variables:
  *  - $account: A valid user object.
  *  - $content: The session selection table do be displayed.
  */
?>

<html>
<head>
  <title>My Program for <?php print strip_tags(theme('username', $account)); ?></title>
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

  <h2>MyACEC Program for <?php print strip_tags(theme('username', $account)); ?></h2>

  <?php print $content; ?>

</body>
</html>
