 <?php

// Load node.module from the node module.
module_load_include('module', 'node', 'node');
   
$content_types = array('liquidacion');
  
 $results = db_select('node', 'n')
              ->fields('n', array('nid'))
              ->condition('type', $content_types, 'IN')
             // ->condition('created', strtotime("1 March 2013"),'<')
              //->orderRandom()
              ->range(0,10000)
          ->execute();
  foreach ($results as $result) {
    $nids[] = $result->nid;
  }
 
print 'Nodes to delete:' . count($nids). "\n";
  
  if(!empty($nids)) {
    node_delete_multiple($nids);
    drupal_set_message(t('Deleted %count nodes.', array('%count' => count($nids))));
  }   

