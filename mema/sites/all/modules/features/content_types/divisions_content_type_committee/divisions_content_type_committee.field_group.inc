<?php
/**
 * @file
 * divisions_content_type_committee.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function divisions_content_type_committee_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_information|node|committee|form';
  $field_group->group_name = 'group_contact_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'committee';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '5',
    'children' => array(
      0 => 'field_contact_information_email',
      1 => 'field_contact_information_name',
      2 => 'field_contact_information_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact-information field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contact_information|node|committee|form'] = $field_group;

  return $export;
}
