<?php
/**
 * @file
 * pnc_testimonials.features.inc
 */

/**
 * Implements hook_node_info().
 */
function pnc_testimonials_node_info() {
  $items = array(
    'testimonials' => array(
      'name' => t('Testimonials page'),
      'base' => 'node_content',
      'description' => t('Use <em>testimonials pages</em> for your static content, that talk about you.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
      'custom' => 1,
      'modified' => 1,
      'locked' => 0,
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
