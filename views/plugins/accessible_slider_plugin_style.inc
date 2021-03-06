<?php
/**
 * @file
 * Definition of views_bootstrap_plugin_style.
 */

/**
 * Class to define a style plugin handler.
 */
class ViewsBootstrapCarouselPluginStyle extends views_plugin_style {
  /**
   * Definition.
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['interval'] = array('default' => 5000);
    $options['navigation'] = array('default' => TRUE);
    $options['indicators'] = array('default' => TRUE);
    $options['pause'] = array('default' => FALSE);
    $options['transition'] = array('default' => 'carousel-linear');
    return $options;
  }

  /**
   * Form.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['interval'] = array(
      '#type' => 'textfield',
      '#required' => TRUE,
      '#title' => t('Interval'),
      '#description' => t('The amount of time to delay between automatically cycling an item. If false, carousel will not automatically cycle.'),
      '#default_value' => $this->options['interval'],
    );

    $form['navigation'] = array(
      '#type' => 'checkbox',
      '#title' => t('Show navigation'),
      '#default_value' => $this->options['navigation'],
    );

    $form['indicators'] = array(
      '#type' => 'checkbox',
      '#title' => t('Show indicators'),
      '#default_value' => $this->options['indicators'],
    );

    $form['pause'] = array(
      '#type' => 'checkbox',
      '#title' => t('Pause on hover'),
      '#description' => t('Pauses the cycling of the carousel on mouseenter and resumes the cycling of the carousel on mouseleave.'),
      '#default_value' => $this->options['pause'],
    );

    $form['transition_options'] = array(
      '#type' => 'value',
      '#value' => array('carousel-linear' => t('Linear'),
                        'carousel-fade' => t('Fade'),
                        'carousel-no-transition' => t('None')
                        )
    );

    $form['transition'] = array(
      '#title' => t('Slider Transition'),
      '#type' => 'select',
      '#description' => "Select the slider type.",
      '#options' => $form['transition_options']['#value'],
      '#default_value' => $this->options['transition'],
    );

  }
}
