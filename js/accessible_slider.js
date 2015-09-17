$ = jQuery;

// When the page first loads.
$(document).ready(function() {

});

// When everything on the page has loaded.
$(window).bind("load", function() {
	$.getScript( "http://dev.testbed.com/sites/all/modules/custom/accessible_slider/js/bootstrap-accessibility.js" )
	  .done(function( script, textStatus ) {
	    console.log( textStatus );
	  })
	  .fail(function( jqxhr, settings, exception ) {
	    $( "div.log" ).text( "Triggered ajaxError handler." );
	});
});

// When the page is scrolled
$(window).scroll(function() {

});

// When the page is scrolled
$(window).resize(function() {

});