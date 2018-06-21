<?php
/**
 * @file
 * global_taxonomy_resource_topic.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function global_taxonomy_resource_topic_taxonomy_default_vocabularies() {
  return array(
    'resource_topic' => array(
      'name' => 'Resource Topic',
      'machine_name' => 'resource_topic',
      'description' => 'Resource Topic',
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
