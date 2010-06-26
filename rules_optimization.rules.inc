<?php
// $Id$

/**
 * @file rules integration for rules_optimization module.
 */

/**
 * Implementation of hook_rules_plugin_info().
 */
function rules_optimization_rules_pugin_info() {
  return array(
    'Tree Node' => array(
      'class' => 'TreeNode',
      'embeddable' => FALSE,
    ),
  );
}

/**
 * Implementation of hook_rules_plugin_info_alter().
 */
function rules_optimization_rules_plugin_info_alter(&$plugin_info) {
  $plugin_info['event set']['extenders']['RulesOptimizationInterface'] = array(
    'class' => 'RulesOptimization',
    'overrides' => array(
      'methods' => array(
        'optimize',
      ),
    ),
  );
}
