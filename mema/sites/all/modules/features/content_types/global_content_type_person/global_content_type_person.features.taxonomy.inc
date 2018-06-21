<?php
/**
 * @file
 * global_content_type_person.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function global_content_type_person_taxonomy_default_vocabularies() {
  return array(
    'member_type' => array(
      'name' => 'Member Type',
      'machine_name' => 'member_type',
      'description' => 'member type form person cck',
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
