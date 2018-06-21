<!Doctype Html>
<html>
  <head>
    <title>Group Logout</title>
    <style>
      body{
	      width:100%;
	      margin:0;
      	padding:0;
      }

      .main{
	      width:100%;
	      background-color:  #ececec;
        height: 100%;
      }

      .header_resize{
	      width:960px;
	      margin:0 auto;
	      color:#000;
      }

      #head{
	      font-family: arial;
	      font-size: 30px;
	      text-align: center;
	      padding-top: 2em;
        display: block;
        width: 100%;
      }

      .contents{
	      margin:0 auto;
	      padding-left:7em;
	      width:100%;
      }

      .top{
	      display:inline-block;
        width:30%;
        padding:73px 0;
      }
      @media all and (max-width: 767px) {
        .header_resize {
          width: 100%;
          margin: 0 auto;
          color: #000;
        }
        .contents{
          padding-left: 0;
        }
        .top {
          width: 48%;
          padding: 1em 0;
        }
      }
    </style>
  </head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width">
  <body>
    <?php
      if ($_SERVER['HTTP_REFERER'] != "https://mema.force.com/secur/logout.jsp") {
        header('Location: https://mema.org');
        exit;
      }
    ?>
    <div class="main">
      <div class="header_resize">
   	    <h1 id="head">You have been Logged Out </h1>
        <div class="contents">
          <div class="top">
 	          <a href="https://mema.org">
 	            <img src="sites/all/themes/mema/images/logos/mema_logo.png">	
 	          </a>
          </div>
          <div class="top">
  	        <a href="https://hdma.org">
    	        <img src="sites/all/themes/mema/images/logos/hdma.png">	
            </a>
          </div>
          <div class="top">
    	      <a href="https://www.aftermarketsuppliers.org">
  	          <img src="sites/all/themes/mema/images/logos/aasa.png">	
            </a>
          </div>
          <div class="top">
    	      <a href="https://www.mera.org">
  	          <img src="sites/all/themes/mema/images/logos/mera_0.png">	
            </a>
          </div>
          <div class="top">
    	      <a href="https://www.memafsg.com">
  	          <img src="sites/all/themes/mema/images/logos/MFSG%20Logo_1.png">	
            </a>
          </div>
          <div class="top">
    	      <a href="https://www.oesa.org">
  	          <img src="sites/all/themes/mema/images/logos/oesa.png">	
            </a>
          </div>
        </div>
      </div>
    </div>	
  </body>
</html>
