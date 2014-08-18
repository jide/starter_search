<?php
/**
 * @file
 * starter_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function starter_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_context_default_contexts_alter().
 */
function starter_search_context_default_contexts_alter(&$data) {
  if (isset($data['sitewide'])) {
    $data['sitewide']->reactions['block']['blocks']['search-form'] = array(
      'module' => 'search',
      'delta' => 'form',
      'region' => 'navigation',
      'weight' => -9,
      'title' => '<none>',
    ); /* WAS: '' */
  }
}
