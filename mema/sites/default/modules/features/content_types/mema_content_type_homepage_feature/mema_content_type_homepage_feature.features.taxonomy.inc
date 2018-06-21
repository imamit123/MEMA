<?php
/**
 * @file
 * mema_content_type_homepage_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function mema_content_type_homepage_feature_taxonomy_default_vocabularies() {
  return array(
    'topics' => array(
      'name' => 'Topics',
      'machine_name' => 'topics',
      'description' => 'Topics',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
