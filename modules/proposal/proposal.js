/**
 * Use Drupal.behaviors to hide elements defined in Drupal.settings.
 */
Drupal.behaviors.proposal = function(context) {
  var elements = Drupal.settings.proposal;
  for (var i = 0; i < elements.length; i++) {
    $(elements[i].selector).hide();
  }
}
