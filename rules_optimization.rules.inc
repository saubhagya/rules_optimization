<?php
// $Id$

/**
 * @file rules integration for rules_optimization module.
 */

/**
 * Implementation of hook_rules_plugin_info_alter().
 */
function rules_optimization_rules_pugin_info_alter() {
  return array(
    'TreeNode' => array(
      'class' => 'TreeNode',
      'embeddable' => FALSE,
    ),
    'Optimizer' => array(
      'class' => 'RulesOptimization',
      'embeddable' => FALSE,
      'extenders' => array(
        'RulesOptimizationInterface' => array(
          'class' => 'RulesOptimization',
        ),
      ),
    ),
  );
}
