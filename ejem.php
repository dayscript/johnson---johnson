/**
 * Implememts HOOK_ACTION_views_bulk_operations_form
 */
function mimodulo_send_solinfo_action_views_bulk_operations_form($settings, $entityType, $settings_dom_id) {
 
  //establecemos los valores por defecto
  $settings += array(
    'tu_diras' => "",
  );
 
  $form['tu_diras'] = array(
    '#title' => t('Tu dirás'),
    '#type' => 'textarea',
    '#description' => t('Si quieres puedes proveer un texto por defecto para el usuario'),
    '#default_value' => $settings['tu_diras'],
  );
 
  return $form;
}