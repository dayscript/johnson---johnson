<?php
/**
 * @file
 * cambio_imagen_pequena.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cambio_imagen_pequena_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'eventos';
  $view->description = 'Muestra contenidos de Noticias';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Eventos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Eventos';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Todos los eventos';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'escalar_y_recortar_a_392x200',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="arrow"><img src="/sites/all/themes/kimberly/images/backgrounds/arrow.png"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'compacto';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Contenido */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Field: Segmento */
  $handler->display->display_options['fields']['field_segmento']['id'] = 'field_segmento';
  $handler->display->display_options['fields']['field_segmento']['table'] = 'field_data_field_segmento';
  $handler->display->display_options['fields']['field_segmento']['field'] = 'field_segmento';
  $handler->display->display_options['fields']['field_segmento']['label'] = '';
  $handler->display->display_options['fields']['field_segmento']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_segmento']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_segmento']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_segmento']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field: Segmento (field_segmento) */
  $handler->display->display_options['arguments']['field_segmento_tid']['id'] = 'field_segmento_tid';
  $handler->display->display_options['arguments']['field_segmento_tid']['table'] = 'field_data_field_segmento';
  $handler->display->display_options['arguments']['field_segmento_tid']['field'] = 'field_segmento_tid';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_segmento_tid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_argument_options']['code'] = 'global $user;
