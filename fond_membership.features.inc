<?php
/**
 * @file
 * fond_membership.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function fond_membership_commerce_product_default_types() {
  $items = array(
    'membership' => array(
      'type' => 'membership',
      'name' => 'Membership',
      'description' => 'Membership products',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function fond_membership_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fond_membership_node_info() {
  $items = array(
    'membership' => array(
      'name' => t('Membership'),
      'base' => 'node_content',
      'description' => t('Holds membership products.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
