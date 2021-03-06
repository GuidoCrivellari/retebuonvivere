<?php
/**
 * @file
 * rbv_project.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function rbv_project_taxonomy_default_vocabularies() {
  return array(
    'project_scopes' => array(
      'name' => 'Ambiti',
      'machine_name' => 'project_scopes',
      'description' => 'Ambito/portata dei progetti',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -9,
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
