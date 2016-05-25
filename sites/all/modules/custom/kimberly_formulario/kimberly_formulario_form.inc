<?php

/**
 * Validation of the phone, name and apellidos.
 *
 */
function kimberly_formulario_validate($element, &$form_state) {
  foreach ($form_state['values'] as $key => $value) {
    switch ($key) {
      case 'field_nombres':
          if ( !preg_match('/^[aA-zZñ]+[aA-zAñ\s]+[aA-zZñ]$/', $value['und'][0]['value'])) {
              $error[$key]['resut'] = false;
              $error[$key]['sms'] = 'no necesita numeros';
          }
        break;
        case 'field_apellidos':
          if ( !preg_match('/^[aA-zZñ]+[aA-zAñ\s]+[aA-zZñ]$/', $value['und'][0]['value'])) {
              $error[$key]['resut'] = false;
              $error[$key]['sms'] = 'no necesita numeros' ;
          }
        break;
        case 'field_celular':
        if ( !preg_match('/^\+?\d{1,3}?[- .]?\(?(?:\d{2,3})\)?[- .]?\d\d\d[- .]?\d\d\d\d$/', $value['und'][0]['value'])) {
              $error[$key]['resut'] = false;
              $error[$key]['sms'] = 'Introduce un numero de celular valido' ;
          }
        break;
    }
  }
  foreach ($error as $key => $value) {
    if(!$value['resut']){
        form_set_error($key, $value['sms']);
       $return = false;
    }
  }
  if(!$return)
    return false;
 

  return true;
}


function kimberly_formulario_drupal_get_form(){
 
 // drupal_flush_all_caches();
  registry_rebuild();
  Global $user;
  module_load_include('inc', 'user', 'user.pages');
  $account = user_load($user->uid);
  return render(drupal_get_form('user_profile_form',$account));
}


function submit_button(){
  drupal_goto('/gracias-por-activar-tu-cuenta');
}


function  kimberly_formulario_form_user_profile_form_alter(&$form, &$form_state, $form_id){
  $url = arg();
  $path = drupal_get_path_alias($url[0].'/'.$url[1]);
  if($path == 'actualizacion-datos'){
  $form['account']['name']['#access'] = FALSE;
  $form['account']['current_pass']['#access'] = FALSE;
  $form['account']['pass']['#access'] = FALSE;
  $form['field_direccion']['#access'] = FALSE;
  $form['account']['roles']['#access'] = FALSE;
  $form['account']['status']['#access'] = FALSE;
  $form['field_telefono']['#access'] = FALSE;
  $form['field_perfil']['#access'] = FALSE;
  $form['field_distribuidor']['#access'] = FALSE;
  $form['field_segmento']['#access'] = FALSE;
  $form['field_acepto']['#access'] = FALSE;
  $form['field_mecanica']['#access'] = FALSE;
  $form['field_jefe']['#access'] = FALSE;
  $form['field_consultores']['#access'] = FALSE;
  $form['field_gerente']['#access'] = FALSE;
  $form['#validate'][] =  'kimberly_formulario_validate';
  $form['#submit'][] = submit_button;
} 
}