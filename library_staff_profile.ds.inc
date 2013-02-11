<?php
/**
 * @file
 * library_staff_profile.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function library_staff_profile_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|library_staff_profile|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'library_staff_profile';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|library_staff_profile|search_result'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function library_staff_profile_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|library_staff_profile|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'library_staff_profile';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_position',
        1 => 'field_staff_profile_department',
        2 => 'field_staff_profile_location',
        3 => 'field_staff_profile_bio',
      ),
      'omega_right_column' => array(
        4 => 'field_staff_profile_photograph',
        5 => 'field_staff_profile_email',
        6 => 'field_staff_profile_phone',
      ),
    ),
    'fields' => array(
      'field_position' => 'ds_content',
      'field_staff_profile_department' => 'ds_content',
      'field_staff_profile_location' => 'ds_content',
      'field_staff_profile_bio' => 'ds_content',
      'field_staff_profile_photograph' => 'omega_right_column',
      'field_staff_profile_email' => 'omega_right_column',
      'field_staff_profile_phone' => 'omega_right_column',
    ),
    'limit' => array(
      'field_staff_profile_location' => '2',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|library_staff_profile|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|library_staff_profile|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'library_staff_profile';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_staff_profile_bio',
      ),
      'right' => array(
        2 => 'field_staff_profile_photograph',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_staff_profile_bio' => 'left',
      'field_staff_profile_photograph' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|library_staff_profile|search_result'] = $ds_layout;

  return $export;
}