$user_profile = user_load( $user->uid );
$segmentos = array();
if ( isset( $user_profile->field_segmento ) && isset( $user_profile->field_segmento[ \'und\' ] ) ){
  foreach($user_profile->field_segmento[ \'und\' ] as $seg){
    $segmentos[] = $seg[\'tid\'];
  }
} 
return implode(\'+\',$segmentos);';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_segmento_tid']['break_phrase'] = TRUE;
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
    'evento' => 'evento',
  );

  /* Display: Ultimo Evento */
  $handler = $view->new_display('block', 'Ultimo Evento', 'block');
  $handler->display->display_options['link_url'] = 'noticias';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'escalar_a_341',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="arrow"><img src="/sites/all/themes/kimberly/images/backgrounds/arrow.png"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Fecha */
  $handler->display->display_options['fields']['field_fecha']['id'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha']['table'] = 'field_data_field_fecha';
  $handler->display->display_options['fields']['field_fecha']['field'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha']['label'] = '';
  $handler->display->display_options['fields']['field_fecha']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha']['settings'] = array(
    'format_type' => 'compacto',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Contenido */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Segmento (field_segmento) */
  $handler->display->display_options['arguments']['field_segmento_tid']['id'] = 'field_segmento_tid';
  $handler->display->display_options['arguments']['field_segmento_tid']['table'] = 'field_data_field_segmento';
  $handler->display->display_options['arguments']['field_segmento_tid']['field'] = 'field_segmento_tid';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_segmento_tid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_argument_options']['code'] = 'global $user;
$user_profile = user_load( $user->uid );
$segmentos = array();
if ( isset( $user_profile->field_segmento ) && isset( $user_profile->field_segmento[ \'und\' ] ) ){
  foreach($user_profile->field_segmento[ \'und\' ] as $seg){
    $segmentos[] = $seg[\'tid\'];
  }
} 
return implode(\'+\',$segmentos);';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_segmento_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  $handler->display->display_options['block_description'] = 'Ultimo Evento';

  /* Display: Dos últimos eventos */
  $handler = $view->new_display('block', 'Dos últimos eventos', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'row medium-collapse';
  $handler->display->display_options['display_description'] = 'Muestra un bloque con los dos eventos mas recientes';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Todas las noticias';
  $handler->display->display_options['link_url'] = 'noticias';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'columns small-16 medium-8';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'escalar_y_recortar_a_392x200',
    'image_link' => 'content',
  );
  /* Field: Content: imagen_min */
  $handler->display->display_options['fields']['field_imagen_min']['id'] = 'field_imagen_min';
  $handler->display->display_options['fields']['field_imagen_min']['table'] = 'field_data_field_imagen_min';
  $handler->display->display_options['fields']['field_imagen_min']['field'] = 'field_imagen_min';
  $handler->display->display_options['fields']['field_imagen_min']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen_min']['settings'] = array(
    'image_style' => 'escalar_y_recortar_a_392x200',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="arrow"><img src="/sites/all/themes/kimberly/images/backgrounds/arrow.png"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Fecha */
  $handler->display->display_options['fields']['field_fecha']['id'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha']['table'] = 'field_data_field_fecha';
  $handler->display->display_options['fields']['field_fecha']['field'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha']['label'] = '';
  $handler->display->display_options['fields']['field_fecha']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha']['settings'] = array(
    'format_type' => 'compacto',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Contenido */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['block_description'] = 'Dos últimos eventos';

  /* Display: Adjunto */
  $handler = $view->new_display('attachment', 'Adjunto', 'attachment_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Todos los eventos';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'columns small-16 medium-8';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Fecha */
  $handler->display->display_options['fields']['field_fecha']['id'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha']['table'] = 'field_data_field_fecha';
  $handler->display->display_options['fields']['field_fecha']['field'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha']['label'] = '';
  $handler->display->display_options['fields']['field_fecha']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha']['settings'] = array(
    'format_type' => 'compacto',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Contenido */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="arrow2"><img src="/sites/all/themes/kimberly/images/backgrounds/arrow2.png"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'escalar_y_recortar_a_392x200',
    'image_link' => 'content',
  );
  $handler->display->display_options['displays'] = array(
    'block_1' => 'block_1',
    'default' => 0,
    'block' => 0,
    'block_2' => 0,
    'block_3' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = FALSE;

  /* Display: Eventos 3 y 4 */
  $handler = $view->new_display('block', 'Eventos 3 y 4', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'row medium-collapse';
  $handler->display->display_options['display_description'] = 'Muestra un bloque con los eventos 3 y 4';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Todas las noticias';
  $handler->display->display_options['link_url'] = 'noticias';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '2';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'columns small-16 medium-8';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'escalar_y_recortar_a_392x200',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="arrow"><img src="/sites/all/themes/kimberly/images/backgrounds/arrow.png"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Fecha */
  $handler->display->display_options['fields']['field_fecha']['id'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha']['table'] = 'field_data_field_fecha';
  $handler->display->display_options['fields']['field_fecha']['field'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha']['label'] = '';
  $handler->display->display_options['fields']['field_fecha']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha']['settings'] = array(
    'format_type' => 'compacto',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Contenido */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['block_description'] = 'Eventos 3 y 4';

  /* Display: Home - Eventos */
  $handler = $view->new_display('block', 'Home - Eventos', 'block_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'row medium-collapse';
  $handler->display->display_options['display_description'] = 'Muestra un bloque con los dos eventos mas recientes para el home';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Todos los eventos';
  $handler->display->display_options['link_url'] = 'eventos-y-fechas';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'columns small-16 medium-8';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'escalar_y_recortar_a_392x200',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="arrow"><img src="/sites/all/themes/kimberly/images/backgrounds/arrow.png"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Fecha */
  $handler->display->display_options['fields']['field_fecha']['id'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha']['table'] = 'field_data_field_fecha';
  $handler->display->display_options['fields']['field_fecha']['field'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha']['label'] = '';
  $handler->display->display_options['fields']['field_fecha']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha']['settings'] = array(
    'format_type' => 'compacto',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Contenido */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
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
    'evento' => 'evento',
  );
  $handler->display->display_options['block_description'] = 'Home - Dos últimos eventos';

  /* Display: Home - Adjunto */
  $handler = $view->new_display('attachment', 'Home - Adjunto', 'attachment_2');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Todos los eventos';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'columns small-16 medium-8';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Fecha */
  $handler->display->display_options['fields']['field_fecha']['id'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha']['table'] = 'field_data_field_fecha';
  $handler->display->display_options['fields']['field_fecha']['field'] = 'field_fecha';
  $handler->display->display_options['fields']['field_fecha']['label'] = '';
  $handler->display->display_options['fields']['field_fecha']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha']['settings'] = array(
    'format_type' => 'compacto',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Contenido */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="arrow2"><img src="/sites/all/themes/kimberly/images/backgrounds/arrow2.png"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'escalar_y_recortar_a_392x200',
    'image_link' => 'content',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php global $user;
$user_profile = user_load( $user->uid );
$segmentos = array();
if ( isset( $user_profile->field_segmento ) && isset( $user_profile->field_segmento[ \'und\' ] ) ){
  foreach($user_profile->field_segmento[ \'und\' ] as $seg){
    $segmentos[] = $seg[\'tid\'];
  }
} 
print_r ($segmentos);
$node = node_load($data->nid);
$segmentos2 = array();
if ( isset( $node->field_segmento ) && isset( $node->field_segmento[ \'und\' ] ) ){
  foreach($node->field_segmento[ \'und\' ] as $seg){
    $segmentos2[] = $seg[\'tid\'];
    if(in_array($seg[\'tid\'],$segmentos)){
       echo "OK";
    }
  }
} 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['displays'] = array(
    'block_3' => 'block_3',
    'default' => 0,
    'block' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $translatables['eventos'] = array(
    t('Master'),
    t('Eventos'),
    t('Todos los eventos'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="arrow"><img src="/sites/all/themes/kimberly/images/backgrounds/arrow.png"></div>'),
    t('Todo(s)'),
    t('Ultimo Evento'),
    t('more'),
    t('Dos últimos eventos'),
    t('Muestra un bloque con los dos eventos mas recientes'),
    t('Todas las noticias'),
    t('imagen_min'),
    t('Adjunto'),
    t('<div class="arrow2"><img src="/sites/all/themes/kimberly/images/backgrounds/arrow2.png"></div>'),
    t('Eventos 3 y 4'),
    t('Muestra un bloque con los eventos 3 y 4'),
    t('Home - Eventos'),
    t('Muestra un bloque con los dos eventos mas recientes para el home'),
    t('Home - Dos últimos eventos'),
    t('Home - Adjunto'),
    t('PHP'),
  );
  $export['eventos'] = $view;

  $view = new view();
  $view->name = 'noticias';
  $view->description = 'Muestra contenidos de Noticias';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Noticias';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Noticias';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Todas las noticias';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'escalar_a_341',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="arrow"><img src="/sites/all/themes/kimberly/images/backgrounds/arrow.png"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'compacto';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Contenido */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: Field: Segmento (field_segmento) */
  $handler->display->display_options['arguments']['field_segmento_tid']['id'] = 'field_segmento_tid';
  $handler->display->display_options['arguments']['field_segmento_tid']['table'] = 'field_data_field_segmento';
  $handler->display->display_options['arguments']['field_segmento_tid']['field'] = 'field_segmento_tid';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_segmento_tid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_argument_options']['code'] = 'global $user;
$user_profile = user_load( $user->uid );
$segmentos = array();
if ( isset( $user_profile->field_segmento ) && isset( $user_profile->field_segmento[ \'und\' ] ) ){
  foreach($user_profile->field_segmento[ \'und\' ] as $seg){
    $segmentos[] = $seg[\'tid\'];
  }
} 
return implode(\'+\',$segmentos);';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_segmento_tid']['break_phrase'] = TRUE;
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
    'article' => 'article',
  );
  /* Filter criterion: Content: Categoría (field_categoria) */
  $handler->display->display_options['filters']['field_categoria_tid']['id'] = 'field_categoria_tid';
  $handler->display->display_options['filters']['field_categoria_tid']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['filters']['field_categoria_tid']['field'] = 'field_categoria_tid';
  $handler->display->display_options['filters']['field_categoria_tid']['value'] = array(
    15 => '15',
  );
  $handler->display->display_options['filters']['field_categoria_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_categoria_tid']['vocabulary'] = 'categor_a';

  /* Display: Ultima Noticia */
  $handler = $view->new_display('block', 'Ultima Noticia', 'block');
  $handler->display->display_options['link_url'] = 'noticias';
  $handler->display->display_options['block_description'] = 'Ultima Noticia';

  /* Display: Dos últimas noticias */
  $handler = $view->new_display('block', 'Dos últimas noticias', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'row medium-collapse';
  $handler->display->display_options['display_description'] = 'Muestra un bloque con las dos noticias mas recientes';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Todas las noticias';
  $handler->display->display_options['link_url'] = 'noticias';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'columns small-16 medium-8';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: imagen_min */
  $handler->display->display_options['fields']['field_imagen_min']['id'] = 'field_imagen_min';
  $handler->display->display_options['fields']['field_imagen_min']['table'] = 'field_data_field_imagen_min';
  $handler->display->display_options['fields']['field_imagen_min']['field'] = 'field_imagen_min';
  $handler->display->display_options['fields']['field_imagen_min']['label'] = '';
  $handler->display->display_options['fields']['field_imagen_min']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen_min']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen_min']['settings'] = array(
    'image_style' => 'escalar_y_recortar_a_392x200',
    'image_link' => '',
  );
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'escalar_y_recortar_a_392x200',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="arrow"><img src="/sites/all/themes/kimberly/images/backgrounds/arrow.png"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'compacto';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Contenido */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Segmento (field_segmento) */
  $handler->display->display_options['arguments']['field_segmento_tid']['id'] = 'field_segmento_tid';
  $handler->display->display_options['arguments']['field_segmento_tid']['table'] = 'field_data_field_segmento';
  $handler->display->display_options['arguments']['field_segmento_tid']['field'] = 'field_segmento_tid';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_segmento_tid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_argument_options']['code'] = 'global $user;
$user_profile = user_load( $user->uid );
$segmentos = array();
if ( isset( $user_profile->field_segmento ) && isset( $user_profile->field_segmento[ \'und\' ] ) ){
  foreach($user_profile->field_segmento[ \'und\' ] as $seg){
    $segmentos[] = $seg[\'tid\'];
  }
} 
return implode(\'+\',$segmentos);';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_segmento_tid']['break_phrase'] = TRUE;
  $handler->display->display_options['block_description'] = 'Dos últimas noticias';

  /* Display: Adjunto */
  $handler = $view->new_display('attachment', 'Adjunto', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'columns small-16 medium-8';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'compacto';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Contenido */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="arrow2"><img src="/sites/all/themes/kimberly/images/backgrounds/arrow2.png"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'escalar_y_recortar_a_392x200',
    'image_link' => 'content',
  );
  /* Field: Content: imagen_min */
  $handler->display->display_options['fields']['field_imagen_min']['id'] = 'field_imagen_min';
  $handler->display->display_options['fields']['field_imagen_min']['table'] = 'field_data_field_imagen_min';
  $handler->display->display_options['fields']['field_imagen_min']['field'] = 'field_imagen_min';
  $handler->display->display_options['fields']['field_imagen_min']['label'] = '';
  $handler->display->display_options['fields']['field_imagen_min']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen_min']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen_min']['settings'] = array(
    'image_style' => 'escalar_y_recortar_a_392x200',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Segmento (field_segmento) */
  $handler->display->display_options['arguments']['field_segmento_tid']['id'] = 'field_segmento_tid';
  $handler->display->display_options['arguments']['field_segmento_tid']['table'] = 'field_data_field_segmento';
  $handler->display->display_options['arguments']['field_segmento_tid']['field'] = 'field_segmento_tid';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_segmento_tid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_argument_options']['code'] = 'global $user;
$user_profile = user_load( $user->uid );
$segmentos = array();
if ( isset( $user_profile->field_segmento ) && isset( $user_profile->field_segmento[ \'und\' ] ) ){
  foreach($user_profile->field_segmento[ \'und\' ] as $seg){
    $segmentos[] = $seg[\'tid\'];
  }
} 
return implode(\'+\',$segmentos);';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_segmento_tid']['break_phrase'] = TRUE;
  $handler->display->display_options['displays'] = array(
    'block_1' => 'block_1',
    'default' => 0,
    'block' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'block_5' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Noticias 3 y 4 */
  $handler = $view->new_display('block', 'Noticias 3 y 4', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'row medium-collapse';
  $handler->display->display_options['display_description'] = 'Muestra un bloque con las noticias 3 y 4';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Todas las noticias';
  $handler->display->display_options['link_url'] = 'noticias';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '2';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'columns small-16 medium-8';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'escalar_y_recortar_a_392x200',
    'image_link' => 'content',
  );
  /* Field: Content: imagen_min */
  $handler->display->display_options['fields']['field_imagen_min']['id'] = 'field_imagen_min';
  $handler->display->display_options['fields']['field_imagen_min']['table'] = 'field_data_field_imagen_min';
  $handler->display->display_options['fields']['field_imagen_min']['field'] = 'field_imagen_min';
  $handler->display->display_options['fields']['field_imagen_min']['label'] = '';
  $handler->display->display_options['fields']['field_imagen_min']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen_min']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen_min']['settings'] = array(
    'image_style' => 'escalar_y_recortar_a_392x200',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="arrow"><img src="/sites/all/themes/kimberly/images/backgrounds/arrow.png"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'compacto';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Contenido */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Segmento (field_segmento) */
  $handler->display->display_options['arguments']['field_segmento_tid']['id'] = 'field_segmento_tid';
  $handler->display->display_options['arguments']['field_segmento_tid']['table'] = 'field_data_field_segmento';
  $handler->display->display_options['arguments']['field_segmento_tid']['field'] = 'field_segmento_tid';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_segmento_tid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_argument_options']['code'] = 'global $user;
$user_profile = user_load( $user->uid );
$segmentos = array();
if ( isset( $user_profile->field_segmento ) && isset( $user_profile->field_segmento[ \'und\' ] ) ){
  foreach($user_profile->field_segmento[ \'und\' ] as $seg){
    $segmentos[] = $seg[\'tid\'];
  }
} 
return implode(\'+\',$segmentos);';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_segmento_tid']['break_phrase'] = TRUE;
  $handler->display->display_options['block_description'] = 'Noticias 3 y 4';

  /* Display: Home - Ultima Noticia */
  $handler = $view->new_display('block', 'Home - Ultima Noticia', 'block_3');
  $handler->display->display_options['link_url'] = 'noticias';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'escalar_y_recortar_a_341x200',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="arrow"><img src="/sites/all/themes/kimberly/images/backgrounds/arrow.png"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'compacto';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Contenido */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Segmento (field_segmento) */
  $handler->display->display_options['arguments']['field_segmento_tid']['id'] = 'field_segmento_tid';
  $handler->display->display_options['arguments']['field_segmento_tid']['table'] = 'field_data_field_segmento';
  $handler->display->display_options['arguments']['field_segmento_tid']['field'] = 'field_segmento_tid';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_segmento_tid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_argument_options']['code'] = 'global $user;
$user_profile = user_load( $user->uid );
$segmentos = array();
if ( isset( $user_profile->field_segmento ) && isset( $user_profile->field_segmento[ \'und\' ] ) ){
  foreach($user_profile->field_segmento[ \'und\' ] as $seg){
    $segmentos[] = $seg[\'tid\'];
  }
} 
return implode(\'+\',$segmentos);';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_segmento_tid']['break_phrase'] = TRUE;
  $handler->display->display_options['block_description'] = 'Home - Ultima Noticia';

  /* Display: Dos últimas universidad */
  $handler = $view->new_display('block', 'Dos últimas universidad', 'block_4');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'row medium-collapse';
  $handler->display->display_options['display_description'] = 'Muestra un bloque con las dos noticias mas recientes';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Todas las noticias';
  $handler->display->display_options['link_url'] = 'noticias';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'columns small-16 medium-8';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'escalar_y_recortar_a_392x200',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="arrow"><img src="/sites/all/themes/kimberly/images/backgrounds/arrow.png"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'compacto';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Contenido */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Segmento (field_segmento) */
  $handler->display->display_options['arguments']['field_segmento_tid']['id'] = 'field_segmento_tid';
  $handler->display->display_options['arguments']['field_segmento_tid']['table'] = 'field_data_field_segmento';
  $handler->display->display_options['arguments']['field_segmento_tid']['field'] = 'field_segmento_tid';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_segmento_tid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_argument_options']['code'] = 'global $user;
$user_profile = user_load( $user->uid );
$segmentos = array();
if ( isset( $user_profile->field_segmento ) && isset( $user_profile->field_segmento[ \'und\' ] ) ){
  foreach($user_profile->field_segmento[ \'und\' ] as $seg){
    $segmentos[] = $seg[\'tid\'];
  }
} 
return implode(\'+\',$segmentos);';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_segmento_tid']['break_phrase'] = TRUE;
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
    'article' => 'article',
  );
  /* Filter criterion: Content: Categoría (field_categoria) */
  $handler->display->display_options['filters']['field_categoria_tid']['id'] = 'field_categoria_tid';
  $handler->display->display_options['filters']['field_categoria_tid']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['filters']['field_categoria_tid']['field'] = 'field_categoria_tid';
  $handler->display->display_options['filters']['field_categoria_tid']['value'] = array(
    34 => '34',
  );
  $handler->display->display_options['filters']['field_categoria_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_categoria_tid']['vocabulary'] = 'categor_a';
  $handler->display->display_options['block_description'] = 'Dos últimas universidad';

  /* Display: Adjunto Universidad */
  $handler = $view->new_display('attachment', 'Adjunto Universidad', 'attachment_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'columns small-16 medium-8';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'compacto';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Contenido */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="arrow2"><img src="/sites/all/themes/kimberly/images/backgrounds/arrow2.png"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'escalar_y_recortar_a_392x200',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Segmento (field_segmento) */
  $handler->display->display_options['arguments']['field_segmento_tid']['id'] = 'field_segmento_tid';
  $handler->display->display_options['arguments']['field_segmento_tid']['table'] = 'field_data_field_segmento';
  $handler->display->display_options['arguments']['field_segmento_tid']['field'] = 'field_segmento_tid';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_segmento_tid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_argument_options']['code'] = 'global $user;
$user_profile = user_load( $user->uid );
$segmentos = array();
if ( isset( $user_profile->field_segmento ) && isset( $user_profile->field_segmento[ \'und\' ] ) ){
  foreach($user_profile->field_segmento[ \'und\' ] as $seg){
    $segmentos[] = $seg[\'tid\'];
  }
} 
return implode(\'+\',$segmentos);';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_segmento_tid']['break_phrase'] = TRUE;
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
    'article' => 'article',
  );
  /* Filter criterion: Content: Categoría (field_categoria) */
  $handler->display->display_options['filters']['field_categoria_tid']['id'] = 'field_categoria_tid';
  $handler->display->display_options['filters']['field_categoria_tid']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['filters']['field_categoria_tid']['field'] = 'field_categoria_tid';
  $handler->display->display_options['filters']['field_categoria_tid']['value'] = array(
    34 => '34',
  );
  $handler->display->display_options['filters']['field_categoria_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_categoria_tid']['vocabulary'] = 'categor_a';
  $handler->display->display_options['displays'] = array(
    'block_4' => 'block_4',
    'default' => 0,
    'block' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Universidad 3 y 4 */
  $handler = $view->new_display('block', 'Universidad 3 y 4', 'block_5');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'row medium-collapse';
  $handler->display->display_options['display_description'] = 'Muestra un bloque con las noticias 3 y 4';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Todas las noticias';
  $handler->display->display_options['link_url'] = 'noticias';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '2';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'columns small-16 medium-8';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'escalar_y_recortar_a_392x200',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="arrow"><img src="/sites/all/themes/kimberly/images/backgrounds/arrow.png"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'compacto';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Contenido */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Segmento (field_segmento) */
  $handler->display->display_options['arguments']['field_segmento_tid']['id'] = 'field_segmento_tid';
  $handler->display->display_options['arguments']['field_segmento_tid']['table'] = 'field_data_field_segmento';
  $handler->display->display_options['arguments']['field_segmento_tid']['field'] = 'field_segmento_tid';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_segmento_tid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_segmento_tid']['default_argument_options']['code'] = 'global $user;
$user_profile = user_load( $user->uid );
$segmentos = array();
if ( isset( $user_profile->field_segmento ) && isset( $user_profile->field_segmento[ \'und\' ] ) ){
  foreach($user_profile->field_segmento[ \'und\' ] as $seg){
    $segmentos[] = $seg[\'tid\'];
  }
} 
return implode(\'+\',$segmentos);';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_segmento_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_segmento_tid']['break_phrase'] = TRUE;
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
    'article' => 'article',
  );
  /* Filter criterion: Content: Categoría (field_categoria) */
  $handler->display->display_options['filters']['field_categoria_tid']['id'] = 'field_categoria_tid';
  $handler->display->display_options['filters']['field_categoria_tid']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['filters']['field_categoria_tid']['field'] = 'field_categoria_tid';
  $handler->display->display_options['filters']['field_categoria_tid']['value'] = array(
    34 => '34',
  );
  $handler->display->display_options['filters']['field_categoria_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_categoria_tid']['vocabulary'] = 'categor_a';
  $handler->display->display_options['block_description'] = 'Universidad 3 y 4';
  $translatables['noticias'] = array(
    t('Master'),
    t('Noticias'),
    t('Todas las noticias'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="arrow"><img src="/sites/all/themes/kimberly/images/backgrounds/arrow.png"></div>'),
    t('Todo(s)'),
    t('Ultima Noticia'),
    t('more'),
    t('Dos últimas noticias'),
    t('Muestra un bloque con las dos noticias mas recientes'),
    t('Adjunto'),
    t('<div class="arrow2"><img src="/sites/all/themes/kimberly/images/backgrounds/arrow2.png"></div>'),
    t('Noticias 3 y 4'),
    t('Muestra un bloque con las noticias 3 y 4'),
    t('Home - Ultima Noticia'),
    t('Dos últimas universidad'),
    t('Adjunto Universidad'),
    t('Universidad 3 y 4'),
  );
  $export['noticias'] = $view;

  return $export;
}
