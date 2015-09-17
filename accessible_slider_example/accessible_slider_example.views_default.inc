<?php
/**
 * @file
 * slide.views_default.inc
 */



/**
 * Implements hook_views_default_views().
 */
function accessible_slider_example_views_default_views() {
	$export = array();

  	$view = new view();
	$view->name = 'accessible_slider_example';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'Accessible Slider Example';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

	/* Display: Master */
	$handler = $view->new_display('default', 'Master', 'default');
	$handler->display->display_options['title'] = 'Accessible Slider Example';
	$handler->display->display_options['use_more_always'] = FALSE;
	$handler->display->display_options['access']['type'] = 'perm';
	$handler->display->display_options['cache']['type'] = 'none';
	$handler->display->display_options['query']['type'] = 'views_query';
	$handler->display->display_options['exposed_form']['type'] = 'basic';
	$handler->display->display_options['pager']['type'] = 'some';
	$handler->display->display_options['pager']['options']['items_per_page'] = '99';
	$handler->display->display_options['style_plugin'] = 'accessible_slider_plugin_style';
	$handler->display->display_options['row_plugin'] = 'accessible_slider_plugin_rows';
	$handler->display->display_options['row_options']['image'] = 'as_slide_image';
	$handler->display->display_options['row_options']['title'] = 'as_slide_title';
	$handler->display->display_options['row_options']['description'] = 'as_slide_caption';
	$handler->display->display_options['row_options']['link'] = 'as_slide_link_1';
	$handler->display->display_options['row_options']['link_text'] = 'as_slide_link';
	/* Field: Content: Title */
	$handler->display->display_options['fields']['title']['id'] = 'title';
	$handler->display->display_options['fields']['title']['table'] = 'node';
	$handler->display->display_options['fields']['title']['field'] = 'title';
	$handler->display->display_options['fields']['title']['label'] = '';
	$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
	$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
	/* Field: Content: Background Image */
	$handler->display->display_options['fields']['as_slide_image']['id'] = 'as_slide_image';
	$handler->display->display_options['fields']['as_slide_image']['table'] = 'field_data_as_slide_image';
	$handler->display->display_options['fields']['as_slide_image']['field'] = 'as_slide_image';
	$handler->display->display_options['fields']['as_slide_image']['label'] = '';
	$handler->display->display_options['fields']['as_slide_image']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['as_slide_image']['click_sort_column'] = 'fid';
	$handler->display->display_options['fields']['as_slide_image']['settings'] = array(
	  'image_style' => 'as_slider_style',
	  'image_link' => '',
	);
	/* Field: Content: Slide Caption */
	$handler->display->display_options['fields']['as_slide_caption']['id'] = 'as_slide_caption';
	$handler->display->display_options['fields']['as_slide_caption']['table'] = 'field_data_as_slide_caption';
	$handler->display->display_options['fields']['as_slide_caption']['field'] = 'as_slide_caption';
	$handler->display->display_options['fields']['as_slide_caption']['label'] = '';
	$handler->display->display_options['fields']['as_slide_caption']['element_label_colon'] = FALSE;
	/* Field: Content: Slide Title */
	$handler->display->display_options['fields']['as_slide_title']['id'] = 'as_slide_title';
	$handler->display->display_options['fields']['as_slide_title']['table'] = 'field_data_as_slide_title';
	$handler->display->display_options['fields']['as_slide_title']['field'] = 'as_slide_title';
	$handler->display->display_options['fields']['as_slide_title']['label'] = '';
	$handler->display->display_options['fields']['as_slide_title']['element_label_colon'] = FALSE;
	/* Field: Content: Slide Link */
	$handler->display->display_options['fields']['as_slide_link']['id'] = 'as_slide_link';
	$handler->display->display_options['fields']['as_slide_link']['table'] = 'field_data_as_slide_link';
	$handler->display->display_options['fields']['as_slide_link']['field'] = 'as_slide_link';
	$handler->display->display_options['fields']['as_slide_link']['label'] = 'Link Title';
	$handler->display->display_options['fields']['as_slide_link']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['as_slide_link']['click_sort_column'] = 'url';
	$handler->display->display_options['fields']['as_slide_link']['type'] = 'link_title_plain';
	/* Field: Content: Slide Link */
	$handler->display->display_options['fields']['as_slide_link_1']['id'] = 'as_slide_link_1';
	$handler->display->display_options['fields']['as_slide_link_1']['table'] = 'field_data_as_slide_link';
	$handler->display->display_options['fields']['as_slide_link_1']['field'] = 'as_slide_link';
	$handler->display->display_options['fields']['as_slide_link_1']['label'] = 'Link URL';
	$handler->display->display_options['fields']['as_slide_link_1']['element_label_colon'] = FALSE;
	$handler->display->display_options['fields']['as_slide_link_1']['click_sort_column'] = 'url';
	$handler->display->display_options['fields']['as_slide_link_1']['type'] = 'link_absolute';
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
	$export['accessible_slider_example'] = $view;

  return $export;
}
