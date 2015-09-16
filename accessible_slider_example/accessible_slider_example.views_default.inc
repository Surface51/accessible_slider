<?php
/**
 * @file
 * slide.views_default.inc
 */



/**
 * Implements hook_views_default_views().
 */
function accessible_slider_example_views_default_views() {
$view = new view();
	$view->name = 'as_slider_block';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'Example Slider Block';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

	/* Display: Master */
	$handler = $view->new_display('default', 'Master', 'default');
	$handler->display->display_options['title'] = 'as Slider Block';
	$handler->display->display_options['use_more_always'] = FALSE;
	$handler->display->display_options['access']['type'] = 'perm';
	$handler->display->display_options['cache']['type'] = 'none';
	$handler->display->display_options['query']['type'] = 'views_query';
	$handler->display->display_options['exposed_form']['type'] = 'basic';
	$handler->display->display_options['pager']['type'] = 'some';
	$handler->display->display_options['pager']['options']['items_per_page'] = '5';
	$handler->display->display_options['style_plugin'] = 'default';
	$handler->display->display_options['row_plugin'] = 'fields';
	/* Header: Global: Text area */
	$handler->display->display_options['header']['area']['id'] = 'area';
	$handler->display->display_options['header']['area']['table'] = 'views';
	$handler->display->display_options['header']['area']['field'] = 'area';
	$handler->display->display_options['header']['area']['label'] = 'Arrows';
	$handler->display->display_options['header']['area']['content'] = '<ol class="carousel-indicators"></ol>';
	$handler->display->display_options['header']['area']['format'] = 'full_html';
	/* Footer: Global: Text area */
	$handler->display->display_options['footer']['area']['id'] = 'area';
	$handler->display->display_options['footer']['area']['table'] = 'views';
	$handler->display->display_options['footer']['area']['field'] = 'area';
	$handler->display->display_options['footer']['area']['label'] = 'Pager';
	$handler->display->display_options['footer']['area']['content'] = '
<a class="left carousel-control" href="#myCarousel" role="button" data-slide="prev">
    <span class="control-left"></span>
    <span class="sr-only">Previous</span>
  </a>
  <a class="right carousel-control" href="#myCarousel" role="button" data-slide="next">
    <span class="control-right"></span>
    <span class="sr-only">Next</span>
  </a>';
	$handler->display->display_options['footer']['area']['format'] = 'full_html';
	/* Field: Content: Title */
	$handler->display->display_options['fields']['title']['id'] = 'title';
	$handler->display->display_options['fields']['title']['table'] = 'node';
	$handler->display->display_options['fields']['title']['field'] = 'title';
	$handler->display->display_options['fields']['title']['label'] = '';
	$handler->display->display_options['fields']['title']['exclude'] = TRUE;
	$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
	$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
	$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
	/* Field: Content: Slide Title */
	$handler->display->display_options['fields']['as_slide_title']['id'] = 'as_slide_title';
	$handler->display->display_options['fields']['as_slide_title']['table'] = 'field_data_as_slide_title';
	$handler->display->display_options['fields']['as_slide_title']['field'] = 'as_slide_title';
	$handler->display->display_options['fields']['as_slide_title']['label'] = '';
	$handler->display->display_options['fields']['as_slide_title']['exclude'] = TRUE;
	$handler->display->display_options['fields']['as_slide_title']['element_label_colon'] = FALSE;
	/* Field: Content: Slide Link */
	$handler->display->display_options['fields']['as_slide_link']['id'] = 'as_slide_link';
	$handler->display->display_options['fields']['as_slide_link']['table'] = 'field_data_as_slide_link';
	$handler->display->display_options['fields']['as_slide_link']['field'] = 'as_slide_link';
	$handler->display->display_options['fields']['as_slide_link']['label'] = '';
	$handler->display->display_options['fields']['as_slide_link']['exclude'] = TRUE;
	$handler->display->display_options['fields']['as_slide_link']['element_label_colon'] = FALSE;
	/* Field: Content: Slide Caption */
	$handler->display->display_options['fields']['as_slide_caption']['id'] = 'as_slide_caption';
	$handler->display->display_options['fields']['as_slide_caption']['table'] = 'field_data_as_slide_caption';
	$handler->display->display_options['fields']['as_slide_caption']['field'] = 'as_slide_caption';
	$handler->display->display_options['fields']['as_slide_caption']['label'] = '';
	$handler->display->display_options['fields']['as_slide_caption']['exclude'] = TRUE;
	$handler->display->display_options['fields']['as_slide_caption']['element_label_colon'] = FALSE;
	/* Field: Content: Background Image */
	$handler->display->display_options['fields']['as_slide_image']['id'] = 'as_slide_image';
	$handler->display->display_options['fields']['as_slide_image']['table'] = 'field_data_as_slide_image';
	$handler->display->display_options['fields']['as_slide_image']['field'] = 'as_slide_image';
	$handler->display->display_options['fields']['as_slide_image']['label'] = '';
	$handler->display->display_options['fields']['as_slide_image']['exclude'] = TRUE;
	$handler->display->display_options['fields']['as_slide_image']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['as_slide_image']['click_sort_column'] = 'fid';
	$handler->display->display_options['fields']['as_slide_image']['settings'] = array(
	  'image_style' => 'as_slider_style',
	  'image_link' => '',
	);
	/* Field: Global: Custom text */
	$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
	$handler->display->display_options['fields']['nothing']['table'] = 'views';
	$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
	$handler->display->display_options['fields']['nothing']['label'] = '';
	$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="item active">
        <div data-caption="#caption1">
                [as_slide_image]
        </div>
        <div class="carousel-caption">
           <div class="caption-header">
                [as_slide_title]
           </div>
           <div class="hidden-xs hidden-sm">
                <p>[as_slide_caption]</p>
           </div>
           <h2><a href="[as_slide_link]">Page Link</a></h2>
	</div>
</div>';
	$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
	/* Sort criterion: Content: Post date */
	$handler->display->display_options['sorts']['created']['id'] = 'created';
	$handler->display->display_options['sorts']['created']['table'] = 'node';
	$handler->display->display_options['sorts']['created']['field'] = 'created';
	$handler->display->display_options['sorts']['created']['order'] = 'DESC';
	/* Filter criterion: Content: Published */
	$handler->display->display_options['filters']['status']['id'] = 'status';
	$handler->display->display_options['filters']['status']['table'] = 'node';
	$handler->display->display_options['filters']['status']['field'] = 'status';
	$handler->display->display_options['filters']['status']['value'] = 1;
	$handler->display->display_options['filters']['status']['group'] = 1;
	$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
	/* Filter criterion: Content: Type */
	$handler->display->display_options['filters']['type']['id'] = 'type';
	$handler->display->display_options['filters']['type']['table'] = 'node';
	$handler->display->display_options['filters']['type']['field'] = 'type';
	$handler->display->display_options['filters']['type']['value'] = array(
	  'as_slide' => 'as_slide',
	);

	/* Display: Block */
	$handler = $view->new_display('block', 'Block', 'block');
  $export['as_slider_block'] = $view;

  return $export;
}
