<?php
/**
 * @file
 * global_content_type_small_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function global_content_type_small_event_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_contact|node|small_event|form';
  $field_group->group_name = 'group_event_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'small_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Contact',
    'weight' => '8',
    'children' => array(
      0 => 'field_event_contact_email',
      1 => 'field_event_contact_name',
      2 => 'field_event_contact_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-contact field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_event_contact|node|small_event|form'] = $field_group;

  return $export;
}
