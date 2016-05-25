<?php
/**
 * @file
 * cambio_imagen_pequena.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cambio_imagen_pequena_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cambio_imagen_pequena_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cambio_imagen_pequena_node_info() {
  $items = array(
    'evento' => array(
      'name' => t('Evento'),
      'base' => 'node_content',
      'description' => t('Este tipo de contenido permite agregar eventos'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
