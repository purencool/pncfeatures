<?php
/**
 * @file
 * pnc_slide_show.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function pnc_slide_show_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'basic_slide_show';
  $bean_type->label = 'Basic slide show';
  $bean_type->options = '';
  $bean_type->description = 'Content for a basic slide show';
  $export['basic_slide_show'] = $bean_type;

  return $export;
}
