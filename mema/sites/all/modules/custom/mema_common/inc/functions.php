<?php
/**
 * This file contains all the commonly used utility functions.
 * @author
 *  Atul Kumar Sharma -sharma_atul40@yahoo.co.in
 */

// include database file
require_once("database.php");

class GAI {

  private static $instance;

  // variable to set system environment i.e local, dev, stag, prod.
  private static $environment;

  // variable to hold system key used for handshaking in case of critical functions.
  private static $system_key = 'Ab8STGJ#Bs28dg$6%^*!57ADsdd*@gRSkiq';

  private function __construct() {}

  public function __clone()
  {
    trigger_error('Clone is not allowed.', E_USER_ERROR);
  }

  public static function getInstance() {
    if(!isset(self::$instance)) {
      $c = __CLASS__;
      self::$instance = new $c;
      $env = variable_get('environment', 'prod');
      self::gtSetEnvironment($env);
    }
    return self::$instance;
  }

  /**
   * Implements set function for system key
   */
  public function gtSetSystemKey($key) {
      self::$system_key = $key;
  }

  /**
   * Implements get function for system key
   */
  public function gtGetSystemKey() {
    return self::$system_key;
  }

  /**
   * Function to set system environment
   *
   * @return
   *  Boolean 1 if success, 0 if failed
   */
  public static function gtSetEnvironment($env) {
    if(array_search($env, array('local', 'dev', 'stag', 'prod')) !== FALSE) {
      self::$environment = $env;
      return 1;
    } else {
      return 0;
    }
  }

  /**
   * Function to get system environment
   */
  public function gtGetEnvironment() {
    return self::$environment;
  }

  /**
   *  Function to get all urls
   *
   * @return
   *  Associative Array $urls
   *  array of all divisions and MEMA url for current environment
   */
  public function gtGetAllUrls() {
     $env = self::$environment;
     $urls = array();
    switch ($env) {
      case 'local' :
        $urls['mema'] = 'http://local-mema.org';
        $urls['aasa'] = 'http://local-aasa.org';
        $urls['hdma'] = 'http://hdma.org';
        $urls['mera'] = 'http://local-mera.org';
        $urls['mfsg'] = 'http://mfsg.org';
        $urls['oesa'] = 'http://local-oesa.org';
        break;
      case 'dev' :
        $urls['mema'] = 'http://memadev.taoti.com';
        $urls['aasa'] = 'http://dev.aftermarketsuppliers.org.373elmp01.blackmesh.com';
        $urls['hdma'] = 'http://dev.hdma.org.373elmp01.blackmesh.com';
        $urls['mera'] = 'http://meradev.taoti.com';
        $urls['mfsg'] = 'http://dev.memafsg.com.373elmp01.blackmesh.com';
        $urls['oesa'] = 'http://oesadev.taoti.com';
        break;
      case 'stag' :
        $urls['mema'] = 'http://stage.mema.org.373elmp01.blackmesh.com';
        $urls['mema1'] = 'https://memastage.taoti.com';
        $urls['aasa'] = 'http://stage.aftermarketsuppliers.org.373elmp01.blackmesh.com';
        $urls['aasa1'] = 'https://aasastage.taoti.com';
        $urls['hdma'] = 'http://stage.hdma.org.373elmp01.blackmesh.com';
        $urls['hdma1'] = 'https://hdmastage.taoti.com';
        $urls['mera'] = 'http://stage.mera.org.373elmp01.blackmesh.com';
        $urls['mera1'] = 'https://merastage.taoti.com';
        $urls['mfsg'] = 'http://stage.memafsg.com.373elmp01.blackmesh.com';
        $urls['mfsg1'] = 'https://memafsgstage.taoti.com';
        $urls['oesa'] = 'http://stage.oesa.org.373elmp01.blackmesh.com';
        $urls['oesa1'] = 'https://oesastage.taoti.com';
        break;
      case 'prod' :
        $urls['mema'] = 'https://www.mema.org';
        $urls['mema1'] = 'https://memaprod.taoti.com/';
        $urls['aasa'] = 'https://www.aftermarketsuppliers.org/';
        $urls['aasa1'] = 'https://aasaprod.taoti.com/';
        $urls['hdma'] = 'https://www.hdma.org';
        $urls['hdma1'] = 'https://hdmaprod.taoti.com/';
        $urls['mera'] = 'https://www.mera.org';
        $urls['mera1'] = 'https://meraprod.taoti.com/';
        $urls['mfsg'] = 'https://www.memafsg.com';
        $urls['mfsg1'] = 'https://memafsgprod.taoti.com/';
        $urls['oesa'] = 'https://www.oesa.org';
        $urls['oesa1'] = 'https://oesaprod.taoti.com/';
        break;
    }
    return $urls;
  }

  /**
   * function to get all sites folder name
   *
   * @param
   *  String $site name of site whose folder is wanted
   *
   * @return
   *  String/Array if no argument then return full array else specific site folder
   */
  public function gtGetSiteFolder($site = '') {
    if($site != '') {
      $site = strtolower($site);
      if(!in_array($site, array('mema', 'aasa', 'hdma', 'mera', 'mfsg', 'oesa'))) {
        return 0;
      }
    }

    $foldr['mema'] = 'default';
    $foldr['aasa'] = 'aftermarketsuppliers.org';
    $foldr['hdma'] = 'hdma.org';
    $foldr['mera'] = 'mera.org';
    $foldr['mfsg'] = 'memafsg.com';
    $foldr['oesa'] = 'oesa.org';

    if($site == '') {
      return $foldr;
    } else {
      return $foldr[$site];
    }
    return 0;
  }

  /**
   * Implements watchdog entry function
   *
   * @param
   *  String $msg, message for watchdog entry
   *  Constant $severity, defines the entry severity
   */
  public function gtWatchdog($msg, $severity = WATCHDOG_ERROR) {
    watchdog('mema_common', $msg, array(), $severity, NULL);
  }

