<?php
/**
 * @file
 * global_workflow_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function global_workflow_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'mema_workflow' => array(
      'name' => 'Mema Workflow',
      'machine_name' => 'mema_workflow',
      'description' => 'Defines workflow for content publishing',
      'hierarchy' => 1,
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
