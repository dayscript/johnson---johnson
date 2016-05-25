(function($){
    
  Drupal.behaviors.LoginRegister = {
    
    attach: function (context, settings) {
      
      $('#kimberly-poll-quest-form:not(.kimberly-processed)').addClass('kimberly-processed').submit(function(event) {
	
        var element_settings = {},
            base = $(this).attr('id'),
            data,
            ajax;
	    
        if(typeof Drupal.ajax[base] !== 'undefined'){
          delete Drupal.ajax[base];
          $(this).unbind('clickSubmit');
        } 
        
        data['question_1'] = $('input[name="question_1"]:checked').val();
        data['question_2'] = $('input[name="question_2"]:checked').val();
        data['question_3'] = $('input[name="question_3"]:checked').val();
        data['question_4'] = $('input[name="question_4"]:checked').val();
	    
        element_settings.progress = { 'type' : 'none' };
        element_settings.submit   = { js: true, base: base, data: data };
        element_settings.url      = Drupal.settings.basePath + $(this).find('.content-submit').data('url');
        element_settings.event    = 'clickSubmit';
	
        ajax              = new Drupal.ajax(base, this, element_settings);
        Drupal.ajax[base] = ajax;
        
        $(this).trigger( 'clickSubmit' );
	
      });
      
    }
    
  };
  
  Drupal.ajax.prototype.commands.kimberly_result = function( ajax, response, status ) {
    
  }
    
})(jQuery);