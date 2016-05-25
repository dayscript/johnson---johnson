<?php
/**
 * @file
 * cambio_imagen_pequena.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cambio_imagen_pequena_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datos|node|evento|form';
  $field_group->group_name = 'group_datos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'evento';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos Generales',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_image',
      2 => 'field_fecha',
      3 => 'field_segmento',
      4 => 'field_imagen_min',
      5 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-datos field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_datos|node|evento|form'] = $field_group;

  return $export;
}
