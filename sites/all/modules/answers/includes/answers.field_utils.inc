<?php

/**
 * @file
 * Field utility functions for the 'Answers' module.
 */

/**
 * Returns the value of a field for a node.
 *
 * @param object $node
 *   The node that contains the field.
 * @param string $field
 *   The field name.
 *
 * @return mixed
 *   The value of the field.
 */
function answers_field_get_value($node, $field) {
  $items = field_get_items('node', $node, $field);
  return $items[0]['value'];
}

/**
 * Returns a referenced node for a given field.
 *
 * @param object $source_node
 *   The node that contains the reference to another node.
 * @param string $field
 *   The reference field name.
 *
 * @return object
 *   A fully loaded node object.
 */
function answers_field_get_node_reference($source_node, $field) {
  $items = field_get_items('node', $source_node, $field);
  $target_nid = $items[0]['nid'];
  return node_load($target_nid);
}
