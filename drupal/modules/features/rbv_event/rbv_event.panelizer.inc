<?php
/**
 * @file
 * rbv_event.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function rbv_event_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array(
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'eventi
%node:title',
    'panels_breadcrumbs_paths' => 'calendario/elenco',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '191a4bbf-c4d4-4be8-b6ff-b5a5995dd982';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-74d04e31-a860-456f-8250-1fac1ea88c22';
    $pane->panel = 'contentmain';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => array(),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '74d04e31-a860-456f-8250-1fac1ea88c22';
    $display->content['new-74d04e31-a860-456f-8250-1fac1ea88c22'] = $pane;
    $display->panels['contentmain'][0] = 'new-74d04e31-a860-456f-8250-1fac1ea88c22';
    $pane = new stdClass();
    $pane->pid = 'new-b30a36f6-00ab-4812-935f-2ff059de5a1c';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_group_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'vmode_group_content',
        'links' => 1,
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Organizzazione promotrice',
      'view_mode' => NULL,
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b30a36f6-00ab-4812-935f-2ff059de5a1c';
    $display->content['new-b30a36f6-00ab-4812-935f-2ff059de5a1c'] = $pane;
    $display->panels['sidebar'][0] = 'new-b30a36f6-00ab-4812-935f-2ff059de5a1c';
    $pane = new stdClass();
    $pane->pid = 'new-54de7016-13a8-4df9-832f-735e6c0fd022';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_relpro_project';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 1,
        'view_mode' => 'vmode_group_content',
        'links' => 1,
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'view_mode' => NULL,
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '54de7016-13a8-4df9-832f-735e6c0fd022';
    $display->content['new-54de7016-13a8-4df9-832f-735e6c0fd022'] = $pane;
    $display->panels['sidebar'][1] = 'new-54de7016-13a8-4df9-832f-735e6c0fd022';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:event:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'd780c985-ae08-4820-bbc5-10ee0cd35e2e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-63aea775-925c-4182-9a19-a59d94b0ba87';
    $pane->panel = 'center';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'teaser',
      'context' => array(),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '63aea775-925c-4182-9a19-a59d94b0ba87';
    $display->content['new-63aea775-925c-4182-9a19-a59d94b0ba87'] = $pane;
    $display->panels['center'][0] = 'new-63aea775-925c-4182-9a19-a59d94b0ba87';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:event:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '2d2cb1ed-9987-4872-9ad3-ac6a68b04261';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ef3119d9-c5f5-4129-8c48-2bd50028ff90';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_basic_image_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'panopoly_image_quarter',
        'image_link' => 'content',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ef3119d9-c5f5-4129-8c48-2bd50028ff90';
    $display->content['new-ef3119d9-c5f5-4129-8c48-2bd50028ff90'] = $pane;
    $display->panels['center'][0] = 'new-ef3119d9-c5f5-4129-8c48-2bd50028ff90';
    $pane = new stdClass();
    $pane->pid = 'new-ae54d8b4-6721-4996-b37f-9cab58c4cb8b';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ae54d8b4-6721-4996-b37f-9cab58c4cb8b';
    $display->content['new-ae54d8b4-6721-4996-b37f-9cab58c4cb8b'] = $pane;
    $display->panels['center'][1] = 'new-ae54d8b4-6721-4996-b37f-9cab58c4cb8b';
    $pane = new stdClass();
    $pane->pid = 'new-5e710ef7-a1f2-4aec-9704-3412222e3671';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_relpro_project';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5e710ef7-a1f2-4aec-9704-3412222e3671';
    $display->content['new-5e710ef7-a1f2-4aec-9704-3412222e3671'] = $pane;
    $display->panels['center'][2] = 'new-5e710ef7-a1f2-4aec-9704-3412222e3671';
    $pane = new stdClass();
    $pane->pid = 'new-bcecd415-ac83-405b-aa6d-3b0b1f4c470a';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:group_access';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bcecd415-ac83-405b-aa6d-3b0b1f4c470a';
    $display->content['new-bcecd415-ac83-405b-aa6d-3b0b1f4c470a'] = $pane;
    $display->panels['center'][3] = 'new-bcecd415-ac83-405b-aa6d-3b0b1f4c470a';
    $pane = new stdClass();
    $pane->pid = 'new-dc8efbb8-4515-4e0b-b07a-ccb9a59d0ec1';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dc8efbb8-4515-4e0b-b07a-ccb9a59d0ec1';
    $display->content['new-dc8efbb8-4515-4e0b-b07a-ccb9a59d0ec1'] = $pane;
    $display->panels['center'][4] = 'new-dc8efbb8-4515-4e0b-b07a-ccb9a59d0ec1';
    $pane = new stdClass();
    $pane->pid = 'new-199a8b71-fe52-4ef0-9487-d9b3741fd0f4';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '199a8b71-fe52-4ef0-9487-d9b3741fd0f4';
    $display->content['new-199a8b71-fe52-4ef0-9487-d9b3741fd0f4'] = $pane;
    $display->panels['center'][5] = 'new-199a8b71-fe52-4ef0-9487-d9b3741fd0f4';
    $pane = new stdClass();
    $pane->pid = 'new-bedae610-7251-4cd2-90a1-df466bcb808e';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'addressfield_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'use_widget_handlers' => 1,
        'format_handlers' => array(
          0 => 'address',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bedae610-7251-4cd2-90a1-df466bcb808e';
    $display->content['new-bedae610-7251-4cd2-90a1-df466bcb808e'] = $pane;
    $display->panels['center'][6] = 'new-bedae610-7251-4cd2-90a1-df466bcb808e';
    $pane = new stdClass();
    $pane->pid = 'new-27210d3e-3c97-4e15-85c9-eb092a14b1f5';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_quick_links_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '27210d3e-3c97-4e15-85c9-eb092a14b1f5';
    $display->content['new-27210d3e-3c97-4e15-85c9-eb092a14b1f5'] = $pane;
    $display->panels['center'][7] = 'new-27210d3e-3c97-4e15-85c9-eb092a14b1f5';
    $pane = new stdClass();
    $pane->pid = 'new-36f80d86-f1ba-4fd1-b7e9-1a0e904e3a9f';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '36f80d86-f1ba-4fd1-b7e9-1a0e904e3a9f';
    $display->content['new-36f80d86-f1ba-4fd1-b7e9-1a0e904e3a9f'] = $pane;
    $display->panels['center'][8] = 'new-36f80d86-f1ba-4fd1-b7e9-1a0e904e3a9f';
    $pane = new stdClass();
    $pane->pid = 'new-2665db45-eea2-4415-b15b-3bec6301f9c2';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_group_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2665db45-eea2-4415-b15b-3bec6301f9c2';
    $display->content['new-2665db45-eea2-4415-b15b-3bec6301f9c2'] = $pane;
    $display->panels['center'][9] = 'new-2665db45-eea2-4415-b15b-3bec6301f9c2';
    $pane = new stdClass();
    $pane->pid = 'new-03c903d7-c321-41d3-a31a-2db20fb5f45c';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'teaser',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '03c903d7-c321-41d3-a31a-2db20fb5f45c';
    $display->content['new-03c903d7-c321-41d3-a31a-2db20fb5f45c'] = $pane;
    $display->panels['center'][10] = 'new-03c903d7-c321-41d3-a31a-2db20fb5f45c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-03c903d7-c321-41d3-a31a-2db20fb5f45c';
  $panelizer->display = $display;
  $export['node:event:default:teaser'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default:vmode_group_content';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'vmode_group_content';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'e9af7151-f61e-4513-bbf8-1e5967518a19';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-98e6408f-6ec7-4860-81fb-12853927d287';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '98e6408f-6ec7-4860-81fb-12853927d287';
    $display->content['new-98e6408f-6ec7-4860-81fb-12853927d287'] = $pane;
    $display->panels['center'][0] = 'new-98e6408f-6ec7-4860-81fb-12853927d287';
    $pane = new stdClass();
    $pane->pid = 'new-a1d72fd5-4f15-4a42-9c0f-1626f4b6e96c';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_basic_image_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'thumbnail',
        'image_link' => 'content',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a1d72fd5-4f15-4a42-9c0f-1626f4b6e96c';
    $display->content['new-a1d72fd5-4f15-4a42-9c0f-1626f4b6e96c'] = $pane;
    $display->panels['center'][1] = 'new-a1d72fd5-4f15-4a42-9c0f-1626f4b6e96c';
    $pane = new stdClass();
    $pane->pid = 'new-9a4a4a91-7a4d-4c0b-85c2-5f0450596472';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_relpro_project';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9a4a4a91-7a4d-4c0b-85c2-5f0450596472';
    $display->content['new-9a4a4a91-7a4d-4c0b-85c2-5f0450596472'] = $pane;
    $display->panels['center'][2] = 'new-9a4a4a91-7a4d-4c0b-85c2-5f0450596472';
    $pane = new stdClass();
    $pane->pid = 'new-2167760f-a062-40ea-94f3-32f79e04d6a7';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:group_access';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2167760f-a062-40ea-94f3-32f79e04d6a7';
    $display->content['new-2167760f-a062-40ea-94f3-32f79e04d6a7'] = $pane;
    $display->panels['center'][3] = 'new-2167760f-a062-40ea-94f3-32f79e04d6a7';
    $pane = new stdClass();
    $pane->pid = 'new-60f8aa59-f7b2-431b-a535-debda46bf27f';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '60f8aa59-f7b2-431b-a535-debda46bf27f';
    $display->content['new-60f8aa59-f7b2-431b-a535-debda46bf27f'] = $pane;
    $display->panels['center'][4] = 'new-60f8aa59-f7b2-431b-a535-debda46bf27f';
    $pane = new stdClass();
    $pane->pid = 'new-c17cf761-bfe1-4f83-906d-241317f78d6d';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c17cf761-bfe1-4f83-906d-241317f78d6d';
    $display->content['new-c17cf761-bfe1-4f83-906d-241317f78d6d'] = $pane;
    $display->panels['center'][5] = 'new-c17cf761-bfe1-4f83-906d-241317f78d6d';
    $pane = new stdClass();
    $pane->pid = 'new-8e3285d7-8d5d-4f4a-b9b9-b56940a23a3a';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_quick_links_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8e3285d7-8d5d-4f4a-b9b9-b56940a23a3a';
    $display->content['new-8e3285d7-8d5d-4f4a-b9b9-b56940a23a3a'] = $pane;
    $display->panels['center'][6] = 'new-8e3285d7-8d5d-4f4a-b9b9-b56940a23a3a';
    $pane = new stdClass();
    $pane->pid = 'new-5d1b0825-63dc-4c84-9346-ce10c9cdd80f';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5d1b0825-63dc-4c84-9346-ce10c9cdd80f';
    $display->content['new-5d1b0825-63dc-4c84-9346-ce10c9cdd80f'] = $pane;
    $display->panels['center'][7] = 'new-5d1b0825-63dc-4c84-9346-ce10c9cdd80f';
    $pane = new stdClass();
    $pane->pid = 'new-1dd94811-5ee0-404c-b834-589216781057';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_com_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1dd94811-5ee0-404c-b834-589216781057';
    $display->content['new-1dd94811-5ee0-404c-b834-589216781057'] = $pane;
    $display->panels['center'][8] = 'new-1dd94811-5ee0-404c-b834-589216781057';
    $pane = new stdClass();
    $pane->pid = 'new-d3c7c5e1-2550-461a-b575-bd196f9527e6';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_group_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd3c7c5e1-2550-461a-b575-bd196f9527e6';
    $display->content['new-d3c7c5e1-2550-461a-b575-bd196f9527e6'] = $pane;
    $display->panels['center'][9] = 'new-d3c7c5e1-2550-461a-b575-bd196f9527e6';
    $pane = new stdClass();
    $pane->pid = 'new-7bc7facc-bc64-4f85-922d-e45c9d05346c';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'vmode_group_content',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7bc7facc-bc64-4f85-922d-e45c9d05346c';
    $display->content['new-7bc7facc-bc64-4f85-922d-e45c9d05346c'] = $pane;
    $display->panels['center'][10] = 'new-7bc7facc-bc64-4f85-922d-e45c9d05346c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7bc7facc-bc64-4f85-922d-e45c9d05346c';
  $panelizer->display = $display;
  $export['node:event:default:vmode_group_content'] = $panelizer;

  return $export;
}