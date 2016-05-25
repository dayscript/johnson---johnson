<div class="row">
    <div class="info columns small-10">
        <div><?php echo $data[ "nombre" ] ?></div>
        <div class="perfil"><?php echo $data[ "perfil" ] ?></div>
        <div class="ciudad">Ciudad:
            <small><?php echo $data[ "ciudad" ] ?></small>
        </div>
        <div class="cedula">Cédula:
            <small><?php echo $data[ "cedula" ] ?></small>
        </div>
        <?php if ( isset($data["cuotas"]) && ($data[ "perfil" ] == "Vendedor" || $data[ "perfil" ] == "Jefe de Ventas") ): ?>
            <div class="grupo cuotas">
                <div class="row"><h3><?php echo $data["cuotas"]["titulo"]?></h3></div>
                <?php foreach($data["cuotas"]["datos"] as $desafio):?>
                    <?php if($desafio[ "presupuesto" ]>0):?>
                        <div class="cuota row">
                            <div class="nombre columns small-10"><?php echo $desafio[ "nombre" ] ?></div>
                            <div class="columns small-6">
                                <?php if($desafio[ "unidades"] == "Pesos"):?>
                                    $<?php echo number_format( $desafio[ "presupuesto" ], "0", ",", "." ) ?>
                                <?php else:?>
                                    <?php echo number_format( $desafio[ "presupuesto" ], "0", ",", "." ) . " " . $desafio[ "unidades" ] ?>
                                <?php endif?> 
                            </div>

                        </div>
                    <?php endif?>
                <?php endforeach?>
            </div>
        <?php endif ?>
    </div>
    <?php if ( $data[ "perfil" ] == "Vendedor" || $data[ "perfil" ] == "Jefe de Ventas" ): ?>
        <div class="acumulado columns small-6">
            <h3>Mi Acumulado</h3>

            <div class="estrellas">$<?php echo number_format( $data[ "estrellas" ], 0, ",", "." ) ?></div>
        </div>
    <?php endif ?>
</div>
<hr/>
<div class="grupo">
    <h3>Consulta tus estrellas</h3>

    <div class="content">
        <?php if ( count( $data[ "distribuidores" ] ) > 1 ): ?>
            <div class="meses">Escoja un distribuidor:
                <select name="distribuidor" id="distribuidor"
                        onchange="document.location.href='/desafios?cedula=<?php echo $data[ "cedula" ] ?>&mes=<?php echo $data[ "mes" ] ?>&did='+this.options[this.selectedIndex].value;">
                    <?php foreach ( $data[ "distribuidores" ] as $did => $distribuidor ): ?>
                        <option <?php echo ( $did == $data[ "did" ] ) ? "selected" : "" ?>
                            value="<?php echo $did ?>"><?php echo $distribuidor ?></option>
                    <?php endforeach ?>
                </select>
            </div>
        <?php endif ?>
        <div class="row">
            <div class="meses small-12 columns">Escoja un periodo a continuación:
                <select name="mes" id="mes"
                        onchange="document.location.href='/desafios?cedula=<?php echo $data[ "cedula" ] ?>&did=<?php echo $data[ "did" ] ?>&mes='+this.options[this.selectedIndex].value;">
                    <?php foreach ( $data[ "meses" ] as $mes ): ?>
                        <option <?php echo ( $mes == $data[ "mes" ] ) ? "selected" : "" ?>
                            value="<?php echo $mes ?>"><?php echo t(date("F", strtotime($mes))); ?></option>
                    <?php endforeach ?>
                        <option  <?php echo ( $data[ "mes" ] == 'Todos' ) ? "selected" : "" ?>
                             value="Todos">Todos</option>
                </select>
            </div>
            <?php if ( $data[ "perfil" ] == "Vendedor" || $data[ "perfil" ] == "Jefe de Ventas" ): ?>
                <div class="meses small-4 columns right" style="font-size: 1.2rem;">
                    Total de Estrellas <br/>
                    <?php
                    if(isset($data['mes']) ):?>
                        <strong><?php echo t(date( "F",strtotime($data["mes"]))) ?></strong>:
                    <?php else: ?>
                        <strong>Marzo</strong>:
                    <?php endif; ?>   
                    <span class="red">$<?php echo number_format( $data["liquidaciones"][$data["mes"]][ "estrellas" ], 0, ",", "." ) ?></span>
                </div>
            <?php endif ?>
        </div>
    </div>
