<?php if ( isset($data[ 'presentacion' ]) && $data[ 'presentacion' ]->field_documento_adjunto[ 'und' ][ 0 ][ 'uri' ] ): ?>
    <a target="_blank"
       href="<?php echo file_create_url( $data[ 'presentacion' ]->field_documento_adjunto[ 'und' ][ 0 ][ 'uri' ] ) ?>">
        <img
            src="<?php echo image_style_url( 'escalar_a_341', $data[ 'presentacion' ]->field_image[ 'und' ][ 0 ][ 'uri' ] ) ?>"/>
    </a>
    <?php else:?>
    -
<?php endif ?>
<?php /*
<div class="views-field views-field-nothing">
    <span class="field-content">
        <div class="arrow"><img src="/sites/all/themes/kimberly/images/backgrounds/arrow.png"></div>
    </span>
</div>
<div class="views-field views-field-body">
    <span class="field-content">
        <a target="_blank"
           href="<?php echo file_create_url( $data[ 'presentacion' ]->field_documento_adjunto[ 'und' ][ 0 ][ 'uri' ] ) ?>">
            <?php print_r( $data[ 'presentacion' ]->body['und'][0]['value'] )?>
        </a>
    </span>
</div>
*/