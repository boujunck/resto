<?php
/**
 * @file
 * sederhana_resto.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sederhana_resto_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function sederhana_resto_node_info() {
  $items = array(
    'alamat' => array(
      'name' => t('Alamat'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Alamat'),
      'help' => '',
    ),
    'data_pribadi' => array(
      'name' => t('Data Pribadi'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('No. SIM/KTP'),
      'help' => '',
    ),
    'departemen' => array(
      'name' => t('Departemen'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Jabatan'),
      'help' => '',
    ),
    'divisi' => array(
      'name' => t('Divisi'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'jabatan' => array(
      'name' => t('Jabatan'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Jabatan'),
      'help' => '',
    ),
    'karyawan' => array(
      'name' => t('Karyawan'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('NIK'),
      'help' => '',
    ),
    'status' => array(
      'name' => t('Status'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Status'),
      'help' => '',
    ),
  );
  return $items;
}