  /**
   * Implements function to get URI of a file for any content type
   */
  public function gtGetFileURI($bundle, $fld_tbl) {
    $database = DB::dbInstance();

    $tbl = 'node';
    $conditions = array('type' => $bundle, 'status' => 1);
    $fld_name = trim(substr($fld_tbl, 11) . '_fid');

    $joins[] = array(
      'tbl' => $fld_tbl,
      'alias' => 'fbv',
      'on' => "fbv.entity_id = tbl.nid",
      'fields' => array($fld_name),
    );
    $joins[] = array(
      'tbl' => 'file_managed ',
      'alias' => 'fm',
      'on' => "fm.fid = fbv.$fld_name",
      'fields' => array('uri'),
    );

    return $database->dbSelectWithJoin($tbl, $joins, $conditions);
  }

  /**
   * Function to get all homepage features nodes along
   * with there position.
   *
   * @return
   *  Resultset $database
   */
  public function gtGetAllHomepageFeatureNodesPosition() {
    $database = DB::dbInstance();
    $tbl = 'field_data_field_position';
    $condition_flds = array('bundle' => 'homepage_feature');
    $flds_to_select = array('field_position_value','entity_id');
    return $database->dbConditionalSelect($tbl, $condition_flds, $flds_to_select);
  }

  /**
   * Function to check if node of a particular type exists or not
   *
   * @param
   *  String $type type of node
   *
   * @return
   *  Boolean 1 if exists; 0 if not
   */
  public function gtIfNodeExists($type = '') {
    if($type == '') {
      return 0;
    }

    $database = DB::dbInstance();

    $tbl = 'node';
    $conditions = array('type' => $type, 'status' => 1);
    $fld_name = array('nid');
    $node_exists = $database->dbConditionalRecordCount($tbl, $conditions, $fld_name);

    if($node_exists) {
      return 1;
    } else {
      return 0;
    }
  }

