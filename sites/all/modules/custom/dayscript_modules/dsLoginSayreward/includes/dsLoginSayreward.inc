<?php
function Urlsafe_Base64_Encode($string) { 	
	$data = base64_encode($string); 	
	$data = str_replace(array('+','/','='),array('-','_','.'),$data); 	
return $data; 
}
function Urlsafe_Base64_Decode($string) { 	
	$data = str_replace(array('-','_','.'),array('+','/','='),$string); 	
	$mod4 = strlen($data) % 4; 	if($mod4) 		
	$data .= substr('====', $mod4); 
	return base64_decode($data); 
}
function Encrypt_Value($str_text, $encryption_key, $iv, $algorithm = MCRYPT_RIJNDAEL_128, $mode = MCRYPT_MODE_CBC) { 
	$str_encrypted = ""; 	
	$cipher = mcrypt_module_open($algorithm, '', $mode, ''); 	
	if($cipher !== FALSE) { 		
		$init_status = mcrypt_generic_init($cipher, $encryption_key, $iv); 		
		if($init_status !== FALSE && $init_status >= 0) 			
			$str_encrypted = mcrypt_generic($cipher, $str_text); 	
	} 	
	mcrypt_generic_deinit($cipher);  	
	return $str_encrypted; 
}
function Decrypt_Value($str_encrypted, $decryption_key, $iv, $algorithm = MCRYPT_RIJNDAEL_128, $mode = MCRYPT_MODE_CBC) {
    if(empty($str_encrypted)) return""; 	
    $str_decrypted = "";
	$cipher = mcrypt_module_open($algorithm, "", $mode, ""); 	
	if($cipher !== FALSE) { 		
		$init_status = mcrypt_generic_init($cipher, $decryption_key, $iv); 		
		if($init_status !== FALSE && $init_status >= 0) 			
			$str_decrypted = mdecrypt_generic($cipher, $str_encrypted); 	
	} 	
	mcrypt_generic_deinit($cipher);
 	return rtrim($str_decrypted,"\x00..\x1F"); 
 }
 