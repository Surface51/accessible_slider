(function ($) {
    Drupal.behaviors.viewsBootstrapCarousel = {
      attach: function(context, settings) {
       if($(".accessible-slider-plugin-style").length > 0) {
          $.getScript( "/sites/all/modules/custom/accessible_slider/js/bootstrap-accessibility.js" )
      	  .done(function( script, textStatus ) {
      	    console.log( textStatus );
      	  })
      	  .fail(function( jqxhr, settings, exception ) {
      	    $( "div.log" ).text( "Triggered ajaxError handler." );
      	});
        $(function () {
          $.each(settings.viewsBootstrap.carousel, function(id, carousel) {
            try {
              $('#views-bootstrap-carousel-' + carousel.id, context).carousel(carousel.attributes);
            }
            catch(err) {
              console.log(err);
            }
          });
        });
      }
    }
  };
})(jQuery);

