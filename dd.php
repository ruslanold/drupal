<?php
  define('DRUPAL_ROOT', getcwd());
  require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
  require_once DRUPAL_ROOT . '/includes/password.inc';
  drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);
  echo user_hash_password('restailing');
  die();
?>