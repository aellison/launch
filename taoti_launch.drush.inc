<?php
/**
 * @file
 *   Taoti Checklist module drush integration.
 */

/**
* Implements hook_drush_help().
*/
function taoti_launch_drush_help($command) {
  switch ($command) {
    case 'drush:launch_check':
    return dt('Check the launch status of the site.');
  }
}

/**
 * Implements hook_drush_command().
 */
function taoti_launch_drush_command() {
  $items = array();
  $items['check_launch'] = array(
    'description' => dt('Check the launch status of the site.'),
    'aliases' => array('lc'),
  );
  return $items;
}

/**
 * Callback function for drush_launch_check.
 */
function drush_taoti_launch_launch_check() {
  //check if the argument was passed in and just print it out
  if (isset($arg1)) {
    drush_print($arg1);
  }

  //log to the command line with an OK status
  drush_log('Running my-command', 'ok');
}