  /**
   * Implements function to get title,date and body from event and article content type
   */
  public function gtGetFCBContent() {
    //Fetch two Article node near by current date.
    $article_query_fetch = db_query("SELECT n.nid, n.title, db.body_value, ad.field_article_date_value
                                     FROM node n
                                     JOIN field_data_body db ON db.entity_id = n.nid
                                     JOIN field_data_field_article_date ad ON ad.entity_id = n.nid
                                     WHERE (( (n.status = '1') AND (n.type IN  ('article'))
                                     AND (DATE_FORMAT(ad.field_article_date_value, '%Y-%m-%d') >= NOW())))
                                     ORDER BY  ad.field_article_date_value ASC LIMIT 2");
    foreach ($article_query_fetch as $key => $value) {
      $date = strtotime($value->field_article_date_value) ;
      $article_arr[$date]['nid'] = $value->nid ;
      $article_arr[$date]['title'] = $value->title ;
      $article_arr[$date]['body'] =$value->body_value ;
      $article_arr[$date]['date'] = $date;
    }

    //Fetch two Small Event and Large Event node near by current date.
    $event_query_fetch = db_query("SELECT n.nid, n.title, db.body_value, ed.field_event_date_value, sest.field_small_event_short_title_value, lest.field_large_event_short_title_value
                                   FROM node n
                                   JOIN field_data_body db ON db.entity_id = n.nid
                                   JOIN field_data_field_event_date ed ON ed.entity_id = n.nid
                                   LEFT JOIN field_data_field_large_event_short_title lest ON lest.entity_id = n.nid
                                   LEFT JOIN field_data_field_small_event_short_title  sest ON sest.entity_id = n.nid
                                   WHERE (( (n.status = '1') AND (n.type IN  ('large_event', 'small_event'))
                                   AND (DATE_FORMAT(FROM_UNIXTIME(ed.field_event_date_value), '%Y-%m-%d') >= NOW()) ))
                                   ORDER BY ed.field_event_date_value ASC LIMIT 2");
    foreach ($event_query_fetch as $key => $value) {
      $date = $value->field_event_date_value ;
      $article_arr[$date]['nid'] =  $value->nid ;
      $article_arr[$date]['sest'] = $value->field_small_event_short_title_value ;
      $article_arr[$date]['lest'] = $value->field_large_event_short_title_value ;
      $article_arr[$date]['body'] = $value->body_value ;
      $article_arr[$date]['date'] = $value->field_event_date_value ;
    }

    ksort($article_arr);
    $output = '';
    $article_arr = array_splice($article_arr, 0 , 2, true);
    foreach ($article_arr as $key => $value) {
      $body = strip_tags($value['body']);
      if (strlen($body) > 100) {
        $stringCut = substr($body, 0, 100);
        $body = substr($stringCut, 0, strrpos($stringCut, ' ')) . '... ' .  l('Read More','node/' . $value['nid']) . '</a>';
      }
      $output .= '<div class="sidebar-feature-content-main-wraper">';
      if((!empty($value['date']))){
        $output .= '<div class="sidebar-feature-content-date">' . format_date($value['date'], 'custom', 'F j, Y') . '</div>';
      }
      if((!empty($value['title']) || !empty($value['sest']) || !empty($value['lest']))){
        if((!empty($value['title']))){
          $output .= '<h1 class="sidebar-feature-content-title">' . $value['title'] . '</h1>';
        }
        if((!empty($value['sest']))){
          $output .= '<h1 class="sidebar-feature-content-title">' . $value['sest'] . '</h1>';
        }
        if((!empty($value['lest']))){
          $output .= '<h1 class="sidebar-feature-content-title">' . $value['lest'] . '</h1>';
        }
      }
      if((!empty($body))){
        $output .= '<div class="sidebar-feature-content-body">' . $body . '</div></div> ';
      }
    }
    return $output;
  }

  /**
   * Implements function to check user access to an entity
   *
   * @param
   *  Number $content_id
   *  String $bundle node type / entity type
   *  Number $uid
   *
   * @return
   *  Boolean 1 if access granted, 0 if cant access
   */
  public function gtCheckContentAccess($content_id, $bundle = '', $uid = 0) {
    if(user_is_logged_in()) {
      global $user;
      if($user->uid == 1) {
        return TRUE;
      }
    }

    $database = DB::dbInstance();

    // get user badges list
    if($uid) {
      $usr_badges = $this->gtGetEntityBadges('user', 'user', $uid);
    } else {
      $usr_badges = $this->gtGetEntityBadges('user', 'user');
    }

    // get entity bundle
    if($bundle == '') {
      $tbl = 'node';
      $condition_flds = array('nid' => $content_id);
      $bundle = $database->dbGetFieldValue($tbl, $condition_flds, 'type');
    }

    // check if any badge exists for the node
    $condition_flds = array('entity_type' => 'node',
      'bundle' => $bundle,
      'entity_id' => $content_id);
    $badge_exists = $database->dbConditionalRecordCount('field_data_field_sf_badge', $condition_flds, array('entity_id'));
    if($badge_exists) {
      // get content badges
      $content_badges = $this->gtGetEntityBadges('node', $bundle, $content_id);
      $access = array_intersect($usr_badges, $content_badges);

      if(count($access)) {
        return TRUE;
      }
    } else {
      // return 1 if no badge restriction added - its open for all to access
      return TRUE;
    }

    return FALSE;
  }

  /**
   * function to return badges of an entity
   *
   * @param
   *  Integer $uid - User ID
   *
   * @return
   *  Associative Array $badges, entity badges array
   */
  private function gtGetEntityBadges($entity_type, $bundle, $entity_id = 0) {
    $database = DB::dbInstance();
    $badges = array();

    if($entity_type == 'user' && !$entity_id) {
      global $user;
      $entity_id = $user->uid;
    }

    // query databse to get badges
    $tbl = 'field_data_field_sf_badge';
    $condition_flds = array('entity_type' => $entity_type,
      'bundle' => $bundle,
      'entity_id' => $entity_id);
    $flds_to_select = array('field_sf_badge_tid');
    $rs_array = $database->dbConditionalSelect($tbl, $condition_flds, $flds_to_select);

    if(count($rs_array)) {
      foreach($rs_array as $v) {
        $badge_tid = $v['field_sf_badge_tid'];
        $tmp = taxonomy_term_load($badge_tid);
        $badges[$badge_tid] = $tmp->name;
      }
    }

    return $badges;
  }

  /**
   * Implements function to sync Salesforce badges to Badge Vocabulary
   *
   * @see
   *  mema_common_cron()
   */
  public function gtSyncSFBadges() {
    $database = DB::dbInstance();

    // load all badges from salesforce
    $sf_badges = $this->gtGetSFBadges();
    $sf_badges_keys = array_keys($sf_badges);
    sort($sf_badges_keys);

    // load all badges from Drupal

    // get VID for the Badge vocabulary
    $tbl = 'taxonomy_vocabulary';
    $condition_flds = array(
      'machine_name' => 'badge',
    );
    $vid = $database->dbGetFieldValue($tbl, $condition_flds, 'vid');

    $sys_badges = $this->gtGetBadges($vid);
    $sys_badges_keys = array_keys($sys_badges);
    sort($sys_badges_keys);

    // get all badges that are in SF and not in drupal
    $additional_sf_badges = array_diff($sf_badges_keys, $sys_badges_keys);
    foreach($additional_sf_badges as $v) {
      // $v has the badge ID
      // save additional Badges from SF into Badge Vocab in drupal
      $term = array(
        'name' => $sf_badges[$v]['name'],
        'vid' => $vid,
      );
      taxonomy_term_save( (object) $term);
    }

    // Delete badges from Drupal that are not in SF
    $obsolete_badges = array_diff($sys_badges_keys, $sf_badges_keys);
    foreach ($obsolete_badges as $v) {
      $tid = $sys_badges[$v]['tid'];
      taxonomy_term_delete($tid);
    }
  }

  /**
   * Implements function to get Salesforce Badges
   */
  public function gtGetSFBadges() {
    // get salesforce API object
    $sfapi_obj = salesforce_get_api();

    // frame SOQL to get badges
    /*$sf_soql = new SalesforceSelectQuery('OrderApi__Badge_Type__c');
    $sf_soql->fields = array('Name', 'OrderApi__Badge_Type__R.Name');
    $sf_soql->addCondition('OrderApi__Is_Active__c', 'TRUE');
    $sf_qry_result = $sfapi_obj->query($sf_soql);*/
    $sf_soql = new SalesforceSelectQuery('OrderApi__Badge_Type__c');
    $sf_soql->fields = array('Name');
    $sf_qry_result = $sfapi_obj->query($sf_soql);

    $total_badges = $sf_qry_result['totalSize'];
    $sf_badges = array();

    // loop all the badges
    if(is_array($sf_qry_result['records']) && count($sf_qry_result['records'])) {
      // loop all users to import them into drupal
      foreach($sf_qry_result['records'] as $val) {
        $bname = trim($val['Name']);
        $sf_badges[$bname] = array('name' => $bname);
      }
    }
    return $sf_badges;
  }

  /**
   * Implements function to return drupal's Badge Vocab terms
   *
   * @param
   *  Number $vid vocabulary ID
   */
  public function gtGetBadges($vid) {
    $database = DB::dbInstance();
    $badges = array();

    // select all term for Badge Vocab
    $tbl = 'taxonomy_term_data';
    $conditions = array(
      'vid' => $vid,
    );
    $flds_to_select = array('name', 'tid');

    $rs = $database->dbConditionalSelect($tbl, $conditions, $flds_to_select);
    if(count($rs)) {
      foreach($rs as $v) {
        $badge_name = trim($v['name']);
        $badge_tid = $v['tid'];
        $badges[$badge_name] = array('name' => $badge_name, 'tid' => $badge_tid);
      }
    }
    return $badges;
  }

  /**
  *  Implements function to get term ID by name
  *
  * @param
  *  String $term_name name of the term to search for
  *  String $vocab_name (optional) vocabulary machine name to look into
  *
  * @return
  *  Array of matched term ID's
  */
  public function gtGetTermIdFromName($term_name = NULL, $vocab_name = NULL) {
    if(is_null($term_name)) {
      return 0;
    }
    return array_keys(taxonomy_get_term_by_name($term_name, $vocab_name));
  }

 /**
  *  Implements function to get Cover Image Path for views list page.
  *
  * @param
  *  String $delta name of the views mechine name
  *
  * @return
  *  Image URL or 0 if no image found
  */
  public function gtCoverImage($delta){
    $functions = GAI::getInstance();
    $img_url = '';
    switch ($delta) {
      case 'board_executive_satff':
        $file_uri = $functions->gtGetFileURI('background_image', 'field_data_field_bl_team_page');
      break;
      case 'news_listing_page':
      case 'article':
      case 'advocacy_blog':
      case 'article_newsletter_'.arg(2):
        $file_uri = $functions->gtGetFileURI('background_image', 'field_data_field_bl_news_page');
      break;
      case 'events':
      case 'large_event':
      case 'small_event':
        $file_uri = $functions->gtGetFileURI('background_image', 'field_data_field_bl_event_page');
      break;
      case 'councils_and_forums':
      case 'committee':
        $file_uri = $functions->gtGetFileURI('background_image', 'field_data_field_bl_committee_page');
      break;
      case 'page':
      case 'webform':
      case 'room_reservations_category':
      case 'room_reservations_reservation':
      case 'room_reservations_room':
        $file_uri = $functions->gtGetFileURI('background_image', 'field_data_field_bi_advocacy_basic_page');
      break;
      case 'resource':
        $file_uri = $functions->gtGetFileURI('background_image', 'field_data_field_bl_resource_page');
      break;
    }
    //$obj = $file_uri->fetchObject();
   //if (is_object($obj)) {
    //  $image_uri = $obj->uri;
   // }
    if(is_object($file_uri)) {
      while($obj = $file_uri->fetchObject()) {
        $image_uri = $obj->uri;
      }
    }

    $style = 'cover_background_image';
    if(!empty($image_uri) && !is_null($image_uri)) {
      $img_url = image_style_url($style, $image_uri);
      return $img_url;
    }
    else {
      return 0;
    }
  }

  /**
  *  Implements function to default landing page Image Path for views list page.
  *
  * @param
  *  String $delta name of the views mechine name
  *
  * @return
  *  Image URL or 0 if no image found
  */
  public function gtdefaultImage($delta){
    $functions = GAI::getInstance();
    $img_url = '';
    switch ($delta) {
      case 'article':
      case 'events':
      case 'councils_and_forums':
        $file_uri = $functions->gtGetFileURI('background_image', 'field_data_field_landing_page_default_image');
      break;
    }
    $obj = $file_uri->fetchObject();
    if (is_object($obj)) {
      return  $image_uri = $obj->uri;
    }else {
      return 0;
    }
  }

  /**
   * Implements function to check for redirection on Access Denied
   *
   * @return
   *   Number : 1 for redirection to login page, 0 show access denied page
   */
  public function gtCheckSSORedirection() {
    // if user is logged in
    if(user_is_logged_in()) {
      if(isset($_COOKIE['mema_do_sso_redirection'])) {
        // delete sso redirect cookie to avoid any erro chance
        $cookiePath = "/";
        setcookie("mema_do_sso_redirection", NULL, time()-3600, $cookiePath);
        unset ($_COOKIE['mema_do_sso_redirection']);
      }
      return 0;
    } else {
      // check if SSO login redirection cookie is set or not
      // if set : then display access denied
      // if not set : then set redirection cookie and send user for login
      if(isset($_COOKIE['mema_do_sso_redirection'])) {
        return 0;
      } else {
        $referer = $_SERVER['REQUEST_URI'];
        // if($referer == '') {
        //   $referer = $_SERVER['HTTP_REFERER'];
        // }
        $cookiePath = "/";
        // set the cookie to expire in 5 minutes.
        $cookieExpire = time() + (60*5);
        $_SESSION['mema_do_sso_redirection'] = $referer;
        setcookie("mema_do_sso_redirection",$referer,$cookieExpire,$cookiePath);
        return 1;
      }
    }
  }

  /**
   * Function to return formated content for Featured Content Block
   */
  public function gtGetFormattedFCBlk($tmp_date, $tmp_title, $tmp_desc, $tmp_link, $tmp_link_target) {
    if($tmp_link != '') {
      if ($tmp_link_target == 1 || $tmp_link_target === "_blank") {
        $tmp_link = l(t('Read More'), $tmp_link, array('html' => true, 'attributes' => array('target' => '_blank')));
      } else {
        $tmp_link = l(t('Read More'), $tmp_link, array('html' => true));
      }
    }
    $all_empty = 1;
    $out_put = '';

    if(!empty($tmp_date)) {
      $out_put .= "<div class = 'fc-date fc-item'>$tmp_date</div>";
      $all_empty = 0;
    }

    if(!empty($tmp_title)) {
      $out_put .= "<div class = 'fc-title fc-item'>$tmp_title</div>";
      $all_empty = 0;
    }

    if(!empty($tmp_desc)) {
      $out_put .= "<div class = 'fc-desc fc-item'>$tmp_desc</div>";
      $all_empty = 0;
    }

    if(!empty($tmp_link)) {
      $out_put .= "<div class = 'fc-link fc-item'>$tmp_link</div>";
      $all_empty = 0;
    }

    $out = '';
    if(!$all_empty) {
      $out .= "<div class = 'fc-blk-sub-wrapper'>";
      $out .= $out_put;
      $out .= "</div>";
    }
    return $out;
  }

  /**
   * Implements function to Drop table from DB
   */
  public function gtDropTable($tbl) {
    $database = DB::dbInstance();
    return $database->dbDropTable($tbl);
  }

  /**
  *  Add a node type(Article) in a queue.
  *
  * @param
  *  $node Array of current node.
  *
  * @see
  *   Rule created to call this function on addition of article node.
  */
  public function gtArticleTypeInNodequeue($node) {
    if($node->field_add_to_nodequeue['und'][0]['value'] == 1) {
      $tid = $node->field_article_type['und'][0]['tid'];
      $has_parent = taxonomy_get_parents($tid);
      $database = DB::dbInstance();
      $tbl = 'taxonomy_term_data';
      $condition_flds = array(
        'tid' => $tid,
      );
      $term_name = $database->dbGetFieldValue($tbl, $condition_flds, 'name');
      $term_name = strtolower(str_replace(" ","_",$term_name));
      $nodequeue_name = "newsletter_" . $term_name;
      // if term has parents, add term to article type nodequeue
      if(!empty($has_parent)) {
        if ($nodequeue = nodequeue_load_queue_by_name($nodequeue_name)) {
          $queue = nodequeue_load($nodequeue->qid);
          $subqueue = nodequeue_load_subqueue($nodequeue->qid);
          nodequeue_subqueue_add($queue, $subqueue, $node->nid);
        }
      } else {
        if ($nodequeue = nodequeue_load_queue_by_name('news')) {
          $queue = nodequeue_load($nodequeue->qid);
          $subqueue = nodequeue_load_subqueue($nodequeue->qid);
          nodequeue_subqueue_add($queue, $subqueue, $node->nid);
        }
      }
    }
  }

  /**
   * Add/update a node type(Article) in a queue.
   *
   * @param
   *   $node Array of current node .
   *
   * @see
  *   Rule created to call this function on update of article node.
   */
  public function gtArticleUpdateInNodequeue($node) {
    if($node->field_add_to_nodequeue['und'][0]['value'] == 1) {
      //currnt page
      $tid = $node->field_article_type['und'][0]['tid'];
      $has_parent = taxonomy_get_parents($tid);
      $database = DB::dbInstance();
      $tbl = 'taxonomy_term_data';
      $condition_flds = array(
        'tid' => $tid,
      );
      $term_name = $database->dbGetFieldValue($tbl, $condition_flds, 'name');
      $term_name = strtolower(str_replace(" ","_",$term_name));
      $nodequeue_name = "newsletter_" . $term_name;

      //after update original node.
      $tid_ori = $node->original->field_article_type['und'][0]['tid'];
      $has_parent_ori = taxonomy_get_parents($tid_ori);
      $database = DB::dbInstance();
      $tbl1 = 'taxonomy_term_data';
      $condition_flds1 = array(
        'tid' => $tid_ori,
      );
      $term_name_ogi = $database->dbGetFieldValue($tbl1, $condition_flds1, 'name');
      $term_name_ogi = strtolower(str_replace(" ","_",$term_name_ogi));
      $nodequeue_name_ori = "newsletter_" . $term_name_ogi;
      if(!empty($has_parent)){
        if ($nodequeue = nodequeue_load_queue_by_name($nodequeue_name)) {
          $queue = nodequeue_load($nodequeue->qid);
          $subqueue = nodequeue_load_subqueue($nodequeue->qid);
          nodequeue_subqueue_add($queue, $subqueue, $node->nid);
        }
      }else{
        if ($nodequeue = nodequeue_load_queue_by_name('news')) {
          $queue = nodequeue_load($nodequeue->qid);
          $subqueue = nodequeue_load_subqueue($nodequeue->qid);
          nodequeue_subqueue_add($queue, $subqueue, $node->nid);
        }
      }
     // Remove nodequeue when update node
      if(!empty($has_parent_ori)){
        if ($nodequeue = nodequeue_load_queue_by_name($nodequeue_name_ori)) {
          $queue = nodequeue_load($nodequeue->qid);
          $subqueue = nodequeue_load_subqueue($nodequeue->qid);
          nodequeue_subqueue_remove_node($subqueue->sqid, $node->nid);
        }
      }else{
        if ($nodequeue = nodequeue_load_queue_by_name('news')) {
          $queue = nodequeue_load($nodequeue->qid);
          $subqueue = nodequeue_load_subqueue($nodequeue->qid);
          nodequeue_subqueue_remove_node($subqueue->sqid, $node->nid);
        }
      }
    }
  }

  /**
   * Function to Create Newsletter list page Views linked with nodequeue.
   * @param $tid
   *   Term id form views filter path.
   * @param $termname
   *   Term name form views humen name
   * @return $view
   *   Return $views Array.
   */
  public function gtViewsForNewsletterList($tid, $termname, $article_title) {
    $term_name = strtolower(str_replace(" ", "_", $termname));
    $term_name = "newsletter_" . $term_name;
    $myarray=taxonomy_get_parents_all($tid);
    $Pname = $myarray[1]->name;
    if($Pname == 'Newsletter'){
      $pid = $myarray[1]->tid;
    }
    $view = new view();
    $machine_name = "article_newsletter_" . $tid;
    $human_name = "Article Newsletter " . $tid;
    $view->name = $machine_name;
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = $human_name;
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'full';
    $handler->display->display_options['pager']['options']['items_per_page'] = '10';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['pager']['options']['id'] = '0';
    $handler->display->display_options['pager']['options']['quantity'] = '9';
    $handler->display->display_options['pager']['options']['tags']['first'] = '« ';
    $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ ';
    $handler->display->display_options['pager']['options']['tags']['next'] = ' ›';
    $handler->display->display_options['pager']['options']['tags']['last'] = ' »';
    $handler->display->display_options['style_plugin'] = 'default';
    $handler->display->display_options['row_plugin'] = 'fields';
    $handler->display->display_options['row_options']['hide_empty'] = TRUE;
    /* Header: Global: Text area */
    $handler->display->display_options['header']['area']['id'] = 'area';
    $handler->display->display_options['header']['area']['table'] = 'views';
    $handler->display->display_options['header']['area']['field'] = 'area';
    $handler->display->display_options['header']['area']['content'] = '<p style ="margin-top: 5px; text-align:right;width:100%;">
    <a href="/news/newsletter/'.$tid.'/feed"><i class="fa fa-rss"></i></a>
    </p>';
    $handler->display->display_options['header']['area']['format'] = 'full_html';
    $handler->display->display_options['header']['area']['tokenize'] = TRUE;
    /* No results behavior: Global: Text area */
    $handler->display->display_options['empty']['area']['id'] = 'area';
    $handler->display->display_options['empty']['area']['table'] = 'views';
    $handler->display->display_options['empty']['area']['field'] = 'area';
    $handler->display->display_options['empty']['area']['empty'] = TRUE;
    $handler->display->display_options['empty']['area']['content'] = 'No Content Are Found';
    $handler->display->display_options['empty']['area']['format'] = 'full_html';
    /* Relationship: Nodequeue: Queue */
    $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
    $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
    $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
    $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
    $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
      $term_name => $term_name,
      'team_staff' => 0,
      'team_board' => 0,
      'homepage_hero' => 0,
      'councils_landing_page_sort' => 0,
      'events' => 0,
      'news' => 0,
      'resources' => 0,
      'recommended' => 0,
    );
    /* Field: Content: Nid */
    $handler->display->display_options['fields']['nid']['id'] = 'nid';
    $handler->display->display_options['fields']['nid']['table'] = 'node';
    $handler->display->display_options['fields']['nid']['field'] = 'nid';
    $handler->display->display_options['fields']['nid']['label'] = '';
    $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
    $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = '';
    $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
    $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
    /* Field: Content: Article Date */
    $handler->display->display_options['fields']['field_article_date']['id'] = 'field_article_date';
    $handler->display->display_options['fields']['field_article_date']['table'] = 'field_data_field_article_date';
    $handler->display->display_options['fields']['field_article_date']['field'] = 'field_article_date';
    $handler->display->display_options['fields']['field_article_date']['label'] = '';
    $handler->display->display_options['fields']['field_article_date']['exclude'] = TRUE;
    $handler->display->display_options['fields']['field_article_date']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_article_date']['settings'] = array(
      'format_type' => 'article',
      'fromto' => 'both',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'show_remaining_days' => 0,
    );
    /* Field: Content: Author */
    $handler->display->display_options['fields']['field_article_author']['id'] = 'field_article_author';
    $handler->display->display_options['fields']['field_article_author']['table'] = 'field_data_field_article_author';
    $handler->display->display_options['fields']['field_article_author']['field'] = 'field_article_author';
    $handler->display->display_options['fields']['field_article_author']['label'] = '';
    $handler->display->display_options['fields']['field_article_author']['exclude'] = TRUE;
    $handler->display->display_options['fields']['field_article_author']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_article_author']['click_sort_column'] = 'url';
    $handler->display->display_options['fields']['field_article_author']['type'] = 'link_title_plain';
    /* Field: Global: Custom text */
    $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
    $handler->display->display_options['fields']['nothing']['table'] = 'views';
    $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
    $handler->display->display_options['fields']['nothing']['label'] = '';
    $handler->display->display_options['fields']['nothing']['alter']['text'] = 'PRESS RELEASE | [field_article_date] By [field_article_author]';
    $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
    /* Field: Content: Body */
    $handler->display->display_options['fields']['body']['id'] = 'body';
    $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
    $handler->display->display_options['fields']['body']['field'] = 'body';
    $handler->display->display_options['fields']['body']['label'] = '';
    $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
    $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
    $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'READ MORE';
    $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
    $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
    /* Field: Content: Featured */
    $handler->display->display_options['fields']['field_article_featured']['id'] = 'field_article_featured';
    $handler->display->display_options['fields']['field_article_featured']['table'] = 'field_data_field_article_featured';
    $handler->display->display_options['fields']['field_article_featured']['field'] = 'field_article_featured';
    /* Sort criterion: Content: Updated date */
    $handler->display->display_options['sorts']['changed']['id'] = 'changed';
    $handler->display->display_options['sorts']['changed']['table'] = 'node';
    $handler->display->display_options['sorts']['changed']['field'] = 'changed';
    $handler->display->display_options['sorts']['changed']['order'] = 'DESC';

    /* Filter criterion: Content: Published */
    $handler->display->display_options['filters']['status']['id'] = 'status';
    $handler->display->display_options['filters']['status']['table'] = 'node';
    $handler->display->display_options['filters']['status']['field'] = 'status';
    $handler->display->display_options['filters']['status']['value'] = 1;
    $handler->display->display_options['filters']['status']['group'] = 1;
    $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
    /* Filter criterion: Content: Type */
    $handler->display->display_options['filters']['type']['id'] = 'type';
    $handler->display->display_options['filters']['type']['table'] = 'node';
    $handler->display->display_options['filters']['type']['field'] = 'type';
    $handler->display->display_options['filters']['type']['value'] = array(
      'article' => 'article',
    );
    // /* Filter criterion: Content: Has taxonomy term */
    // $handler->display->display_options['filters']['tid']['id'] = 'tid';
    // $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
    // $handler->display->display_options['filters']['tid']['field'] = 'tid';
    // $handler->display->display_options['filters']['tid']['value'] = array(
    //   86 => '86',
    // );
    $handler->display->display_options['filters']['tid']['type'] = 'select';
    $handler->display->display_options['filters']['tid']['vocabulary'] = 'article_type';

    /* Display: Article Newsletter */
    $handler = $view->new_display('page', 'Article Newsletter', 'page');
    $handler->display->display_options['defaults']['title'] = FALSE;
    $handler->display->display_options['title'] = $article_title;
    $handler->display->display_options['defaults']['pager'] = FALSE;
    $handler->display->display_options['pager']['type'] = 'full';
    $handler->display->display_options['pager']['options']['items_per_page'] = '19';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['pager']['options']['id'] = '0';
    $handler->display->display_options['pager']['options']['quantity'] = '9';
    $handler->display->display_options['pager']['options']['tags']['first'] = '« ';
    $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ ';
    $handler->display->display_options['pager']['options']['tags']['next'] = ' ›';
    $handler->display->display_options['pager']['options']['tags']['last'] = ' »';
    $handler->display->display_options['defaults']['fields'] = FALSE;
    /* Header: Global: Text area */
    $handler->display->display_options['header']['area']['id'] = 'area';
    $handler->display->display_options['header']['area']['table'] = 'views';
    $handler->display->display_options['header']['area']['field'] = 'area';
    $handler->display->display_options['header']['area']['content'] = '<p style ="margin-top: 5px;">
    <a href="news/newsletter/'.$tid.'/feed">
    <i class="fa fa-rss"></i>
    </a>
    </p>';
    $handler->display->display_options['header']['area']['format'] = 'full_html';
    $handler->display->display_options['defaults']['fields'] = FALSE;
    /* Field: Content: Nid */
    $handler->display->display_options['fields']['nid']['id'] = 'nid';
    $handler->display->display_options['fields']['nid']['table'] = 'node';
    $handler->display->display_options['fields']['nid']['field'] = 'nid';
    $handler->display->display_options['fields']['nid']['label'] = '';
    $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
    $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;

    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = '';
    $handler->display->display_options['fields']['title']['exclude'] = TRUE;
    $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
    $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
    /* Field: Content: Body */
    $handler->display->display_options['fields']['body']['id'] = 'body';
    $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
    $handler->display->display_options['fields']['body']['field'] = 'body';
    $handler->display->display_options['fields']['body']['label'] = '';
    $handler->display->display_options['fields']['body']['exclude'] = TRUE;
    $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
    $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
    $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'READ MORE';
    $handler->display->display_options['fields']['body']['alter']['more_link_path'] = 'node/[nid]';
    $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
    $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<br><p>';
    $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['body']['type'] = 'text_plain';
    /* Field: Content: Article Date */
    $handler->display->display_options['fields']['field_article_date']['id'] = 'field_article_date';
    $handler->display->display_options['fields']['field_article_date']['table'] = 'field_data_field_article_date';
    $handler->display->display_options['fields']['field_article_date']['field'] = 'field_article_date';
    $handler->display->display_options['fields']['field_article_date']['label'] = '';
    $handler->display->display_options['fields']['field_article_date']['exclude'] = TRUE;
    $handler->display->display_options['fields']['field_article_date']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_article_date']['settings'] = array(
      'format_type' => 'long',
      'fromto' => 'both',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'show_remaining_days' => 0,
    );
    /* Field: Content: Author */
    $handler->display->display_options['fields']['field_article_author']['id'] = 'field_article_author';
    $handler->display->display_options['fields']['field_article_author']['table'] = 'field_data_field_article_author';
    $handler->display->display_options['fields']['field_article_author']['field'] = 'field_article_author';
    $handler->display->display_options['fields']['field_article_author']['label'] = '';
    $handler->display->display_options['fields']['field_article_author']['exclude'] = TRUE;
    $handler->display->display_options['fields']['field_article_author']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_article_author']['click_sort_column'] = 'url';
    $handler->display->display_options['fields']['field_article_author']['type'] = 'link_title_plain';
    /* Field: Global: PHP */
    $handler->display->display_options['fields']['php']['id'] = 'php';
    $handler->display->display_options['fields']['php']['table'] = 'views';
    $handler->display->display_options['fields']['php']['field'] = 'php';
    $handler->display->display_options['fields']['php']['label'] = '';
    $handler->display->display_options['fields']['php']['exclude'] = TRUE;
    $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
    $handler->display->display_options['fields']['php']['php_output'] = '<?php
    $auth_arr  =  $data->_field_data[\'nid\'][\'entity\']->field_article_author;
     if (array_key_exists(\'und\', $auth_arr)) {
          $author  = $data->_field_data[\'nid\'][\'entity\']->field_article_author[\'und\'][0][\'title\'];
          print $author_display_name = "by " .  $author;
    }

    ?>';
    $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
    $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
    /* Field: Global: Custom text */
    $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
    $handler->display->display_options['fields']['nothing']['table'] = 'views';
    $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
    $handler->display->display_options['fields']['nothing']['label'] = '';
    $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="advocacy-listing-blog-main-wrapper">
    <div class="advocacy-listing-blog-title">[title]</div>
    <div class="advocacy-listing-blog-date-author-name">[field_article_date] [php]</div>
    <div class="advocacy-listing-blog-body">[body]</div>
    </div>';
    $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
    /* Field: Content: Type */
    $handler->display->display_options['fields']['type']['id'] = 'type';
    $handler->display->display_options['fields']['type']['table'] = 'node';
    $handler->display->display_options['fields']['type']['field'] = 'type';
    $handler->display->display_options['fields']['type']['exclude'] = TRUE;
    /* Field: Content: All taxonomy terms */
    $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
    $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
    $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
    $handler->display->display_options['fields']['term_node_tid']['label'] = '';
    $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
    $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
      'article_type' => 0,
      'badge' => 0,
      'event_type' => 0,
      'mema_workflow' => 0,
      'member_type' => 0,
      'resource_topic' => 0,
      'resource_type' => 0,
      'tags' => 0,
      'topics' => 0,
    );
    $handler->display->display_options['defaults']['sorts'] = FALSE;
    /* Sort criterion: Nodequeue: Position */
    $handler->display->display_options['sorts']['position']['id'] = 'position';
    $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
    $handler->display->display_options['sorts']['position']['field'] = 'position';
    $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
    $handler->display->display_options['sorts']['position']['order'] = 'DESC';
    $handler->display->display_options['defaults']['filter_groups'] = FALSE;
    $handler->display->display_options['defaults']['filters'] = FALSE;
    /* Filter criterion: Content: Published */
    $handler->display->display_options['filters']['status']['id'] = 'status';
    $handler->display->display_options['filters']['status']['table'] = 'node';
    $handler->display->display_options['filters']['status']['field'] = 'status';
    $handler->display->display_options['filters']['status']['value'] = 1;
    $handler->display->display_options['filters']['status']['group'] = 1;
    $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
    /* Filter criterion: Content: Type */
    $handler->display->display_options['filters']['type']['id'] = 'type';
    $handler->display->display_options['filters']['type']['table'] = 'node';
    $handler->display->display_options['filters']['type']['field'] = 'type';
    $handler->display->display_options['filters']['type']['value'] = array(
      'article' => 'article',
    );
    $handler->display->display_options['filters']['type']['group'] = 1;
    /* Filter criterion: Content: Has taxonomy terms (with depth; <em class="placeholder">Simple hierarchical select</em>) */
    $handler->display->display_options['filters']['shs_term_node_tid_depth']['id'] = 'shs_term_node_tid_depth';
    $handler->display->display_options['filters']['shs_term_node_tid_depth']['table'] = 'node';
    $handler->display->display_options['filters']['shs_term_node_tid_depth']['field'] = 'shs_term_node_tid_depth';
    $handler->display->display_options['filters']['shs_term_node_tid_depth']['value'] = array(
      $pid => "$pid",
    );
     /* Field: Global: PHP */
    $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
    $handler->display->display_options['fields']['php_1']['table'] = 'views';
    $handler->display->display_options['fields']['php_1']['field'] = 'php';
    $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
    $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
    $handler->display->display_options['fields']['php_1']['php_output'] = '<?php print arg(2); ?>';
    $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
    $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';

    $handler->display->display_options['filters']['shs_term_node_tid_depth']['vocabulary'] = 'article_type';
    $handler->display->display_options['filters']['shs_term_node_tid_depth']['depth'] = '10';
    /* Filter criterion: Content: Has taxonomy term */
    $handler->display->display_options['filters']['tid']['id'] = 'tid';
    $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
    $handler->display->display_options['filters']['tid']['field'] = 'tid';
    $handler->display->display_options['filters']['tid']['value'] = array(
    $tid => $tid,
    );
    /* Filter criterion: Nodequeue: In queue */
    $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
    $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
    $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
    $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
    $handler->display->display_options['filters']['in_queue']['value'] = '1';
    $handler->display->display_options['path'] = 'news/newsletter/' . $tid;

    /* Display: Feed */
    $handler = $view->new_display('feed', 'Feed', 'feed_1');
    $handler->display->display_options['pager']['type'] = 'none';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['style_plugin'] = 'rss';
    $handler->display->display_options['row_plugin'] = 'node_rss';
    $handler->display->display_options['row_options']['item_length'] = 'rss';
    $handler->display->display_options['defaults']['header'] = FALSE;
    $handler->display->display_options['defaults']['sorts'] = FALSE;
    /* Sort criterion: Nodequeue: Position */
    $handler->display->display_options['sorts']['position']['id'] = 'position';
    $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
    $handler->display->display_options['sorts']['position']['field'] = 'position';
    $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
    $handler->display->display_options['sorts']['position']['order'] = 'DESC';
    $handler->display->display_options['defaults']['filter_groups'] = FALSE;
    $handler->display->display_options['defaults']['filters'] = FALSE;
    /* Filter criterion: Content: Published */
    $handler->display->display_options['filters']['status']['id'] = 'status';
    $handler->display->display_options['filters']['status']['table'] = 'node';
    $handler->display->display_options['filters']['status']['field'] = 'status';
    $handler->display->display_options['filters']['status']['value'] = 1;
    $handler->display->display_options['filters']['status']['group'] = 1;
    $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
    /* Filter criterion: Content: Type */
    $handler->display->display_options['filters']['type']['id'] = 'type';
    $handler->display->display_options['filters']['type']['table'] = 'node';
    $handler->display->display_options['filters']['type']['field'] = 'type';
    $handler->display->display_options['filters']['type']['value'] = array(
      'article' => 'article',
    );
    /* Filter criterion: Content: Has taxonomy terms (with depth; Simple hierarchical select) */
    $handler->display->display_options['filters']['shs_term_node_tid_depth']['id'] = 'shs_term_node_tid_depth';
    $handler->display->display_options['filters']['shs_term_node_tid_depth']['table'] = 'node';
    $handler->display->display_options['filters']['shs_term_node_tid_depth']['field'] = 'shs_term_node_tid_depth';
    $handler->display->display_options['filters']['shs_term_node_tid_depth']['value'] = array(
      $pid => "$pid",
    );
    $handler->display->display_options['filters']['shs_term_node_tid_depth']['type'] = 'select';
    $handler->display->display_options['filters']['shs_term_node_tid_depth']['vocabulary'] = 'article_type';
    $handler->display->display_options['filters']['shs_term_node_tid_depth']['hierarchy'] = 1;
    $handler->display->display_options['filters']['shs_term_node_tid_depth']['depth'] = '10';
    /* Filter criterion: Content: Has taxonomy term */
    $handler->display->display_options['filters']['tid']['id'] = 'tid';
    $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
    $handler->display->display_options['filters']['tid']['field'] = 'tid';
    $handler->display->display_options['filters']['tid']['value'] = array(
      $tid => $tid,
    );
    $handler->display->display_options['filters']['tid']['type'] = 'select';
    $handler->display->display_options['filters']['tid']['vocabulary'] = 'article_type';
    /* Filter criterion: Nodequeue: In queue */
    $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
    $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
    $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
    $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
    $handler->display->display_options['filters']['in_queue']['value'] = '1';
    $handler->display->display_options['path'] = 'news/newsletter/'.$tid.'/feed';

    return $view;
  }

} // class ends
