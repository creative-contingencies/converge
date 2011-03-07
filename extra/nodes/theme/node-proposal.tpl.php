<?php
// $Id: node-proposal.tpl.php,v 0.5 2009/10/29 21:21:44 goba Exp $

/**
 * @file node-proposal.tpl.php
 *
 * Theme implementation to display a session proposal node with presenter info.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: Node body or teaser depending on $teaser flag.
 * - $picture: The authors picture of the node output from
 *   theme_user_picture().
 * - $date: Formatted creation date (use $created to reformat with
 *   format_date()).
 * - $links: Themed links like "Read more", "Add new comment", etc. output
 *   from theme_links().
 * - $name: Themed username of node author output from theme_user().
 * - $node_url: Direct url of the current node.
 * - $terms: the themed list of taxonomy term links output from theme_links().
 * - $submitted: themed submission information output from
 *   theme_node_submitted().
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $teaser: Flag for the teaser state.
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 *
 * Conference sessions variables.
 * - $scheduled: Flag for scheduling status
 * - $timeslot: Formatted date and time.
 * - $room: Room name.
 * - $selected: Flag for selection state.
 * - $session_selection: String that contains selection status or link to select node.
 * - $session_kind: Link to the list of proposals that share this kind.
 * - $attendee_count: The number of attendees who have selected this proposal.
 */
?>
<div id="node-<?php print $node->nid; ?>" class="node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block">

<?php if (!$page): ?>
  <h2><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
<?php endif; ?>

<?php if ($presenters): ?>
  <?php foreach ($presenters as $presenter): ?>
    <?php if ($presenter['name']): ?>
      <h4 class="presenter"><?php print $presenter['name']; ?></h4>
    <?php endif; ?>
  <?php endforeach; ?>
<?php endif; ?>

<?php if ($scheduled): ?>
  <div class="session-scheduling">
  <p class="session-time"><?php print $session_kind; ?> on <?php print $timeslot; ?> 
  <?php if ($room): ?>
    <i>in&nbsp;room&nbsp;</i><?php print $room; ?>
  <?php endif; ?>
  <?php if ($attendee_count): ?> (<?php print $attendee_count; ?>)<?php endif; ?>
  </p>
<?php if (false): ?>
  <p class="session-selection"><?php print $session_selection; ?></p>
<?php endif; ?>
  </div>
<?php endif; ?>

  <?php if ($terms): ?>
    <div class="terms terms-inline"><?php print $terms ?></div>
  <?php endif;?>

  <div class="content">
    <p><?php print $content ?></p>

    <?php if ($attendee_notes): ?>
      <p><?php print $attendee_notes; ?>
    <?php endif; ?>
  </div>

<?php
  global $user;
  if ($user->uid == 1) {
    print '<p>Presenter Link: ' . $uuidlink .'</p>';
  }
?>

<div class="presenter">
  <?php if ($presenters): ?>
    <?php foreach ($presenters as $presenter): ?>
		<?php if ($presenter['picture']): ?>
			<?php print $presenter['picture']; ?> 
		<?php endif; ?>

      <?php if ($presenter['name']): ?>
			<h4 class="presenter"><?php print $presenter['name']; ?></h4>
      <?php endif; ?>

		<?php if ($presenter['position']): ?>
			<h4 class="presenter"><?php print $presenter['position']; ?></h4>
      <?php endif; ?>

      <?php if ($presenter['organisation']): ?>
      	<h4 class="presenter"><?php print $presenter['organisation']; ?></h4>
		<?php endif; ?>
		
      <?php if ($presenter['bio']): ?>
      <span class="presenter-bio"><?php print $presenter['bio']; ?></span>
		<?php endif; ?>

      <?php if ($presenter['blog']): ?>
      	<ul><li><?php print $presenter['blog']; ?></li></ul>
      <?php endif; ?>

    <?php endforeach; ?>
  <?php endif; ?>

</div>
</div>