</div>
<div class="row">
    <div class="columns medium-11">
        <?php if ( isset( $data["liquidaciones"][$data["mes"]][ "desafios" ][ "individual" ] ) && count( $data["liquidaciones"][$data["mes"]][ "desafios" ][ "individual" ] ) > 0 ): ?>
            <div class="grupo">
                <h3>Desafíos individuales</h3>

                <div class="content">
                    <?php foreach ( $data["liquidaciones"][$data["mes"]][ "desafios" ][ "individual" ] as $desafio ): ?>
                        <div class="desafio">
                            <?php if ( $desafio[ "mostrar" ] == "No" ): ?>

                            <?php else: ?>
                                <div class="item cumplimiento">Cumplimiento: <span
                                        class="data"><?php echo number_format( $desafio[ "cumplimiento" ], "2", ",", "." ) ?>
                                        %</span>
                                </div>
                            <?php endif ?>
                            <div class="nombre"><?php echo $desafio[ "nombre" ] ?></div>
                            <?php if($desafio[ "descripcion" ] != ""):?>
                                <small><strong>*</strong> <?php echo $desafio[ "descripcion" ] ?></small>
                            <?php endif ?>
                            <div class="item estrellas">Estrellas obtenidas <span
                                    class="data"><?php echo number_format( $desafio[ "estrellas" ], "0", ",", "." ) ?></span></div>
                            <?php if ( $desafio[ "mostrar" ] == "No" ): ?>

                            <?php else: ?>
                                <div class="item">
                                    <?php if ( $desafio[ "unidades" ] == "Pesos" ): ?>
                                        Presupuesto: <span
                                            class="data">$<?php echo number_format( $desafio[ "presupuesto" ], "0", ",", "." ) ?></span>
                                    <?php else: ?>
                                        Presupuesto: <span
                                            class="data"><?php echo number_format( $desafio[ "presupuesto" ], "0", ",", "." ) . " " . $desafio[ "unidades" ] ?></span>
                                    <?php endif ?>
                                </div>
                            <?php endif ?>
                            <div class="item">
                                <?php if ( $desafio[ "unidades" ] == "Pesos" ): ?>
                                    Venta: <span
                                        class="data">$<?php echo number_format( $desafio[ "valor" ], "0", ",", "." ) ?></span>
                                <?php else: ?>
                                    Valor: <span
                                        class="data"><?php echo number_format( $desafio[ "valor" ], "0", ",", "." ) . " " . $desafio[ "unidades" ] ?></span>
                                <?php endif ?>
                            </div>

                        </div>
                        <hr/>
                    <?php endforeach ?>
                </div>
            </div>
        <?php endif ?>

        <?php if ( isset( $data["liquidaciones"][$data["mes"]][ "desafios" ][ "grupal" ] ) && count( $data["liquidaciones"][$data["mes"]][ "desafios" ][ "grupal" ] ) > 0 ): ?>
            <div class="grupo">
                <h3>Desafíos grupales</h3>

                <div class="content">
                    <?php foreach ( $data["liquidaciones"][$data["mes"]][ "desafios" ][ "grupal" ] as $desafio ): ?>
                        <div class="desafio">
                            <?php if ( $desafio[ "mostrar" ] == "No" ): ?>

                            <?php else: ?>
                                <div class="item cumplimiento">Cumplimiento: <span
                                        class="data"><?php echo number_format( $desafio[ "cumplimiento" ], "2", ",", "." ) ?>
                                        %</span>
                                </div>
                            <?php endif ?>
                            <div class="nombre"><?php echo $desafio[ "nombre" ] ?></div>
                            <?php if($desafio[ "descripcion" ]!=""):?>
                                <small><strong>*</strong> <?php echo $desafio[ "descripcion" ] ?></small>
                            <?php endif ?>
                            <div class="item estrellas">Estrellas obtenidas <span
                                    class="data"><?php echo number_format( $desafio[ "estrellas" ], "0", ",", "." ) ?></span></div>
                            <?php if ( $desafio[ "mostrar" ] == "No" ): ?>

                            <?php else: ?>
                                <div class="item">
                                    <?php if ( $desafio[ "unidades" ] == "Pesos" ): ?>
                                        Presupuesto: <span
                                            class="data">$<?php echo number_format( $desafio[ "presupuesto" ], "0", ",", "." ) ?></span>
                                    <?php else: ?>
                                        Presupuesto: <span
                                            class="data"><?php echo number_format( $desafio[ "presupuesto" ], "0", ",", "." ) . " " . $desafio[ "unidades" ] ?></span>
                                    <?php endif ?>
                                </div>
                            <?php endif ?>
                            <div class="item">
                                <?php if ( $desafio[ "unidades" ] == "Pesos" ): ?>
                                    Venta: <span
                                        class="data">$<?php echo number_format( $desafio[ "valor" ], "0", ",", "." ) ?></span>
                                <?php else: ?>
                                    Valor: <span
                                        class="data"><?php echo number_format( $desafio[ "valor" ], "0", ",", "." ) . " " . $desafio[ "unidades" ] ?></span>
                                <?php endif ?>
                            </div>

                        </div>
                        <hr/>
                    <?php endforeach ?>
                </div>
            </div>
        <?php endif ?>
        <?php if ( isset( $data["liquidaciones"][$data["mes"]][ "desafios" ][ "otros" ] ) && count( $data["liquidaciones"][$data["mes"]][ "desafios" ][ "otros" ] ) > 0 ): ?>
            <div class="grupo">
                <h3>Otros Reconocimientos</h3>
                <div class="content">
                    <?php foreach ( $data["liquidaciones"][$data["mes"]][ "desafios" ][ "otros" ] as $desafio ): ?>
                        <div class="desafio">
                            <div class="item estrellas">
                                Estrellas obtenidas <span class="data"><?php echo number_format( $desafio[ "estrellas" ], "0", ",", "." ) ?></span>
                            </div>
                            <div class="nombre"><?php echo $desafio[ "nombre" ] ?></div>
                        </div>
                        <hr/>
                    <?php endforeach ?>
                </div>
            </div>
        <?php endif ?>
        <?php if ( isset( $data[ "vendedores" ] ) ): ?>
            <?php if ( count( $data[ "vendedores" ] ) > 0 ): ?>
                <?php $distribuidor = $data["distribuidores"][$data["did"]] ?>
            <?php else: ?>
                <?php $distribuidor = "Grupo de vendedores" ?>
            <?php endif ?>
            <div class="grupo">
            <h3><?php echo $distribuidor ?><span id="sum-full" style="display: inline-block;float: right;width: 211px;">Total:</span></h3>

            <div class="content">
            <?php if ( count( $data[ "vendedores" ] ) > 0 ): ?>
                <table width="100%" id="table-consultant">
                <thead>
                <tr>
                    <th>Cédula</th>
                    <th>Nombre y Perfil</th>
                    <th class="text-right">Estrellas</th>
                    <th class="text-right">Detalles</th>
                </tr>
                </thead>
                <tbody>
                <?php foreach ( $data[ "vendedores" ] as $vendedor ): ?>
                    <?php if($vendedor["distribuidor"]!=$data["distribuidores"][$data["did"]])continue;?>
                    <?php if ( $vendedor[ "distribuidor" ] != $distribuidor ): ?>
                        <?php $distribuidor = $vendedor[ "distribuidor" ] ?>
                        </tbody>
                        </table>
                        </div></div>
                        <div class="grupo">
                        <h3><?php echo $distribuidor ?></h3>
                        <div class="content">
                        <table width="100%">
                        <thead>
                        <tr> 
                            <th>Cédula</th>
                            <th>Nombre y Perfil</th>
                            <th class="text-right">Estrellas</th>
                            <th class="text-right">Detalles</th>
                        </tr>
                        </thead>
                        <tbody>
                    <?php endif ?>
                    <tr>
                        <td><?php echo $vendedor[ "cedula" ] ?></td>
                        <td><?php echo $vendedor[ "nombre" ] ?><br>
                            <small><strong><?php echo $vendedor[ "distribuidor" ] ?></strong>
                                - <?php echo $vendedor[ "perfil" ] ?></small>
                            <br/>
                        </td>
                        <td class="text-right estrellas"><?php echo number_format( $vendedor[ "estrellas" ], 0, ",", "." ) ?></td>
                        <td class="text-right">
                            <button style="margin-bottom: 0"
                                    onclick="jQuery('tr.<?php echo $vendedor[ "cedula" ] ?>').toggle();"
                                    class="tiny success">Ver detalle
                            </button>
                        </td>
                    </tr>
                    <?php if ( isset( $vendedor[ "desafios" ][ "individual" ] ) ): $mes=""?>
                        <?php foreach ( $vendedor[ "desafios" ][ "individual" ] as $desafio ): ?>
                            <?php if(isset($desafio['estrellas']) || $desafio['estrellas'] != 0 ):?>
                                <tr class="<?php echo $vendedor[ "cedula" ] ?> desafio" style="display: none;">
                                    <td>&nbsp;</td>
                                    <td>
                                        <?php if( $mes != $desafio['mes'] ): ?>
                                            <div class="fecha" style="width: 100%;background: rgba(123, 147, 198, 0.61);color: #fff; border-bottom: 3px solid #9C9797; margin-bottom: 14px;"><?php echo $desafio['mes'] ?></div>
                                        <?php $mes = $desafio['mes'] ?>
                                        <?php endif; ?>
                                        
                                        <div><?php echo $desafio[ "nombre" ] ?></div>
                                        <?php if ( $desafio[ "mostrar" ] == "No" || !isset($desafio[ "mostrar" ])): ?>
                                        <?php else: ?>
                                            <div class="item" style="width: 350px;padding: 5px 0;">Cumplimiento: <span
                                                    class="data"><?php echo number_format( $desafio[ "cumplimiento" ], "2", ",", "." ) ?>
                                                    %</span></div>
                                        <?php endif ?>
                                        <?php if ( $desafio[ "mostrar" ] == "No" || !isset($desafio[ "mostrar" ])): ?>
                                        <?php else: ?>
                                            <div class="item" style="width: 350px;padding: 5px 0;">
                                                <?php if ( $desafio[ "unidades" ] == "Pesos" || !isset($desafio[ "unidades" ]) ): ?>
                                                    Presupuesto: <span
                                                        class="data">$<?php echo (isset($desafio[ "presupuesto" ])) ? number_format( $desafio[ "presupuesto" ], "0", ",", ".") : 0  ?></span>
                                                <?php else: ?>
                                                    Presupuesto: <span
                                                        class="data"><?php echo number_format( $desafio[ "presupuesto" ], "0", ",", "." ) . " " . $desafio[ "unidades" ] ?></span>
                                                <?php endif ?>
                                            </div>
                                        <?php endif ?>
                                        <div class="item" style="width: 350px;padding: 5px 0;">
                                            <?php if ( $desafio[ "unidades" ] == "Pesos" || !isset($desafio[ "unidades" ]) ): ?>
                                                Venta: <span
                                                    class="data">$<?php echo (isset($desafio[ "valor" ])) ? number_format( $desafio[ "valor" ], "0", ",", "." ) : 0 ?></span>
                                            <?php else: ?>
                                                Valor: <span
                                                    class="data"><?php echo number_format( $desafio[ "valor" ], "0", ",", "." ) . " " . $desafio[ "unidades" ] ?></span>
                                            <?php endif ?>
                                        </div>
                                    </td>
                                    <td class="text-right estrellas-unitarias"><?php echo ($desafio[ "estrellas" ] != 0) ? $desafio[ "estrellas" ]:0 ?></td>
                                    <td></td>
                                </tr>
                            <?php endif; ?>
                        <?php endforeach ?>
                    <?php endif ?>
                    <?php if ( isset( $vendedor[ "desafios" ][ "grupal" ] ) ): ?>
                        <?php foreach ( $vendedor[ "desafios" ][ "grupal" ] as $desafio ): ?>
                            <?php if(isset($desafio['estrellas']) || $desafio['estrellas'] != 0 ):?>
                                <tr class="<?php echo $vendedor[ "cedula" ] ?> desafio" style="display: none;">
                                    <td>&nbsp;</td>
                                    <td>
                                        <div><?php echo $desafio[ "nombre" ] ?> <strong>(Grupal)</strong></div>
                                        <?php if ( $desafio[ "mostrar" ] == "No" ): ?>
                                        <?php else: ?>
                                            <div class="item" style="width: 350px;padding: 5px 0;">Cumplimiento: <span
                                                    class="data"><?php echo number_format( $desafio[ "cumplimiento" ], "2", ",", "." ) ?>
                                                    %</span></div>
                                        <?php endif ?>
                                        <?php if ( $desafio[ "mostrar" ] == "No" ): ?>
                                        <?php else: ?>
                                            <div class="item" style="width: 350px;padding: 5px 0;">
                                                <?php if ( $desafio[ "unidades" ] == "Pesos" ): ?>
                                                    Presupuesto: <span
                                                        class="data">$<?php echo number_format( $desafio[ "presupuesto" ], "0", ",", "." ) ?></span>
                                                <?php else: ?>
                                                    Presupuesto: <span
                                                        class="data"><?php echo number_format( $desafio[ "presupuesto" ], "0", ",", "." ) . " " . $desafio[ "unidades" ] ?></span>
                                                <?php endif ?>
                                            </div>
                                        <?php endif ?>
                                        <div class="item" style="width: 350px;padding: 5px 0;">
                                            <?php if ( $desafio[ "unidades" ] == "Pesos" ): ?>
                                                Venta: <span
                                                    class="data">$<?php echo number_format( $desafio[ "valor" ], "0", ",", "." ) ?></span>
                                            <?php else: ?>
                                                Valor: <span
                                                    class="data"><?php echo number_format( $desafio[ "valor" ], "0", ",", "." ) . " " . $desafio[ "unidades" ] ?></span>
                                            <?php endif ?>
                                        </div>
                                    </td>
                                    <td class="text-right"><?php echo $desafio[ "estrellas" ] ?></td>
                                    <td></td>
                                </tr>
                            <?php endif; ?>
                        <?php endforeach ?>
                    <?php endif ?>
                    <?php if ( isset( $vendedor[ "desafios" ][ "otros" ] ) ): ?>
                        <?php foreach ( $vendedor[ "desafios" ][ "otros" ] as $desafio ): ?>
                            <?php if(isset($desafio['estrellas']) || $desafio['estrellas'] != 0 ):?>
                                <tr class="<?php echo $vendedor[ "cedula" ] ?> desafio" style="display: none;">
                                    <td>&nbsp;</td>
                                    <td>
                                        <div><?php echo $desafio[ "nombre" ] ?> <strong>(Otros)</strong></div>
                                        <?php if ( $desafio[ "mostrar" ] == "No" ): ?>
                                        <?php else: ?>
                                            <div class="item" style="width: 350px;padding: 5px 0;">Cumplimiento: <span
                                                    class="data"><?php echo number_format( $desafio[ "cumplimiento" ], "2", ",", "." ) ?>
                                                    %</span></div>
                                        <?php endif ?>
                                        <?php if ( $desafio[ "mostrar" ] == "No" ): ?>
                                        <?php else: ?>
                                            <div class="item" style="width: 350px;padding: 5px 0;">
                                                <?php if ( $desafio[ "unidades" ] == "Pesos" ): ?>
                                                    Presupuesto: <span
                                                        class="data">$<?php echo number_format( $desafio[ "presupuesto" ], "0", ",", "." ) ?></span>
                                                <?php else: ?>
                                                    Presupuesto: <span
                                                        class="data"><?php echo number_format( $desafio[ "presupuesto" ], "0", ",", "." ) . " " . $desafio[ "unidades" ] ?></span>
                                                <?php endif ?>
                                            </div>
                                        <?php endif ?>
                                        <div class="item" style="width: 350px;padding: 5px 0;">
                                            <?php if ( $desafio[ "unidades" ] == "Pesos" ): ?>
                                                Venta: <span
                                                    class="data">$<?php echo number_format( $desafio[ "valor" ], "0", ",", "." ) ?></span>
                                            <?php else: ?>
                                                Valor: <span
                                                    class="data"><?php echo number_format( $desafio[ "valor" ], "0", ",", "." ) . " " . $desafio[ "unidades" ] ?></span>
                                            <?php endif ?>
                                        </div>
                                    </td>
                                    <td class="text-right"><?php echo $desafio[ "estrellas" ] ?></td>
                                    <td></td>
                                </tr>
                            <?php endif; ?>
                        <?php endforeach ?>
                    <?php endif ?>
                <?php endforeach ?>
                </tbody>
                </table>
            <?php else: ?>
                No hay vendedores activos a su cargo.
            <?php endif; ?>
            </div>
            </div>
        <?php endif; ?>
    </div>
   <!-- <?php if($data['presentaciones'][$data['did']]):?>
        <div class="columns medium-5">
            <div class="grupo">
                <h3>Presentación</h3>
                <a target="_blank"
                   href="<?php echo file_create_url( $data[ 'presentaciones' ][$data['did']]->field_documento_adjunto[ 'und' ][ 0 ][ 'uri' ] ) ?>">
                    <img
                        src="<?php echo image_style_url( 'escalar_a_341', $data[ 'presentaciones' ][$data['did']]->field_image[ 'und' ][ 0 ][ 'uri' ] ) ?>"/>
                </a>
            </div>
        </div>
    <?php elseif( $data['presentacion'] ):?>
        <div class="columns medium-5">
            <div class="grupo">
                <h3>Presentación</h3>
                <a target="_blank"
                   href="<?php echo file_create_url( $data[ 'presentacion' ]->field_documento_adjunto[ 'und' ][ 0 ][ 'uri' ] ) ?>">
                    <img
                        src="<?php echo image_style_url( 'escalar_a_341', $data[ 'presentacion' ]->field_image[ 'und' ][ 0 ][ 'uri' ] ) ?>"/>
                </a>
            </div>
        </div>
    <?php endif;?>-->

