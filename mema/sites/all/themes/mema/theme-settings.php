<?php
/**
 * @file
 * settings.inc
 */

/**
 * Contains the form for the theme settings.
 *
 * @param array $form
 *   The form array, passed by reference.
 * @param array $form_state
 *   The form state array, passed by reference.
 */
function mema_form_system_theme_settings_alter(&$form, $form_state) {

  // Navbar.
  $form['custom_class'] = array(
    '#type' => 'vertical_tabs',
    '#attached' => array(
      'js'  => array(drupal_get_path('theme', 'bootstrap') . '/js/bootstrap.admin.js'),
    ),
    '#prefix' => '<h2><small>' . t('Choose Class settings') . '</small></h2>',
    '#weight' => -10,
  );
  $form['class'] = array(
    '#type' => 'fieldset',
    '#title' => t('Custom Class'),
    '#group' => 'custom_class',
  );
  $form['class']['theme_class'] = array(
  '#type' => 'fieldset',
    '#title' => t('Choose title Class'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['class']['theme_class']['choose_class'] = array(
    '#type' => 'select',
    '#title' => t('Select Country Class'),
    '#description' => t('Select your Class.'),
    '#default_value' => theme_get_setting('choose_class'),
    '#options' => array(
      'mema' => t('Mema'),
      'aasa' => t('Aasa'),
      'hdma' => t('Hdma'),
      'mera' => t('Mera'),
      'mfsg' => t('Mfsg'),
      'oesa' => t('Oesa'),
    ),
  );
}