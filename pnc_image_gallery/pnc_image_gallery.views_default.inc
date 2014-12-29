<?php
/**
 * @file
 * pnc_image_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pnc_image_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'basic_gallery_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'Basic gallery view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Basic gallery view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['group']['class'] = '';
  $handler->display->display_options['style_options']['list']['element_type'] = 'ul';
  $handler->display->display_options['style_options']['row']['element_type'] = 'li';
  $handler->display->display_options['style_options']['row']['class'] = '#1-gb';
  $handler->display->display_options['style_options']['row']['first_class'] = '';
  $handler->display->display_options['style_options']['row']['last_class'] = '';
  $handler->display->display_options['style_options']['row']['striping_classes'] = '';
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_gallery_text' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  /* Field: Block: Gallery Image */
  $handler->display->display_options['fields']['field_gallery_image']['id'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Block: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'bean';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_gallery_image]<a href=\'#\' class=\'bgstitle\'>[title]</a>
';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Block: Gallery Image */
  $handler->display->display_options['fields']['field_gallery_image_1']['id'] = 'field_gallery_image_1';
  $handler->display->display_options['fields']['field_gallery_image_1']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_1']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Block: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'bean';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<h2>[title_1]</h2>';
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  /* Field: Block: Gallery text */
  $handler->display->display_options['fields']['field_gallery_text']['id'] = 'field_gallery_text';
  $handler->display->display_options['fields']['field_gallery_text']['table'] = 'field_data_field_gallery_text';
  $handler->display->display_options['fields']['field_gallery_text']['field'] = 'field_gallery_text';
  $handler->display->display_options['fields']['field_gallery_text']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_text']['alter']['text'] = '[field_gallery_image_1] [title_1] [field_gallery_text]';
  $handler->display->display_options['fields']['field_gallery_text']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_text']['element_default_classes'] = FALSE;
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_image_gallery' => 'basic_image_gallery',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'basic-gallery-view';
  $export['basic_gallery_view'] = $view;

  return $export;
}
