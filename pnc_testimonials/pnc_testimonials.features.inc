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
      'name' => t('Testimonials'),
      'base' => 'node_content',
      'description' => t('Things that people have said about you or your website'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
