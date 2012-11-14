Drupal.behaviors.overrides = function (context) {
  $('#edit-panes-billing-billing-country').change(function() {
    if ($(this).val() == 36)  {
      $('#edit-panes-payment-payment-method-cod-wrapper').show();
    }
    else {
      $('#edit-panes-payment-payment-method-cod-wrapper').hide();
    }
  });
};
