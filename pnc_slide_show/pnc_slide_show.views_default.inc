<?php
/**
 * @file
 * pnc_slide_show.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pnc_slide_show_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'basic_views_slide_show';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'Basic views slide show';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Basic views slide show';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['general'] = array(
    'mode' => 'horizontal',
    'speed' => '500',
    'slideMargin' => '0',
    'startSlide' => '0',
    'randomStart' => 0,
    'infiniteLoop' => 1,
    'hideControlOnEnd' => 0,
    'captions' => 0,
    'ticker' => 0,
    'tickerHover' => 0,
    'adaptiveHeight' => 0,
    'adaptiveHeightSpeed' => '500',
    'video' => 0,
    'touchEnabled' => 1,
    'preloadImages' => 'all',
    'disable_standard_css' => 0,
    'useCSS' => 1,
    'align_image' => 'left',
    'align_caption' => 'left',
    'swipeThreshold' => '50',
    'oneToOneTouch' => 1,
    'preventDefaultSwipeX' => 1,
    'preventDefaultSwipeY' => 0,
    'color_caption' => '80, 80, 80, 0.75',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['controlsfieldset'] = array(
    'controls' => 1,
    'nextText' => '',
    'prevText' => '',
    'startText' => '',
    'stopText' => '',
    'autoControls' => 0,
    'autoControlsCombine' => 0,
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['pagerfieldset'] = array(
    'pager' => 0,
    'pagerType' => 'full',
    'pagerShortSeparator' => ' / ',
    'pagerCustom' => '',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['autofieldset'] = array(
    'pause' => '4000',
    'autoStart' => 1,
    'auto' => 0,
    'autoHover' => '0',
    'autoDelay' => '0',
    'autoDirection' => 'next',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['carousel'] = array(
    'minSlides' => '1',
    'maxSlides' => '1',
    'moveSlides' => '0',
    'slideWidth' => '0',
  );
  $handler->display->display_options['style_options']['bxslider_views_slideshow']['callback'] = array(
    'onSliderLoad' => '',
    'onSlideBefore' => '',
    'onSlideAfter' => '',
    'onSlideNext' => '',
    'onSlidePrev' => '',
  );
  $handler->display->display_options['style_options']['slideshow_type'] = 'bxslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Block: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'bean';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_slide_show' => 'basic_slide_show',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['basic_views_slide_show'] = $view;

  return $export;
}
