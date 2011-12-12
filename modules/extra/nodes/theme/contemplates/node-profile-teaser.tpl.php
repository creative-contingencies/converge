<p>Make sure you get the jump on all the latest conference news as it happens. 
Edit <a href="/user-profile/edit/profile">your profile</a> now!</p>
<table><tr>
<td valign="top">
<div class="field field-type-text field-field-profile-firstname">
  <div class="field-items">
      <div class="field-item">
	      <p><?php print $node->field_profile_firstname[0]['view'] ?> <?php print $node->field_profile_surname[0]['view'] ?><br />
	      <?php print $node->field_profile_position[0]['view'] ?><br />
	      <?php print $node->field_profile_organisation[0]['view'] ?><br />
      	ph: <?php print $node->field_profile_phone[0]['view'] ?></p>
      </div>
  </div>
</div>
</td>
<td valign="top">
<div class="field field-type-text field-field-profile-address">
  <div class="field-items">
      <div class="field-item">
	      <p><?php print $node->field_profile_address[0]['view'] ?><br />
	      <?php print $node->field_profile_city[0]['view'] ?>&nbsp;&nbsp;<?php print $node->field_profile_state[0]['view'] ?>&nbsp;&nbsp;<?php print $node->field_profile_postcode[0]['view'] ?><br />
	      <?php print $node->field_profile_country[0]['view'] ?></p>
     	</div>
  </div>
</div>
</td>
</tr></table>

