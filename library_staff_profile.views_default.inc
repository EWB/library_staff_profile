<?php
/**
 * @file
 * library_staff_profile.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function library_staff_profile_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'staff_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Staff Directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_staff_profile_email']['id'] = 'field_staff_profile_email';
  $handler->display->display_options['fields']['field_staff_profile_email']['table'] = 'field_data_field_staff_profile_email';
  $handler->display->display_options['fields']['field_staff_profile_email']['field'] = 'field_staff_profile_email';
  $handler->display->display_options['fields']['field_staff_profile_email']['label'] = '';
  $handler->display->display_options['fields']['field_staff_profile_email']['element_label_colon'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_staff_profile_name']['id'] = 'field_staff_profile_name';
  $handler->display->display_options['fields']['field_staff_profile_name']['table'] = 'field_data_field_staff_profile_name';
  $handler->display->display_options['fields']['field_staff_profile_name']['field'] = 'field_staff_profile_name';
  $handler->display->display_options['fields']['field_staff_profile_name']['label'] = '';
  $handler->display->display_options['fields']['field_staff_profile_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_staff_profile_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_profile_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_staff_profile_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_staff_profile_phone']['id'] = 'field_staff_profile_phone';
  $handler->display->display_options['fields']['field_staff_profile_phone']['table'] = 'field_data_field_staff_profile_phone';
  $handler->display->display_options['fields']['field_staff_profile_phone']['field'] = 'field_staff_profile_phone';
  $handler->display->display_options['fields']['field_staff_profile_phone']['label'] = '';
  $handler->display->display_options['fields']['field_staff_profile_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_profile_phone']['delta_offset'] = '0';
  /* Sort criterion: Content: Library Department (field_staff_profile_department) */
  $handler->display->display_options['sorts']['field_staff_profile_department_tid']['id'] = 'field_staff_profile_department_tid';
  $handler->display->display_options['sorts']['field_staff_profile_department_tid']['table'] = 'field_data_field_staff_profile_department';
  $handler->display->display_options['sorts']['field_staff_profile_department_tid']['field'] = 'field_staff_profile_department_tid';
  $handler->display->display_options['sorts']['field_staff_profile_department_tid']['order'] = 'DESC';
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
    'library_staff_profile' => 'library_staff_profile',
  );

  /* Display: Alphabetical Listing */
  $handler = $view->new_display('page', 'Alphabetical Listing', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Staff Directory';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_staff_profile_name' => 'field_staff_profile_name',
    'field_position' => 'field_position',
    'field_staff_profile_email' => 'field_staff_profile_email',
    'field_staff_profile_phone' => 'field_staff_profile_phone',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_staff_profile_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_position' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_staff_profile_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_staff_profile_phone' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'expand' => 'field_staff_profile_name',
    'hide' => array(
      'field_staff_profile_name' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'field_position' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'field_staff_profile_email' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'field_staff_profile_phone' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_staff_profile_name']['id'] = 'field_staff_profile_name';
  $handler->display->display_options['fields']['field_staff_profile_name']['table'] = 'field_data_field_staff_profile_name';
  $handler->display->display_options['fields']['field_staff_profile_name']['field'] = 'field_staff_profile_name';
  $handler->display->display_options['fields']['field_staff_profile_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_profile_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_staff_profile_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_staff_profile_email']['id'] = 'field_staff_profile_email';
  $handler->display->display_options['fields']['field_staff_profile_email']['table'] = 'field_data_field_staff_profile_email';
  $handler->display->display_options['fields']['field_staff_profile_email']['field'] = 'field_staff_profile_email';
  $handler->display->display_options['fields']['field_staff_profile_email']['label'] = 'Email';
  $handler->display->display_options['fields']['field_staff_profile_email']['element_label_colon'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_staff_profile_phone']['id'] = 'field_staff_profile_phone';
  $handler->display->display_options['fields']['field_staff_profile_phone']['table'] = 'field_data_field_staff_profile_phone';
  $handler->display->display_options['fields']['field_staff_profile_phone']['field'] = 'field_staff_profile_phone';
  $handler->display->display_options['fields']['field_staff_profile_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_profile_phone']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Name (field_staff_profile_name:family) */
  $handler->display->display_options['sorts']['field_staff_profile_name_family']['id'] = 'field_staff_profile_name_family';
  $handler->display->display_options['sorts']['field_staff_profile_name_family']['table'] = 'field_data_field_staff_profile_name';
  $handler->display->display_options['sorts']['field_staff_profile_name_family']['field'] = 'field_staff_profile_name_family';
  $handler->display->display_options['path'] = 'staff-directory/listing';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Staff Directory';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Staff Directory';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: By Department */
  $handler = $view->new_display('page', 'By Department', 'page_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_staff_profile_department',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Library Department */
  $handler->display->display_options['fields']['field_staff_profile_department']['id'] = 'field_staff_profile_department';
  $handler->display->display_options['fields']['field_staff_profile_department']['table'] = 'field_data_field_staff_profile_department';
  $handler->display->display_options['fields']['field_staff_profile_department']['field'] = 'field_staff_profile_department';
  $handler->display->display_options['fields']['field_staff_profile_department']['label'] = '';
  $handler->display->display_options['fields']['field_staff_profile_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_staff_profile_department']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_staff_profile_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_profile_department']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['field_staff_profile_department']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_staff_profile_email']['id'] = 'field_staff_profile_email';
  $handler->display->display_options['fields']['field_staff_profile_email']['table'] = 'field_data_field_staff_profile_email';
  $handler->display->display_options['fields']['field_staff_profile_email']['field'] = 'field_staff_profile_email';
  $handler->display->display_options['fields']['field_staff_profile_email']['label'] = '';
  $handler->display->display_options['fields']['field_staff_profile_email']['element_label_colon'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_staff_profile_name']['id'] = 'field_staff_profile_name';
  $handler->display->display_options['fields']['field_staff_profile_name']['table'] = 'field_data_field_staff_profile_name';
  $handler->display->display_options['fields']['field_staff_profile_name']['field'] = 'field_staff_profile_name';
  $handler->display->display_options['fields']['field_staff_profile_name']['label'] = '';
  $handler->display->display_options['fields']['field_staff_profile_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_staff_profile_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_profile_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_staff_profile_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_staff_profile_phone']['id'] = 'field_staff_profile_phone';
  $handler->display->display_options['fields']['field_staff_profile_phone']['table'] = 'field_data_field_staff_profile_phone';
  $handler->display->display_options['fields']['field_staff_profile_phone']['field'] = 'field_staff_profile_phone';
  $handler->display->display_options['fields']['field_staff_profile_phone']['label'] = '';
  $handler->display->display_options['fields']['field_staff_profile_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_profile_phone']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Library Department (field_staff_profile_department) */
  $handler->display->display_options['sorts']['field_staff_profile_department_tid']['id'] = 'field_staff_profile_department_tid';
  $handler->display->display_options['sorts']['field_staff_profile_department_tid']['table'] = 'field_data_field_staff_profile_department';
  $handler->display->display_options['sorts']['field_staff_profile_department_tid']['field'] = 'field_staff_profile_department_tid';
  /* Sort criterion: Content: Name (field_staff_profile_name:family) */
  $handler->display->display_options['sorts']['field_staff_profile_name_family']['id'] = 'field_staff_profile_name_family';
  $handler->display->display_options['sorts']['field_staff_profile_name_family']['table'] = 'field_data_field_staff_profile_name';
  $handler->display->display_options['sorts']['field_staff_profile_name_family']['field'] = 'field_staff_profile_name_family';
  $handler->display->display_options['path'] = 'staff-directory/department';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'By Department';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Department';
  $handler->display->display_options['tab_options']['weight'] = '3';

  /* Display: Faculty */
  $handler = $view->new_display('page', 'Faculty', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library Faculty';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Photograph */
  $handler->display->display_options['fields']['field_staff_profile_photograph']['id'] = 'field_staff_profile_photograph';
  $handler->display->display_options['fields']['field_staff_profile_photograph']['table'] = 'field_data_field_staff_profile_photograph';
  $handler->display->display_options['fields']['field_staff_profile_photograph']['field'] = 'field_staff_profile_photograph';
  $handler->display->display_options['fields']['field_staff_profile_photograph']['label'] = '';
  $handler->display->display_options['fields']['field_staff_profile_photograph']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_profile_photograph']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_staff_profile_photograph']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_staff_profile_photograph']['settings'] = array(
    'colorbox_node_style' => 'medium',
    'colorbox_image_style' => 'large',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_position']['element_class'] = 'position-title';
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_staff_profile_email']['id'] = 'field_staff_profile_email';
  $handler->display->display_options['fields']['field_staff_profile_email']['table'] = 'field_data_field_staff_profile_email';
  $handler->display->display_options['fields']['field_staff_profile_email']['field'] = 'field_staff_profile_email';
  $handler->display->display_options['fields']['field_staff_profile_email']['label'] = '';
  $handler->display->display_options['fields']['field_staff_profile_email']['element_label_colon'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_staff_profile_name']['id'] = 'field_staff_profile_name';
  $handler->display->display_options['fields']['field_staff_profile_name']['table'] = 'field_data_field_staff_profile_name';
  $handler->display->display_options['fields']['field_staff_profile_name']['field'] = 'field_staff_profile_name';
  $handler->display->display_options['fields']['field_staff_profile_name']['label'] = '';
  $handler->display->display_options['fields']['field_staff_profile_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_staff_profile_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_profile_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_staff_profile_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_staff_profile_phone']['id'] = 'field_staff_profile_phone';
  $handler->display->display_options['fields']['field_staff_profile_phone']['table'] = 'field_data_field_staff_profile_phone';
  $handler->display->display_options['fields']['field_staff_profile_phone']['field'] = 'field_staff_profile_phone';
  $handler->display->display_options['fields']['field_staff_profile_phone']['label'] = '';
  $handler->display->display_options['fields']['field_staff_profile_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_profile_phone']['delta_offset'] = '0';
  /* Field: Content: Biographical Information */
  $handler->display->display_options['fields']['field_staff_profile_bio']['id'] = 'field_staff_profile_bio';
  $handler->display->display_options['fields']['field_staff_profile_bio']['table'] = 'field_data_field_staff_profile_bio';
  $handler->display->display_options['fields']['field_staff_profile_bio']['field'] = 'field_staff_profile_bio';
  $handler->display->display_options['fields']['field_staff_profile_bio']['label'] = '';
  $handler->display->display_options['fields']['field_staff_profile_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Name (field_staff_profile_name:family) */
  $handler->display->display_options['sorts']['field_staff_profile_name_family']['id'] = 'field_staff_profile_name_family';
  $handler->display->display_options['sorts']['field_staff_profile_name_family']['table'] = 'field_data_field_staff_profile_name';
  $handler->display->display_options['sorts']['field_staff_profile_name_family']['field'] = 'field_staff_profile_name_family';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'library_staff_profile' => 'library_staff_profile',
  );
  /* Filter criterion: Content: Position Type (field_staff_profile_position) */
  $handler->display->display_options['filters']['field_staff_profile_position_value']['id'] = 'field_staff_profile_position_value';
  $handler->display->display_options['filters']['field_staff_profile_position_value']['table'] = 'field_data_field_staff_profile_position';
  $handler->display->display_options['filters']['field_staff_profile_position_value']['field'] = 'field_staff_profile_position_value';
  $handler->display->display_options['filters']['field_staff_profile_position_value']['value'] = array(
    'Librarian' => 'Librarian',
  );
  $handler->display->display_options['path'] = 'staff-directory/faculty';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Library Faculty';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Staff Directory';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['staff_directory'] = $view;

  return $export;
}
