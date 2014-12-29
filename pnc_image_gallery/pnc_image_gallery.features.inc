<?php
/**
 * @file
 * pnc_image_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnc_image_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}

/**
 * Implements hook_views_api().
 */
function pnc_image_gallery_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
