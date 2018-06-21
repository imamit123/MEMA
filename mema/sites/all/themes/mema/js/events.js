
/**
* Event page Accordian
*/
(function($) {
Drupal.behaviors.globalmema_events = {
  attach: function(context, settings) {
    /*$('.accordion-title').addClass('minus');*/
    $('.accordion-title').click(function() {
      var checkElement = $(this).next();
      $('.accordion-title').removeClass('minus');
      $(this).closest('.accordion-title').addClass('minus');
      if((checkElement.is('.accordion-content')) && (checkElement.is(':visible'))) {
        $(this).closest('.accordion-title').removeClass('minus');
        checkElement.slideUp('normal');
      }
      if((checkElement.is('.accordion-content')) && (!checkElement.is(':visible'))) {
        $('.accordion-content:visible').slideUp('normal');
        checkElement.slideDown('normal');
      }
      if (checkElement.is('.accordion-content')) {
        return false;
      } else {
        return true;
      }
    });
  }
}
})(jQuery);