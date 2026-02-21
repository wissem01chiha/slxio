include (Module)

#[==[.rst:
.. cmake:function:: add_test_sources(<module> [<source>...])

  A wrapper around ``target_sources`` that works for module test sources.

  Example:
    add_test_sources(Common::Core
        TestErrorBuffer.cxx
    )

#]==]
function (add_test_sources module)

  module_target_name (${module} tmp)
  foreach (filename IN LISTS ARGN)
    get_filename_component (test_name "${filename}" NAME_WE)
    split_module_name (${module} tmp)
    set (test_name "${tmp_NAMESPACE}${tmp_MODULE_NAME}${test_name}")
    add_executable (${test_name} ${filename})
    add_test_dependencies (${test_name} ${module})
    test_include_directory (${test_name} ${module})
    test_link_libraries (${test_name} ${module})
    add_test (NAME ${test_name} COMMAND ${test_name})
  endforeach ()

endfunction ()

#[==[.rst:
.. cmake:function:: add_test_dependencies(<test_target> <module>)

  A wrapper around ``add_dependencies`` that works for module test dependencies.
  fetch all required and optional dependencies for the module tests targets

#]==]
function (add_test_dependencies test_target module)

  module_target_name (${module} tmp)
  add_dependencies (${test_target} ${tmp_TARGET_NAME})
  set (MODULE_test_dep_targets "")
  foreach (test_dep IN LISTS MODULE_test_depends MODULE_test_optional_depends)
    module_target_name (${test_dep} dep_tmp)
    list (APPEND MODULE_test_dep_targets ${dep_tmp_TARGET_NAME})
  endforeach ()
  if (MODULE_test_dep_targets)
    add_dependencies (${test_target} ${MODULE_test_dep_targets})
  endif ()

endfunction ()

#[==[.rst:
.. cmake:function:: test_link_libraries(<test_target>)

  A wrapper around ``target_link_libraries`` that works for module test dependencies.

  test_link_libraries(IOSlxTestParameterParser ThirdParty::libxml2)
#]==]
function (test_link_libraries test_target module)

  module_target_name (${module} tmp)
  target_link_libraries (${test_target} PRIVATE ${tmp_TARGET_NAME})

  set (MODULE_test_dep_targets "")

  foreach (test_dep IN LISTS MODULE_test_depends MODULE_test_optional_depends)
    module_target_name (${test_dep} dep_tmp)
    list (APPEND MODULE_test_dep_targets ${dep_tmp_TARGET_NAME})
  endforeach ()

  if (MODULE_test_dep_targets)
    target_link_libraries (${test_target} PRIVATE ${MODULE_test_dep_targets})
  endif ()

  get_target_property (_module_libs ${tmp_TARGET_NAME} LINK_LIBRARIES)
  if (_module_libs)
    target_link_libraries (${test_target} PRIVATE ${_module_libs})
  endif ()

endfunction ()

#[==[.rst:
  ..  cmake_function:test_include_directory(<test_target>)

  A wrapper around target include directory but for modules test dependency

#]==]
function (test_include_directory test_target module)

  module_target_name (${module} prefix)
  get_target_property (_module_include_dirs ${prefix_TARGET_NAME} INCLUDE_DIRECTORIES)

  target_include_directories (
    ${test_target} PUBLIC "${_module_include_dirs}" "${CMAKE_CURRENT_BINARY_DIR}"
                          "${CMAKE_CURRENT_SOURCE_DIR}")

  get_filename_component (_module_test_dir "${CMAKE_CURRENT_LIST_FILE}" DIRECTORY)
  get_filename_component (_parent_dir "${_module_test_dir}" DIRECTORY)
  get_filename_component (_module_dir "${_parent_dir}" DIRECTORY)

  scan_module_file (_module "${_module_dir}/Module.txt")

  if (DEFINED _module_test_depends AND NOT "${_module_test_depends}" STREQUAL "")
    foreach (test_dep IN LISTS _module_test_depends)
      module_target_name (${test_dep} _dep_prefix)
      get_target_property (_dep_mod_inc_dirs ${_dep_prefix_TARGET_NAME}
                           INCLUDE_DIRECTORIES)
      target_include_directories (${test_target} PRIVATE "${_dep_mod_inc_dirs}")
    endforeach ()
  endif ()

  if (DEFINED _module_test_optional_depends AND NOT "${_module_test_optional_depends}"
                                                STREQUAL "")
    foreach (test_opt_dep IN LISTS _module_test_optional_depends)
      module_target_name (${test_opt_dep} _opt_dep_prefix)
      get_target_property (_opt_dep_mod_inc_dirs ${_opt_dep_prefix_TARGET_NAME}
                           INCLUDE_DIRECTORIES)
      target_include_directories (${test_target} PRIVATE "${_opt_dep_mod_inc_dirs}")
    endforeach ()
  endif ()

endfunction ()
