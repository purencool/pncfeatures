<?php
/**
 * @file
 * pnc_testimonials.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function pnc_testimonials_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_testimonial_by'
  $field_bases['field_testimonial_by'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_testimonial_by',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
