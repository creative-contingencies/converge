<?php
 /**
  * Variables:
  *  - $submit: Submit button value.
  *  - $action: Form action url.
  *  - $hidden: Array of hidden fields.
  *  - $colour: Colour of the button.
  */
?>

<form action="<?php print $action; ?>" method="POST">
<?php foreach ($hidden as $name => $value): ?>
  <input type="hidden" name="<?php print $name; ?>" value="<?php print $value; ?>" />
<?php endforeach; ?>
  <input class="form-submit <?php print $colour; ?>" type="submit" value="<?php print $submit; ?>" />
</form>
