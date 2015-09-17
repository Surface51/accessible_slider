<?php 
/**
 * @file
 * Provide views data and handlers.
 */

/**
 * Implements hook_views_plugins().
 */
function accessible_slider_views_plugins() {
  $module_path = drupal_get_path('module', 'accessible_slider') . '/views';

  return array(
    'style' => array(
      'accessible_slider_plugin_style' => array(
        'title' => t('Accessible Slider'),
        'help' => t('Accessible Slider style'),
        'path' => $module_path . '/plugins',
        'handler' => 'ViewsBootstrapCarouselPluginStyle',
        'parent' => 'default',
        'theme' => 'accessible_slider_plugin_style',
        'theme path' => $module_path . '/theme',
        'theme file' => 'theme.inc',
        'uses row plugin' => TRUE,
        'uses grouping' => FALSE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
    'row' => array(
      'accessible_slider_plugin_rows' => array(
        'title' => t('Accessible Slider'),
        'help' => t('Choose the fields to display in Accessible Slider.'),
        'path' => $module_path . '/plugins',
        'handler' => 'ViewsBootstrapCarouselPluginRows',
        'theme' => 'accessible_slider_plugin_rows',
        'theme path' => $module_path . '/theme',
        'theme file' => 'theme.inc',
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}
