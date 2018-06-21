jQuery( document ).ready(function() {
   jQuery(".agree-button").click(function(){
     var baseUrl = window.location.origin;
       jQuery.ajax({
        url: baseUrl + '/getip',
            //url: baseUrl,
            async: false,
            type: 'post',
            //data: 'image='+image_name+'&date='+copiedEventObject.start+'&user_id='+currentUser,
            success: function(res){ //alert(res);
             console.log(res);
            },
            error: function(jqXHR, data, error){
                // console.log(jqXHR);
                // console.log(data);
                // console.log(error);,gmg.m;gmhftl.jcfxgmcx.,g ;ldrt
            }
        });
   });
});