<?php
/**
 * @file
 * library_staff_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_staff_profile_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function library_staff_profile_node_info() {
  $items = array(
    'library_staff_profile' => array(
      'name' => t('Staff Profile'),
      'base' => 'node_content',
      'description' => t('Profile for library staff member'),
      'has_title' => '1',
      'title_label' => t('Position Title'),
      'help' => '',
    ),
  );
  return $items;
}
