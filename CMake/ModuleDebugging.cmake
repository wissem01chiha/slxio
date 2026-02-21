#[=======================================================================[.rst:
ModuleDebugging
-----------------
Provides utilities to debug module parsing and configuration.
#]=======================================================================]

option ("${PROJECT_NAME}_DEBUG_MODULE" "Debug module logic in ${PROJECT_NAME}" OFF)
mark_as_advanced ("${PROJECT_NAME}_DEBUG_MODULE")

include (CMakeDependentOption)

#[==[.rst:
.. cmake:function:: module_debug(<module>)
  Debugging function to print all parsed variables of a module.
  this function is only when module level debugging var is enabled
  it will print all the global variables set after parsing the Module.txt file
  for the given module

  .. code-block:: cmake

    module_debug(Common::Core)

  TODO: Improve the output formatting for better readability,
  for now set the global debug flag manully before invoking the function
#]==]
function (module_debug module)
  if (NOT MODULE_DEBUG)
    return ()
  endif ()
  scan_module_file (tmp)
  message (STATUS "---- Debugging  global variables for ${module} ----")
  message (STATUS "MODULE_IS_MODULE_TARGET  = ${MODULE_IS_MODULE_TARGET}")
  message (STATUS "MODULE_name              = ${tmp_name}")
  message (STATUS "MODULE_description       = ${tmp_description}")
  message (STATUS "MODULE_license           = ${tmp_license}")
  message (STATUS "MODULE_version           = ${tmp_version}")
  message (STATUS "MODULE_maintainer        = ${tmp_maintainer}")
  message (STATUS "MODULE_enable_build      = ${tmp_enable_build}")
  message (STATUS "MODULE_enable_test       = ${tmp_enable_test}")
  message (STATUS "MODULE_enable_binding    = ${tmp_enable_binding}")
  message (STATUS "MODULE_enable_documentation = ${tmp_enable_documentation}")
  message (STATUS "MODULE_install_headers   = ${tmp_install_headers}")
  message (STATUS "MODULE_install_targets   = ${tmp_install_targets}")
  message (STATUS "MODULE_classes           = ${tmp_classes}")
  message (STATUS "MODULE_sources           = ${tmp_sources}")
  message (STATUS "MODULE_headers           = ${tmp_headers}")
  message (STATUS "MODULE_config_headers    = ${tmp_config_headers}")
  message (STATUS "MODULE_public_depends    = ${tmp_public_depends}")
  message (STATUS "MODULE_private_depends   = ${tmp_private_depends}")
  message (STATUS "MODULE_test_depends      = ${tmp_test_depends}")
  message (STATUS "MODULE_test_optional_depends = ${tmp_test_optional_depends}")
  message (STATUS "----------------------------------------------------------")
endfunction ()
