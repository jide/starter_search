<?php
/**
 * @file
 * starter_search.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function starter_search_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: context
  $overrides["context.sitewide.reactions|block|blocks|search-form"] = array(
    'module' => 'search',
    'delta' => 'form',
    'region' => 'navigation',
    'weight' => -9,
    'title' => '<none>',
  );

 return $overrides;
}
