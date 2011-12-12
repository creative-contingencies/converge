<div class="field field-type-userreference field-field-proposal-presenters">
  <h3 class="field-label">Presenters</h3>
  <div class="field-items">
    <?php foreach ((array)$node->field_proposal_presenters as $item) { ?>
      <div class="field-item"><?php print $item['view'] ?></div>
    <?php } ?>
  </div>
</div>

<div class="field field-type-filefield field-field-proposal-files">
  <h3 class="field-label">Files</h3>
  <div class="field-items">
    <?php foreach ((array)$node->field_proposal_files as $item) { ?>
      <div class="field-item"><?php print $item['view'] ?></div>
    <?php } ?>
  </div>
</div>

<div class="field field-type-text field-field-proposal-status">
  <h3 class="field-label">Status</h3>
  <div class="field-items">
      <div class="field-item"><?php print $node->field_proposal_status[0]['view'] ?></div>
  </div>
</div>

<div class="field field-type-userreference field-field-proposal-reviewers">
  <h3 class="field-label">Reviewers</h3>
  <div class="field-items">
    <?php foreach ((array)$node->field_proposal_reviewers as $item) { ?>
      <div class="field-item"><?php print $item['view'] ?></div>
    <?php } ?>
  </div>
</div>

<div class="field field-type-number-integer field-field-proposal-webform-id">
  <h3 class="field-label">Webform ID</h3>
  <div class="field-items">
      <div class="field-item"><?php print $node->field_proposal_webform_id[0]['view'] ?></div>
  </div>
</div>
