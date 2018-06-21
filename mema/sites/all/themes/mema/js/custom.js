/**
 * @file
 * bootstrap.js
 *
 * Provides general enhancements and fixes to Bootstrap's JS files.
 */
(function($){

  $(document).ready(function(){


   /**
     * Adding spinner
     */

    $(window).load(function(){
      $('.loader').fadeOut(1000);

    });
  /* Adding js for search*/
  /*$(".input-group").on("click",function () {

  });
*/
    jQuery('body').click(function(e) {
      if (!jQuery(e.target).is('.btn-primary, .form-text')) {
        jQuery('#search-block-form input.form-text').css({
          '-webkit-transition':'all 2s ease',
          '-moz-transition':'all 2s ease',
          'width': '0px',
          'border': '0px solid #ccc',
          'border-radius': '2px',
          'padding-left': '0',
          'margin-left': '0'
        });
      }
    });

    jQuery('#search-block-form .btn-primary').on('click', function(){
      var search_box_width = jQuery('#search-block-form input.form-text').width();
      // slide open the search text field if not showing
      if (search_box_width <= 2) {
        jQuery('#search-block-form input.form-text').css({
          '-webkit-transition':'all 2s ease',
          '-moz-transition':'all 2s ease',
          'width': '120px',
          'border': '1px solid #ccc',
          'border-radius': '2px',
          'padding-left': '5px',
          'margin-left': '7px'
        });
        return false;
      } else {
        var search_text = jQuery('#search-block-form input.form-text').val();
        if (search_text.length) {

        } else {
          jQuery('#edit-search-block-form--2').css({
            '-webkit-transition':'all 2s ease',
            '-moz-transition':'all 2s ease',
            'width': '0px',
            'border': '0px solid #ccc',
            'padding-left': '0',
            'margin-left': '0'
          });
          return false;
        }
      }
      return true;
    });

    /**
     * Adding span tag into the menu anchor tag
     */
    /*$("#background1").css("display" , "inline-block");*/
    $('.region-sidebar-first .menu.nav li a, .region-sidebar-first .menu.nav li .nolink').wrapInner('<span></span>');
    $('#edit-preview').removeClass('btn-default').addClass('btn-primary');

    /**
     * Tabledrag theming elements.
     */

    $('#toggle-menu').click(function(){
      $(this).toggleClass('active');
      $('.main-container').toggleClass('sidebar-show');
    });
   /* added z-index for footer */
    $('.tb-megamenu-button').click(function(){
      $('.footer').toggleClass('index-footer');
      $('.footer-second .container').toggleClass('chk_container');
      $('.footer-second').toggleClass('foot_check');
    });
    /**
     * Toggling sub menus
     */
    $('.menu.nav span').click(function(){
      $(this).toggleClass('open');
      $(this).parent('li').toggleClass('open');
      $(this).next('.drop-menu').slideToggle();
    });
   /**
     * mema footer logos
     */
    $('.footer-logo-image.aasa').mouseover(function() {
      $('.footer-logo-hover-text.aasa').fadeIn(0);
      $('.footer-logo-image.aasa').addClass('active');
      $('.footer-logo-image.aasa').addClass('aasa11');
      $('.footer-logo-hover-text.aasa').css({'background': '#e51937'});
      ;
    });

    $('.footer-logo-image.aasa').mouseout(function() {
      $('.footer-logo-hover-text.aasa').fadeOut(0);
      $('.footer-logo-image.aasa').removeClass('active');
      $('.footer-logo-image.aasa').removeClass('aasa11');
    });

    /**For HDMA */
    $('.footer-logo-image.hdma').mouseover(function() {
      $('.footer-logo-hover-text.hdma').fadeIn(0);
      $('.footer-logo-image.hdma').addClass('active');
      $('.footer-logo-image.hdma').addClass('hdma11');
      $('.footer-logo-hover-text.hdma').css({'background': '#a75a29'});
    });

    $('.footer-logo-image.hdma').mouseout(function() {
      $('.footer-logo-hover-text.hdma').fadeOut(0);
      $('.footer-logo-image.hdma').removeClass('active');
      $('.footer-logo-image.hdma').removeClass('hdma11');
    });
    /**For MERA */
    $('.footer-logo-image.mera').mouseover(function() {
      $('.footer-logo-hover-text.mera').fadeIn(0);
      $('.footer-logo-image.mera').addClass('active');
      $('.footer-logo-image.mera').addClass('mera11');
      $('.footer-logo-hover-text.mera').css({'background': '#419639'});
    });
    $('.footer-logo-image.mera').mouseout(function() {
      $('.footer-logo-hover-text.mera').fadeOut(0);
      $('.footer-logo-image.mera').removeClass('active');
      $('.footer-logo-image.mera').removeClass('mera11');
    });
    /**For OESA */
      $('.footer-logo-image.oesa').mouseover(function() {
      $('.footer-logo-hover-text.oesa').fadeIn(0);
      $('.footer-logo-image.oesa').addClass('active');
      $('.footer-logo-image.oesa').addClass('oesa11');
      $('.footer-logo-hover-text.oesa').css({'background': '#3473BA'});
     });

    $('.footer-logo-image.oesa').mouseout(function() {
      $('.footer-logo-hover-text.oesa').fadeOut(0);
      $('.footer-logo-image.oesa').removeClass('active');
      $('.footer-logo-image.oesa').removeClass('oesa11');
    });

    /*for MEMA*/
    $('.footer-logo-image.mema').mouseover(function() {
      $('.footer-logo-hover-text.mema').fadeIn(0);
      $('.footer-logo-image.mema').addClass('active');
      $('.footer-logo-image.mema').addClass('mema11');
      $('.footer-logo-hover-text.mema').css({'background': '#231F20'});
    });

    $('.footer-logo-image.mema').mouseout(function() {
      $('.footer-logo-hover-text.mema').fadeOut(0);
      $('.footer-logo-image.mema').removeClass('active');
      $('.footer-logo-image.mema').removeClass('mema11');
    });
    /* js for Menu z-index*/
    $(".tb-megamenu .nav li.dropdown.active > .dropdown-toggle").mouseover(function(){
        $('.navbar-header').addClass('logo-index');
    });

    $(".tb-megamenu .nav li.dropdown.active > .tb-megamenu-submenu").mouseover(function(){
      $('.navbar-header').addClass('logo-index');
    });

    $(".tb-megamenu .nav li.dropdown.active > .tb-megamenu-submenu").mouseout(function(){
      $('.navbar-header').removeClass('logo-index');
    });

    $(".tb-megamenu .nav li.dropdown.active > .dropdown-toggle").mouseout(function(){
      $('.navbar-header').removeClass('logo-index');
    });

// jquery for mobile responsive main menus
    $('.level-1').on('click', function(){
      $(this).find('.tb-megamenu-column').toggleClass('hidden-collapse');
      $(this).toggleClass('minus');
    });
   $('.mob-main-wrapp').on('click', function(){
      $(this).find('.title-wrapper').slideToggle();
      $(this).find('.mob-sites-name').toggleClass("footer-sub");
    });
 }); // ducument ready ends

})(jQuery);


