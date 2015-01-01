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

/**
 * Implements hook_image_default_styles().
 */
function pnc_image_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: gallery_420x420.
  $styles['gallery_420x420'] = array(
    'name' => 'gallery_420x420',
    'label' => 'Gallery 420x420',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 420,
          'height' => 420,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
