<?php
/**
 * @file
 * pnc_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function pnc_styles_image_default_styles() {
  $styles = array();

  // Exported image style: blog_width.
  $styles['blog_width'] = array(
    'label' => 'Large article width (900X400)',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 900,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: medium_rectangle.
  $styles['medium_rectangle'] = array(
    'label' => 'Medium rectangle (366x246)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 366,
          'height' => 246,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: small_rectangle.
  $styles['small_rectangle'] = array(
    'label' => 'Small rectangle (260x160)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 260,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: small_square.
  $styles['small_square'] = array(
    'label' => 'Small square  (176X176)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 176,
          'height' => 176,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
