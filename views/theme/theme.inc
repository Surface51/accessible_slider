<?php 

/**
 * Implementation of template preprocess for the view.
 */
function template_preprocess_accessible_slider_plugin_style(&$vars) {
  drupal_add_js(array(
    'viewsBootstrap' => array(
      'carousel' => array(
        $vars['id'] => array(
          'id' => $vars['id'],
          'name' => $vars['view']->name,
          'attributes' => array(
            'interval' => $vars['options']['interval'] ? (int)$vars['options']['interval'] : FALSE,
            'pause' => $vars['options']['pause'] ? 'hover' : FALSE,
          ),
        ),
      ),
    ),
  ), 'setting');

  drupal_add_js(drupal_get_path('module', 'accessible_slider') . '/js/views-bootstrap-carousel.js');

  switch ($vars['options']['transition']) {
    case "carousel-linear":
        $additional_classes = "slide";
        break;
    case "carousel-fade":
        $additional_classes = "slide carousel-fade";
        break;
    case "carousel-no-transition":
        $additional_classes = "";
        break;
  }

  $vars['classes_array'][] = 'carousel '.$additional_classes;

  $vars['navigation'] = (bool)$vars['options']['navigation'];
  $vars['indicators'] = (bool)$vars['options']['indicators'];
}

function template_preprocess_accessible_slider_plugin_rows(&$vars) {
  $view = &$vars['view'];

  foreach ($vars['options'] as $id => $field) {
    if (isset($view->field[$field])) {
      $vars[$id] = $view->style_plugin->get_field($view->row_index, $field);
    }
  }
}

