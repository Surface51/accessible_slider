(function ($) {
  Drupal.behaviors.viewsBootstrapCarousel = {
    attach: function(context, settings) {
		if($(".accessible-slider-plugin-style").length > 0) {
		  var path = Drupal.settings.accessibleSlider.basePath;

		  $.getScript( path + "/js/bootstrap-accessibility.js" )
		     .done(function( script, textStatus ) {
		     })
		     .fail(function( jqxhr, settings, exception ) {
		     });

		 }
    }
  };
})(jQuery);
