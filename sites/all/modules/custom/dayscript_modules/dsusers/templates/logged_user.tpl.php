<div class="row ">
  <div class="welcome columns small-10 text-right">Bienvenido(a): <span class="name"><?php echo htmlentities($data["nombre"])?></span>
    <div class="logout"><a href="/user/logout">Cerrar sesi&oacute;n</a></div>
  </div>
  <div class="myaccount columns small-6 text-center"><a href="/user">Mi cuenta</a></div>
</div>
<?php
//print_r($data);