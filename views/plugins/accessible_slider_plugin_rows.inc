<?php
/**
 * @file
 * Definition of views_bootstrap_plugin_rows.
 */

/**
 * Class to define a row plugin handler.
 */
class ViewsBootstrapCarouselPluginRows extends views_plugin_row {
  /**
   * Definition.
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['image'] = array('default' => '');
    $options['title'] = array('default' => '');
    $options['description'] = array('description' => '');
    return $options;
  }

  /**
   * Form.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    // Pre-build all of our option lists for the dials and switches that follow.
    $fields = array('' => t('<None>'));
    foreach ($this->display->handler->get_handlers('field') as $field => $handler) {
      if ($label = $handler->label()) {
        $fields[$field] = $label;
      }
      else {
        $fields[$field] = $handler->ui_name();
      }
    }

   $form ['markup'] = array(
          '#markup' => '<div class="form-item description">' . t('Please add fields in the "Fields" section to make them available as options here.') . '</div>',
        ); 

    $form['image'] = array(
      '#type' => 'select',
      '#required' => TRUE,
      '#title' => t('Image'),
      '#options' => $fields,
      '#default_value' => $this->options['image'],
    );

    $form['title'] = array(
      '#type' => 'select',
      '#title' => t('Title'),
      '#options' => $fields,
      '#default_value' => $this->options['title'],
    );

    $form['description'] = array(
      '#type' => 'select',
      '#title' => t('Description'),
      '#options' => $fields,
      '#default_value' => $this->options['description'],
    );

    $form['link'] = array(
      '#type' => 'select',
      '#title' => t('Link'),
      '#options' => $fields,
      '#default_value' => $this->options['link'],
    );

    $form['link_text'] = array(
      '#type' => 'select',
      '#title' => t('Link Text'),
      '#options' => $fields,
      '#default_value' => $this->options['link_text'],
    );
  }
}
