<?php
/**
 * @file
 * test_pathauto.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function test_pathauto_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_security_attribute_pattern';
  $strongarm->value = 'content/security-attributes/[node:title]';
  $export['pathauto_node_security_attribute_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_video_pattern';
  $strongarm->value = 'content/video/[node:title]';
  $export['pathauto_node_video_pattern'] = $strongarm;

  return $export;
}
