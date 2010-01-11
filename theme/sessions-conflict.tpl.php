<?php
 /**
  * Variables:
  *  - $conflicts: Keyed array of conflicting sessions.
  */
?>

<p>Your choice conflicts with some of the selections you made earlier:
<ul>
<?php foreach ($conflicts as $conflict): ?>
  <li><?php print $conflict['title']; ?>
<?php endforeach; ?>
</ul>
