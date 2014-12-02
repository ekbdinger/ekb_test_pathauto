<?php
/**
 * @file
 * test_pathauto.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function test_pathauto_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
