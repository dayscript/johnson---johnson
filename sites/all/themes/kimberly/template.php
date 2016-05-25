<?php

/**
 * Implements template_preprocess_html().
 */
function kimberly_preprocess_html(&$variables) {
}

/**
 * Implements template_preprocess_page.
 */
function kimberly_preprocess_page(&$variables) {
    // Convenience variables.
    if (!empty($variables['page']['sidebar_first'])) {
        $left = $variables['page']['sidebar_first'];
    }

    if (!empty($variables['page']['sidebar_second'])) {
        $right = $variables['page']['sidebar_second'];
    }
    // Dynamic sidebars.
    if (!empty($left) && !empty($right)) {
        $variables['main_grid'] = 'medium-6 medium-push-5';
        $variables['sidebar_first_grid'] = 'medium-5 medium-pull-6';
        $variables['sidebar_sec_grid'] = 'medium-5';
    }
    elseif (empty($left) && !empty($right)) {
        $variables['main_grid'] = 'medium-11';
        $variables['sidebar_first_grid'] = '';
        $variables['sidebar_sec_grid'] = 'medium-5';
    }
    elseif (!empty($left) && empty($right)) {
        $variables['main_grid'] = 'medium-11 medium-push-5';
        $variables['sidebar_first_grid'] = 'medium-5 medium-pull-11';
        $variables['sidebar_sec_grid'] = '';
    }
    else {
        $variables['main_grid'] = '';
        $variables['sidebar_first_grid'] = '';
        $variables['sidebar_sec_grid'] = '';
    }
}

/**
 * Implements template_preprocess_node.
 */
function kimberly_preprocess_node(&$variables) {
}
function _kimberly_md_slider_md_slider_556f36688dfb4_block_visibility($block){
    if(!drupal_is_front_page())return false;
    global $user;
    $user_profile = user_load( $user->uid );

    if ( $user_profile->uid != 0 ) {
        if ( isset( $user_profile->field_segmento ) && isset( $user_profile->field_segmento[ 'und' ] ) ){
            foreach($user_profile->field_segmento[ 'und' ] as $seg){
                if(
                    $seg['tid'] == 107// Mixto
                    || $seg['tid'] == 56 //Food
                    || $seg['tid'] == 148 // Salud
                    || $seg['tid'] == 62 // Industria con HW
                ){
                    return true;
                }
            }
        }
    }
    return false;
}

function _kimberly_md_slider_slide_principal_block_visibility($block){
    if(!drupal_is_front_page())return false;
    global $user;
    $user_profile = user_load( $user->uid );
    if ( $user_profile->uid != 0 ) {
        if ( isset( $user_profile->field_segmento ) && isset( $user_profile->field_segmento[ 'und' ] ) ){
            foreach($user_profile->field_segmento[ 'und' ] as $seg){
                if(
                    $seg['tid'] == 107// Mixto
                    || $seg['tid'] == 56 //Food
                    || $seg['tid'] == 148 // Salud
                    || $seg['tid'] == 62 // Industria con HW
                ){
                    return false;
                }
            }
        }
    }
    return true;
}