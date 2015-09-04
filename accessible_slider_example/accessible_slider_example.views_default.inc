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
	$view->human_name = 'Accessible Slider Block';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

	/* Display: Master */
	$handler = $view->new_display('default', 'Master', 'default');
	$handler->display->display_options['title'] = 'Accessible Slider Block';
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
	$handler->display->display_options['header']['area']['content'] = '<div class="slider-arrows">
	   <div class="arrow-left"><a href="#"><span>Left</span></a></div>
	   <div class="arrow-right"><a href="#"><span>Right</span></a></div>
	</div>';
	$handler->display->display_options['header']['area']['format'] = 'full_html';
	/* Footer: Global: Text area */
	$handler->display->display_options['footer']['area']['id'] = 'area';
	$handler->display->display_options['footer']['area']['table'] = 'views';
	$handler->display->display_options['footer']['area']['field'] = 'area';
	$handler->display->display_options['footer']['area']['label'] = 'Pager';
	$handler->display->display_options['footer']['area']['content'] = '<div class="slider-controls">
	<ul id="pauser">
		<li><a href="#"" class="play"><span>Pause</span></a></li>
	</ul>
	<ul id="pager">
		<li><a href="#"><span>Slide</span></a></li>
    </ul>
</div>';
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
	/* Field: Content: Slide Caption */
	$handler->display->display_options['fields']['s51_slide_caption']['id'] = 'as_slide_caption';
	$handler->display->display_options['fields']['s51_slide_caption']['table'] = 'field_data_as_slide_caption';
	$handler->display->display_options['fields']['s51_slide_caption']['field'] = 'as_slide_caption';
	$handler->display->display_options['fields']['s51_slide_caption']['label'] = '';
	$handler->display->display_options['fields']['s51_slide_caption']['exclude'] = TRUE;
	$handler->display->display_options['fields']['s51_slide_caption']['element_label_colon'] = FALSE;
	/* Field: Content: Background Image */
	$handler->display->display_options['fields']['s51_slide_image']['id'] = 'as_slide_image';
	$handler->display->display_options['fields']['s51_slide_image']['table'] = 'field_data_as_slide_image';
	$handler->display->display_options['fields']['s51_slide_image']['field'] = 'as_slide_image';
	$handler->display->display_options['fields']['s51_slide_image']['label'] = '';
	$handler->display->display_options['fields']['s51_slide_image']['exclude'] = TRUE;
	$handler->display->display_options['fields']['s51_slide_image']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['s51_slide_image']['click_sort_column'] = 'fid';
	$handler->display->display_options['fields']['s51_slide_image']['settings'] = array(
	  'image_style' => 's51_slider_style',
	  'image_link' => '',
	);
	/* Field: Global: Custom text */
	$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
	$handler->display->display_options['fields']['nothing']['table'] = 'views';
	$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
	$handler->display->display_options['fields']['nothing']['label'] = '';
	$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide">
	<div class="slide-content">
	<div class="slide-image">[s51_slide_image]</div>
	<div class="slide-text">[s51_slide_caption]</div>
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
