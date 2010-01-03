<?php
 /**
  * Variables:
  *  - $submit: Submit button value.
  *  - $action: Form action url.
  *  - $hidden: Array of hidden fields.
  */
?>

<form action="<?php print $action; ?>" method="GET">
<?php foreach ($hidden as $name => $value): ?>
  <input type="hidden" name="<?php print $name; ?>" value="<?php print $value; ?>" />
<?php endforeach; ?>
  <input class="form-submit" type="submit" value="<?php print $submit; ?>" />
</form>

