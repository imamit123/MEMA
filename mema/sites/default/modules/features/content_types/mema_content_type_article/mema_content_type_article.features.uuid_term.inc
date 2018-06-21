<?php
/**
 * @file
 * mema_content_type_article.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function mema_content_type_article_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Legislative News',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => '287019e2-50d8-4828-8bb3-7c041d210bf5',
    'vocabulary_machine_name' => 'article_type',
    'field_article_title' => array(),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Newsletter',
    'description' => '<p>Create Newsletter</p>
',
    'format' => 'filtered_html',
    'weight' => 10,
    'uuid' => '3dd84074-656b-4483-833f-c1736d72efa6',
    'vocabulary_machine_name' => 'article_type',
    'field_article_title' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'article-type/newsletter',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Newsletter 3',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '6f53134c-68f5-4b01-a5f7-8a013d619876',
    'vocabulary_machine_name' => 'article_type',
    'field_article_title' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'article-type/newsletter-3',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '3dd84074-656b-4483-833f-c1736d72efa6',
    ),
  );
  $terms[] = array(
    'name' => 'Newsletter 5',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '7cd00ebe-0faa-46bc-8bb7-d69cba6cb2ea',
    'vocabulary_machine_name' => 'article_type',
    'field_article_title' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'article-type/newsletter-5',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '3dd84074-656b-4483-833f-c1736d72efa6',
    ),
  );
  $terms[] = array(
    'name' => 'Supplier Spin',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => '87b30b8b-4245-4eae-bf0f-408732458c83',
    'vocabulary_machine_name' => 'article_type',
    'field_article_title' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'article-type/supplier-spin',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Newsletter 2',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '9533a75b-b072-4b6e-9743-d039732801f8',
    'vocabulary_machine_name' => 'article_type',
    'field_article_title' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'article-type/newsletter-2',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '3dd84074-656b-4483-833f-c1736d72efa6',
    ),
  );
  $terms[] = array(
    'name' => 'Industry News',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 9,
    'uuid' => 'b7802703-1b5a-46bf-8371-6df24f148456',
    'vocabulary_machine_name' => 'article_type',
    'field_article_title' => array(),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'MEMA News',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 8,
    'uuid' => 'ba565036-0b39-410d-9259-43f33dec90ca',
    'vocabulary_machine_name' => 'article_type',
    'field_article_title' => array(),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Division News',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => 'dc1bba6f-125b-4cd6-89d2-9f23881f3bae',
    'vocabulary_machine_name' => 'article_type',
    'field_article_title' => array(),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Newsletter 4',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => 'e483aa4d-fe02-42ec-a783-af07517fae68',
    'vocabulary_machine_name' => 'article_type',
    'field_article_title' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'article-type/newsletter-4',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '3dd84074-656b-4483-833f-c1736d72efa6',
    ),
  );
  $terms[] = array(
    'name' => 'Washington Insider',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'fa3a471c-fe52-4e76-9478-7aa2e18e0976',
    'vocabulary_machine_name' => 'article_type',
    'field_article_title' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'article-type/washington-insider',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '3dd84074-656b-4483-833f-c1736d72efa6',
    ),
  );
  return $terms;
}
