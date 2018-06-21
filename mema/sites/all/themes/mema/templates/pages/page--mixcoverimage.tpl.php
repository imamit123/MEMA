<?php

/**
 * @file - News Detail page 
 *   Add Cover background image and Add page Title.
 **/

$functions = GAI::getInstance();
$img_url = '';
$file_uri = $functions->gtGetFileURI('background_image', 'field_data_field_bi_advocacy_basic_page');
foreach ($file_uri as $key => $value) {
 $image_uri = $value->uri;
}
$style = 'cover_background_image';
if(!empty($image_uri) && !is_null($image_uri)) {
    $img_url = image_style_url($style, $image_uri);
}
?> <!-- Fetch image to set bg -->

<div class="main-video-wrapper">

   <div class="top-container">
 <div class="cover-background-image" style="background-image: url('<?php print $img_url; ?>')">  
<?php if (!empty($page['navigation'])): ?>
  <div class="container">
    <div class= "top-header">
      <?php print render($page['navigation']); ?>
    </div>
  </div>
<?php endif; ?>

    <div class="header-strip"></div>
    <header id="navbar" role="banner" class="navbar">
      <div>
        <div class="navbar-header">
          <?php if ($logo): ?>
          <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
          </a>
          <?php endif; ?>
      <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
          <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
            <span class="sr-only">Toggle navigation</span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
          </button>
        </div>
        <div class="site-name">
        <span class="slogan">
          <?php if (!empty($site_slogan)): ?>
      <p class="lead1"><?php print $site_slogan; ?></p>
      <?php endif; ?>
         </span>
         <span class="sitename">
          <?php if (!empty($site_name)): ?>
          <!--<a class="name navbar-brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">--><?php print $site_name; ?><!--</a>-->
           <?php endif; ?>
         </span>
       </div>
      <!-- render menubar region -->
         <?php if (!empty($page['menubar'])): ?>    
          <div class="navbar-collapse collapse">
            <nav role="navigation">
              <div class="header-menu">
                <?php print render($page['menubar']); ?>
              </div> <!-- /#menubar -->
            </nav>
          </div>
         <?php endif; ?>
       </div>
    </header>   <!-- page title -->
              <?php if (!empty($title)): ?>            
          <h1 class="page-header"><?php print $title; ?></h1>
          <?php endif; ?>
    </div>
<div class="main-wrapper-container">
    <div class="main-container">

    <div class="responsive-container"> 

     <header role="banner" id="page-header">
      <?php print render($page['header']); ?>
      </header> <!-- /#page-header -->
      <div class="row-custom">
        <?php if (!empty($page['sidebar_first'])): ?>
        <aside class="col-sm-3" role="complementary">
          <?php print render($page['sidebar_first']); ?>
        </aside>  <!-- /#sidebar-first -->
      <?php endif; ?>

        <section<?php print $content_column_class; ?>>
          <?php if (!empty($page['highlighted'])): ?>
          <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
          <?php endif; ?>
          <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
          <a id="main-content"></a>
          <?php print render($title_prefix); ?>


          <?php print render($title_suffix); ?>
          <?php print $messages; ?>
          <?php if (!empty($tabs)): ?>
          <?php print render($tabs); ?>
          <?php endif; ?>
          <?php if (!empty($page['help'])): ?>
          <?php print render($page['help']); ?>
          <?php endif; ?>
          <?php if (!empty($action_links)): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
          <?php endif; ?>
          <?php print render($page['content']); ?>
        </section>
        <?php if (!empty($page['sidebar_second'])): ?>
        <aside class="col-sm-3" role="complementary">
          <?php print render($page['sidebar_second']); ?>
        </aside>  <!-- /#sidebar-second -->
        <?php endif; ?>
      </div>
    </div>
  </div>
</div>
</div>
</div>
<footer class="footer">
  <?php print render($page['footer']); ?>
</footer>
