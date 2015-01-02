<?php
/**
 * @file
 * pnc_image_gallery.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function pnc_image_gallery_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'basic_image_gallery';
  $bean_type->label = 'Basic image gallery';
  $bean_type->options = '';
  $bean_type->description = 'Basic image gallery';
  $export['basic_image_gallery'] = $bean_type;

  return $export;
}
