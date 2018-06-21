<?php 
global $base_path;
$logo = theme_get_setting('logo')
?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
<title><?php print $site_name = variable_get('site_name'); ?></title>
<link rel="shortcut icon" href="<?php print $logo; ?>" type="image/png" />
<link href="css/style.css" rel="stylesheet" type="text/css" />
<style type="text/css">
  /* CSS Document */
body{ margin:0px; font-family:'Calibri'; font-size:25px;}
#wrp{ margin:auto; width:1000px; height:500px;}
h1{ text-align:center; font-size:26px; font-weight:bold; margin:0px; padding-bottom:20px;padding-top: 10px;}

.thumb-img{ text-align:center;  width:800px; margin:auto;  }
.para{  width:857px;   margin:auto; text-align:center;}
.para p{ padding:0px; margin:0px;}
.hspr{ height:12px;}
.link{ color:#0066FF;}
.thumnail-wrap{  text-align:center;  width:800px; margin:auto; height:90px; }
.thumnail{ float:left;}


</style>
</head>

<body>
<div id="wrap">

<div class="thumb-img"> 
<img src="<?php print $base_path; ?>sites/all/themes/mema/images/maintenance-logo/Picture1.png" width="400" /><br />
<div class="thumnail-wrap">
<img src="<?php print $base_path; ?>sites/all/themes/mema/images/maintenance-logo/aasa.png" width="100" /><img src="<?php print $base_path; ?>sites/all/themes/mema/images/maintenance-logo/hdma.png"  width="100"   /><img src="<?php print $base_path; ?>sites/all/themes/mema/images/maintenance-logo/mera.png"  width="100" /><img src="<?php print $base_path; ?>sites/all/themes/mema/images/maintenance-logo/oesa.png"   width="100"/>
</div>

</div>
<div class="para">

<p>Please pardon the inconvenince, we are preforming site maintenance and the websites should be up soon </p>
<div class="hspr"></div>
<p>If you need industry information or to register for an upcoming event or meeting,</p>
<p> we will be happy to assist you via email at <a href="mailto:info@mema.org">info@mema.org</a> or call us at:</p>
<div class="hspr"></div>
<p>AASA | 919-549-4800</p>
<p>HDMA | 919-406-8847</p>
<p>MERA | 248-750-1280</p>
<p>MFSG | 919-406-8821</p>
<p>OESA | 248-952-6401</p>
<p>MEMA Headquarters  | 919-549-4800</p>
<p>MEMA Government Affairs | 202-393-6362</p>

</div>
</div>



</body>
</html>
