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
  $view->name = 'view_slide_show';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'View slide show';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Views slide show';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_bean_slide_show_url']['id'] = 'field_bean_slide_show_url';
  $handler->display->display_options['fields']['field_bean_slide_show_url']['table'] = 'field_data_field_bean_slide_show_url';
  $handler->display->display_options['fields']['field_bean_slide_show_url']['field'] = 'field_bean_slide_show_url';
  $handler->display->display_options['fields']['field_bean_slide_show_url']['label'] = '';
  $handler->display->display_options['fields']['field_bean_slide_show_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bean_slide_show_url']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_bean_slide_show_image']['id'] = 'field_bean_slide_show_image';
  $handler->display->display_options['fields']['field_bean_slide_show_image']['table'] = 'field_data_field_bean_slide_show_image';
  $handler->display->display_options['fields']['field_bean_slide_show_image']['field'] = 'field_bean_slide_show_image';
  $handler->display->display_options['fields']['field_bean_slide_show_image']['label'] = '';
  $handler->display->display_options['fields']['field_bean_slide_show_image']['element_label_colon'] = FALSE;
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
    'slide_show' => 'slide_show',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['view_slide_show'] = $view;

  return $export;
}
