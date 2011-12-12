<?php
 /**
  * Variables:
  *  - $conflicts: Keyed array of conflicting sessions.
  */
?>

<p>Your choice conflicts with some of the selections you made earlier:
<ul>
<?php foreach ($conflicts as $conflict): ?>
  <li><?php print l($conflict['title'], 'node/' . $conflict['nid']); ?>
<?php endforeach; ?>
</ul>
