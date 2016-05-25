<?php
/**
 * @file
 * kimberly_features_block_poll.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kimberly_features_block_poll_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function kimberly_features_block_poll_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function kimberly_features_block_poll_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Artículo'),
      'base' => 'node_content',
      'description' => t('Use <em>artículos</em> para contenido como noticias o comunicados.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
    'questions' => array(
      'name' => t('Preguntas Encuesta'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'user_answers' => array(
      'name' => t('Respuestas del usuario (Encuesta)'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Usuario'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