/**
* Home page division promo block more or less feature
*/
(function($) {
  Drupal.behaviors.globalmema = {
    attach: function(context, settings) {
       //Attachment Open in New Window.
      $(".node-type-resource #block-views-resource-block-2 .views-field-field-attachments ul li a").attr('target','_blank');
      $('.region-footer2').hide();
      $('.view-more-links').click(function(){
        if ($('.region-footer2').is(":hidden")) {
          $('.region-footer2').slideDown(2000);
          $('.view-more-links').text('less');
          $('.view-more-links').addClass('class2-link');
          $('.footer-second').addClass('more-space');
          $("html, body").animate({ scrollTop: $(document).height() }, 2000);
        } else {
          $('.region-footer2').slideUp(2000);
          $("html,body").animate({scrollTop:870}, 2000);
          $('.view-more-links').text('more');
          $('.footer-second').removeClass('more-space');
          jQuery('.view-more-links').removeClass('class2-link');
        }
      });

      //Search box toggel when click on search link .
      //jQuery('#block-search-form').hide();
      //jQuery(".search_link").click(function(event) {
       // jQuery('#block-search-form').toggle();
      //});
      // place holders for search form

      var search_box_id = jQuery( "#search-form #edit-keys" );
      search_box_id.attr('placeholder','Search for event key words etc.');
      var search_box_id = jQuery( "#search-form #edit-or" );
      search_box_id.attr('placeholder','Containing any of the words');
      var search_box_id = jQuery( "#search-form #edit-phrase" );
      search_box_id.attr('placeholder','Containing the phrase');
      var search_box_id = jQuery( "#search-form #edit-negative" );
      search_box_id.attr('placeholder','Containing none of the words');
      jQuery( "#search-form #edit-submit--2").text('Search');
      var search_box_id = jQuery( "#search-block-form #edit-search-block-form--2" );
       search_box_id.attr('placeholder','Search...');
      jQuery( "#edit-advanced > div > div > div:nth-child(2) > div > label").text('Filter by Type');
      jQuery(".page-advocacy .view-id-home_page_event.view-display-id-block_1 .homepage-event-header").parent().parent().parent().addClass('display-content-advocacy-event');
    jQuery('#tabbedPanels .panelContainer .panel').removeClass('hide');
    jQuery('#tabbedPanels .panelContainer .panel').removeClass('show');
    jQuery('#tabbedPanels .room-tabs a.active').click();
    //Print for all page redirect
    var PageType = Drupal.settings.page_type
    var PageId = Drupal.settings.page_id
    var baseurl = window.location.origin;//+window.location.pathname;
    var pathname = window.location.pathname; // Returns path only
    //var path = baseurl   + "/print" + pathname;
    if (PageType == 'views') {
       var path = baseurl   + "/print" + pathname;
    }else{
      var path = baseurl   + "/print/" + PageId;
    }
    jQuery(document).bind("keyup keydown", function(e){
      //if(e.ctrlKey && e.keyCode == 80){
      if((e.ctrlKey || e.metaKey) && e.keyCode == 80) {
      // window.location = path;
      window.open(path, '_blank');
      return false;
      }
    });
    //Print icon Google analytics event tracking.
    $(".main-content-print-button .print-page" ).click(function() {
        logClickEvent('Print', this.href)
    });

  }
  };
})(jQuery);

/**
 * Detect Analytics type and send event
 * @ref https://support.google.com/analytics/answer/1033068
 * @param category string
 * @param label string
 */
function logClickEvent(category, label) {
    if (window.ga && ga.create) {
        //Universal event tracking
        //https://developers.google.com/analytics/devguides/collection/analyticsjs/events
        ga('send', 'event', category, 'click', label, {
            nonInteraction: true
        });
    } else if (window._gaq && _gaq._getAsyncTracker) {
        //classic event tracking
        //https://developers.google.com/analytics/devguides/collection/gajs/eventTrackerGuide
        _gaq.push(['_trackEvent', category, 'click', label, 1, true]);
    } else {
        console.info('Google analytics not found in this page')
    }
}
