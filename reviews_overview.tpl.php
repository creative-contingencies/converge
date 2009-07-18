<?php

foreach ( $reviews as $review ) {
  $reviewer = user_load(array('uid' => $review->uid));
  $reviewer_profile = content_profile_load('profile', $reviewer->uid);
?>

<fieldset class="collapsible">
  <legend class="collapse-processed">Review by: <?php print $reviewer_profile->field_profile_firstname[0]['value'] . ' ' . $reviewer_profile->field_profile_surname[0]['value'] ?></legend>
  <div class="fieldset-wrapper">
    <p>Details...</p>
  </div>
</fieldset>

<?php
}

?>
