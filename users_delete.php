<?php
 
// Load user.module from the user module.
module_load_include('module', 'node', 'node');
 
// Roles to select user to delete
$roles = array('Administrador Sodexo','Administrador Kimberly','Analista Kimberly','BTA Kimberly','Consultor','Gte Mercadeo Kimberly','Jefe de Ventas','Vendedor');
 
$query = db_select('users', 'u');
$query->fields('u', array('uid'));
$query->join('users_roles','ur', 'u.uid=ur.uid');
$query->join('role', 'r', 'r.rid=ur.rid');
$query->condition('r.name', $roles, 'IN');
$query->condition('u.uid', 1, '>');
$query->orderRandom();
$query->range(0,15000);
$query->groupBy('u.uid');
 
$results = $query->execute();
foreach ($results as $result) {
  $uids[] = $result->uid;
}
 
print 'users to delete:' . count($uids). "\n";
 
if(!empty($uids)) {
  user_delete_multiple($uids);
  drupal_set_message(t('Deleted %count users.', array('%count' => count($uids))));
}
