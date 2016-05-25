<?php
/**
 * @file
 * kimberly_features_block_poll.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function kimberly_features_block_poll_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_generales|node|article|form';
  $field_group->group_name = 'group_generales';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos Generales',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_tags',
      2 => 'field_image',
      3 => 'field_categoria',
      4 => 'field_subtitulo',
      5 => 'field_documento_adjunto',
      6 => 'field_segmento',
      7 => 'title',
      8 => 'group_video_fields',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-generales field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_generales|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video_fields|node|article|form';
  $field_group->group_name = 'group_video_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_generales';
  $field_group->data = array(
    'label' => 'video',
    'weight' => '6',
    'children' => array(
      0 => 'field_video_article',
      1 => 'field_video_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'video',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-video-fields field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_video_fields|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|article|full';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'video',
    'weight' => '4',
    'children' => array(
      0 => 'field_video_article',
      1 => 'field_video_description',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-video field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_video|node|article|full'] = $field_group;

  return $export;
}
