<?php
/**
 * @file
 * global_nodequeues_for_newsletter.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function global_nodequeues_for_newsletter_default_rules_configuration() {
  $items = array();
  $items['rules_add_nodequeue_when_article_create'] = entity_import('rules_config', '{ "rules_add_nodequeue_when_article_create" : {
      "LABEL" : "Add Nodequeue when article create",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "php", "rules" ],
      "ON" : { "node_insert--article" : { "bundle" : "article" } },
      "DO" : [
        { "drupal_message" : { "message" : "\\u003C?php\\r\\n$functions = GAI::getInstance();\\r\\n$functions-\\u003EgtArticleTypeInNodequeue($node);\\r\\n?\\u003E" } }
      ]
    }
  }');
  $items['rules_create_nodequeue_when_add_newsletter'] = entity_import('rules_config', '{ "rules_create_nodequeue_when_add_newsletter" : {
      "LABEL" : "Create nodequeue when add newsletter",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "php", "rules", "taxonomy" ],
      "ON" : { "taxonomy_term_insert--article_type" : { "bundle" : "article_type" } },
      "IF" : [
        { "php_eval" : { "code" : "$myarray = taxonomy_get_parents_all($term-\\u003Etid);\\r\\n$count = count($myarray);\\r\\n$Pname = $myarray[1]-\\u003Ename;\\r\\nif($count == 2 \\u0026\\u0026 $myarray[1]-\\u003Ename == \\u0022Newsletter\\u0022 ){\\r\\n   return TRUE;\\r\\n}\\r\\nreturn FALSE;\\r\\n" } }
      ],
      "DO" : [
        { "php_eval" : { "code" : "  \\u003C?php\\r\\n  $term_name = strtolower(str_replace(\\u0022 \\u0022,\\u0022_\\u0022,$term-\\u003Ename));\\r\\n  $term_name = \\u0022newsletter_\\u0022 . $term_name;\\r\\nif (!nodequeue_load_queue_by_name($term_name)) {\\r\\n    $nodequeue = new stdClass();\\r\\n    $nodequeue-\\u003Eapi_version = 2;\\r\\n    $nodequeue-\\u003Ename = $term_name;\\r\\n    $nodequeue-\\u003Etitle = $term-\\u003Ename;\\r\\n    $nodequeue-\\u003Esubqueue_title = \\u0027\\u0027;\\r\\n    $nodequeue-\\u003Esize = 0;\\r\\n   \\/\\/ $nodequeue-\\u003Elink = \\u0027Add to the Homepage featured queue\\u0027;\\r\\n   \\/\\/ $nodequeue-\\u003Elink_remove = \\u0027Remove from Homepage featured queue\\u0027;\\r\\n    $nodequeue-\\u003Eowner = \\u0027nodequeue\\u0027;\\r\\n    $nodequeue-\\u003Eshow_in_ui = 1;\\r\\n    $nodequeue-\\u003Eshow_in_tab = 1;\\r\\n    $nodequeue-\\u003Eshow_in_links = 1;\\r\\n    $nodequeue-\\u003Ereference = \\u00270\\u0027;\\r\\n    $nodequeue-\\u003Ereverse = 1;\\r\\n    $nodequeue-\\u003Ei18n = 0;\\r\\n    \\/\\/ $nodequeue-\\u003Eroles = array(\\r\\n    \\/\\/   0 =\\u003E \\u00273\\u0027,\\r\\n    \\/\\/   1 =\\u003E \\u00275\\u0027,\\r\\n    \\/\\/   2 =\\u003E \\u00276\\u0027,\\r\\n    \\/\\/ );\\r\\n    $nodequeue-\\u003Etypes = array(\\r\\n      0 =\\u003E \\u0027article\\u0027,\\r\\n    );\\r\\n    nodequeue_save($nodequeue);\\r\\n \\r\\n    \\/\\/ Add subqueue, using qid.\\r\\n    $nodequeue-\\u003Eadd_subqueue = array(\\r\\n      $nodequeue-\\u003Eqid =\\u003E $term-\\u003Ename,\\r\\n    );\\r\\n    nodequeue_save($nodequeue);\\r\\n  }\\r\\n\\r\\n\\r\\n?\\u003E" } },
        { "drupal_message" : { "message" : "\\u003C?php\\r\\n$article_title = $term-\\u003Efield_article_title[\\u0027und\\u0027][0][\\u0027value\\u0027];\\r\\n$functions = GAI::getInstance();\\r\\n$view = $functions-\\u003EgtViewsForNewsletterList($term-\\u003Etid, $term-\\u003Ename, $article_title);\\r\\nviews_save_view($view);\\r\\n?\\u003E" } }
      ]
    }
  }');
  $items['rules_delete_nodequeue_when_delete_newsletter'] = entity_import('rules_config', '{ "rules_delete_nodequeue_when_delete_newsletter" : {
      "LABEL" : "Delete nodequeue when delete newsletter",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "php", "rules", "taxonomy" ],
      "ON" : { "taxonomy_term_delete--article_type" : { "bundle" : "article_type" } },
      "DO" : [
        { "drupal_message" : { "message" : "\\u003C?php\\r\\n$term_name = strtolower(str_replace(\\u0022 \\u0022,\\u0022_\\u0022,$term-\\u003Ename));\\r\\n$term_name = \\u0022newsletter_\\u0022 . $term_name;\\r\\nif ($nodequeue = nodequeue_load_queue_by_name($term_name)) {\\r\\n   nodequeue_delete($nodequeue-\\u003Eqid);\\r\\n    echo \\u0022Delete nodequeue \\u0022 . $term-\\u003Ename; \\r\\n}\\r\\n\\r\\n\\r\\n?\\u003E" } },
        { "drupal_message" : { "message" : "\\u003C?php\\r\\n\\r\\n$view_name = \\u0022article_newsletter_\\u0022 . $term-\\u003Etid;\\r\\n$view_hname = \\u0022Article Newsletter \\u0022 . $term-\\u003Etid;\\r\\nif ($view = views_get_view($view_name)) {\\r\\n  $view-\\u003Edelete();\\r\\nPrint \\u0022Delete \\u0022. $view_hname . \\u0022  view\\u0022;\\r\\n}\\r\\n\\r\\n\\r\\n\\r\\n\\r\\n?\\u003E" } }
      ]
    }
  }');
  $items['rules_update_node_type_article'] = entity_import('rules_config', '{ "rules_update_node_type_article" : {
      "LABEL" : "Update Node Type Article",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "php", "rules" ],
      "ON" : { "node_update--article" : { "bundle" : "article" } },
      "DO" : [
        { "drupal_message" : { "message" : "\\u003C?php\\r\\n$functions = GAI::getInstance();\\r\\n$functions-\\u003EgtArticleUpdateInNodequeue($node);\\r\\n\\r\\n?\\u003E" } }
      ]
    }
  }');
  return $items;
}
