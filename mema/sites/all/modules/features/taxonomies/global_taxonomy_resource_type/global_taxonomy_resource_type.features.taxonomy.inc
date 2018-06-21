<?php
/**
 * @file
 * global_taxonomy_resource_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function global_taxonomy_resource_type_taxonomy_default_vocabularies() {
  return array(
    'resource_type' => array(
      'name' => 'Resource Type',
      'machine_name' => 'resource_type',
      'description' => 'Resource Type',
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
