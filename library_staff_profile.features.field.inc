<?php
/**
 * @file
 * library_staff_profile.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function library_staff_profile_field_default_fields() {
  $fields = array();

  // Exported field: 'node-library_staff_profile-field_staff_profile_bio'.
  $fields['node-library_staff_profile-field_staff_profile_bio'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_staff_profile_bio',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'library_staff_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 3,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_staff_profile_bio',
      'label' => 'Biographical Information',
      'required' => 0,
      'settings' => array(
        'display_summary' => 1,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '10',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-library_staff_profile-field_staff_profile_department'.
  $fields['node-library_staff_profile-field_staff_profile_department'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_staff_profile_department',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'library_deparments',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'library_staff_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 8,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_staff_profile_department',
      'label' => 'Library Department',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-library_staff_profile-field_staff_profile_email'.
  $fields['node-library_staff_profile-field_staff_profile_email'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_staff_profile_email',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'email',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'email',
    ),
    'field_instance' => array(
      'bundle' => 'library_staff_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'email',
          'settings' => array(),
          'type' => 'email_default',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_staff_profile_email',
      'label' => 'E-mail',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'email',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'email_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-library_staff_profile-field_staff_profile_location'.
  $fields['node-library_staff_profile-field_staff_profile_location'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_staff_profile_location',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'library_staff_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'example:  ODY 116',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 6,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_staff_profile_location',
      'label' => 'Location',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-library_staff_profile-field_staff_profile_name'.
  $fields['node-library_staff_profile-field_staff_profile_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_staff_profile_name',
      'foreign keys' => array(),
      'indexes' => array(
        'family' => array(
          0 => 'family',
        ),
        'given' => array(
          0 => 'given',
        ),
      ),
      'locked' => '0',
      'module' => 'name',
      'settings' => array(
        'autocomplete_separator' => array(
          'credentials' => ', ',
          'family' => ' -',
          'generational' => ' ',
          'given' => ' -',
          'middle' => ' -',
          'title' => ' ',
        ),
        'autocomplete_source' => array(
          'credentials' => array(),
          'family' => array(),
          'generational' => array(
            'generational' => 0,
          ),
          'given' => array(),
          'middle' => array(),
          'title' => array(
            'title' => 'title',
          ),
        ),
        'components' => array(
          'credentials' => 0,
          'family' => 'family',
          'generational' => 'generational',
          'given' => 'given',
          'middle' => 0,
          'title' => 'title',
        ),
        'generational_options' => '-- --
Jr.
Sr.
I
II
III
IV
V
VI
VII
VIII
IX
X',
        'labels' => array(
          'credentials' => 'Credentials',
          'family' => 'Last Name',
          'generational' => 'Generational',
          'given' => 'First Name',
          'middle' => 'Middle name(s)',
          'title' => 'Title',
        ),
        'max_length' => array(
          'credentials' => '255',
          'family' => '63',
          'generational' => '15',
          'given' => '63',
          'middle' => '127',
          'title' => '31',
        ),
        'minimum_components' => array(
          'credentials' => 0,
          'family' => 'family',
          'generational' => 0,
          'given' => 'given',
          'middle' => 0,
          'title' => 0,
        ),
        'sort_options' => array(
          'generational' => 0,
          'title' => 'title',
        ),
        'title_options' => '-- --
Mr.
Mrs.
Miss
Ms.
Dr.
Prof.',
      ),
      'translatable' => '0',
      'type' => 'name',
    ),
    'field_instance' => array(
      'bundle' => 'library_staff_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'name',
          'settings' => array(
            'format' => 'default',
            'markup' => 0,
            'multiple' => 'default',
            'multiple_and' => 'text',
            'multiple_delimiter' => ', ',
            'multiple_delimiter_precedes_last' => 'never',
            'multiple_el_al_first' => 1,
            'multiple_el_al_min' => 3,
            'output' => 'default',
          ),
          'type' => 'name_formatter',
          'weight' => 2,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_staff_profile_name',
      'label' => 'Name',
      'required' => 0,
      'settings' => array(
        'component_css' => '',
        'component_layout' => 'default',
        'credentials_inline' => 0,
        'field_type' => array(
          'credentials' => 'text',
          'family' => 'text',
          'generational' => 'select',
          'given' => 'text',
          'middle' => 'text',
          'title' => 'select',
        ),
        'generational_field' => 'select',
        'inline_css' => array(
          'credentials' => '',
          'family' => '',
          'generational' => '',
          'given' => '',
          'middle' => '',
          'title' => '',
        ),
        'override_format' => 'default',
        'size' => array(
          'credentials' => '35',
          'family' => '20',
          'generational' => '5',
          'given' => '20',
          'middle' => '20',
          'title' => '6',
        ),
        'title_display' => array(
          'credentials' => 'description',
          'family' => 'description',
          'generational' => 'description',
          'given' => 'description',
          'middle' => 'description',
          'title' => 'description',
        ),
        'title_field' => 'select',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'name',
        'settings' => array(),
        'type' => 'name_widget',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-library_staff_profile-field_staff_profile_phone'.
  $fields['node-library_staff_profile-field_staff_profile_phone'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_staff_profile_phone',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'phone',
      'settings' => array(
        'country' => 'ca',
      ),
      'translatable' => '0',
      'type' => 'phone',
    ),
    'field_instance' => array(
      'bundle' => 'library_staff_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'phone',
          'settings' => array(),
          'type' => 'phone',
          'weight' => 4,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_staff_profile_phone',
      'label' => 'Phone',
      'required' => 0,
      'settings' => array(
        'ca_phone_parentheses' => 1,
        'ca_phone_separator' => '-',
        'phone_country_code' => 0,
        'phone_default_country_code' => '1',
        'phone_int_max_length' => 15,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'phone',
        'settings' => array(),
        'type' => 'phone_textfield',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-library_staff_profile-field_staff_profile_photograph'.
  $fields['node-library_staff_profile-field_staff_profile_photograph'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_staff_profile_photograph',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'library_staff_profile',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 5,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_staff_profile_photograph',
      'label' => 'Photograph',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-library_staff_profile-field_staff_profile_position'.
  $fields['node-library_staff_profile-field_staff_profile_position'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_staff_profile_position',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Librarian' => 'Librarian',
          'Library Assistant' => 'Library Assistant',
          'Student Worker' => 'Student Worker',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'library_staff_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 7,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_staff_profile_position',
      'label' => 'Position Type',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '7',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Biographical Information');
  t('E-mail');
  t('Library Department');
  t('Location');
  t('Name');
  t('Phone');
  t('Photograph');
  t('Position Type');
  t('example:  ODY 116');

  return $fields;
}