<!--  Pruebas de hiustorial -->
    <?php if($data['presentaciones'][$data['did']]):?>
        <div class="columns medium-5">
            <div class="grupo">
                <h3>¡Conoce tus metas!</h3>
                <?php foreach ( $data['presentaciones'][$data['did']]->field_documento_adjunto['und']as $key => $value) :?>
                    <?php if($key == "0"):?>
                        <a target="_blank"
                            href="<?php echo file_create_url($value['uri']) ?>">
                            
                                <img
                                    src="<?php echo image_style_url( 'escalar_a_341', $data[ 'presentaciones' ][$data['did']]->field_image[ 'und' ][ 0 ][ 'uri' ] ) ?>"/>
                                </a>        
                    <?php endif; ?>
                    <?php if($key != "0"):?>
                    <a class="history-file"  style="color:#000;display:block;"target="_blank"
                            href="<?php echo file_create_url($value['uri']) ?>">
                            <img 
                            style= "width: 20px;height: 30px;margin: 10px;" 
                            src="https://www.estrellaskimberly.com/sites/default/files/icons/pdf-icom-kim.png"><?php echo $value['description'] ?>
                    </a>
                    <?php endif; ?>
                <?php endforeach; ?>
            </div>
        </div>
    <?php elseif( $data['presentacion'] ):?>
        <div class="columns medium-5">
            <div class="grupo">
                <h3>¡Conoce tus metas!</h3>
                <a target="_blank"
                   href="<?php echo file_create_url( $data[ 'presentacion' ]->field_documento_adjunto[ 'und' ][ 0 ][ 'uri' ] ) ?>">
                    <img
                        src="<?php echo image_style_url( 'escalar_a_341', $data[ 'presentacion' ]->field_image[ 'und' ][ 0 ][ 'uri' ] ) ?>"/>
                </a>
            </div>
        </div>
    <?php endif;?>
</div>

<!--<pre>-->
<!--    --><?php
//    print_r( $data );
//    ?>
<!--</pre>-->

<!--<div id="chart" style="width:400px; height:400px;"></div>-->
<!--<script>-->
<!--    function sample() {-->
<!--        jQuery('#chart').highcharts({-->
<!--            chart: {-->
<!--                type: 'bar'-->
<!--            },-->
<!--            title: {-->
<!--                text: 'Fruit Consumption'-->
<!--            },-->
<!--            xAxis: {-->
<!--                categories: ['Apples', 'Bananas', 'Oranges']-->
<!--            },-->
<!--            yAxis: {-->
<!--                title: {-->
<!--                    text: 'Fruit eaten'-->
<!--                }-->
<!--            },-->
<!--            series: [{-->
<!--                name: 'Jane',-->
<!--                data: [1, 0, 4]-->
<!--            }, {-->
<!--                name: 'John',-->
<!--                data: [5, 7, 3]-->
<!--            }]-->
<!--        });-->
<!--    }-->
<!--    sample();-->
<!--</script>-->