#[==[.rst:
.. cmake:function:: find_modules(<output> [<directory>...])

  find all modules in the given directories and subdirectories and 
  add them to the output variable.

   .. code-block:: cmake

    find_modules(MODULES_DIRS
      ${CMAKE_CURRENT_SOURCE_DIR}/Common
      ${CMAKE_CURRENT_SOURCE_DIR}/ThirdParty
    )
       
#]==]
function(find_modules output)
  set(_modules_all)
  foreach(_find_modules_directory IN LISTS ARGN)
    file(GLOB_RECURSE _found_modules
      "${_find_modules_directory}/Module.txt")
    foreach(_module_file IN LISTS _found_modules)
      get_filename_component(_module_directory "${_module_file}" DIRECTORY)
      list(APPEND _modules_all ${_module_directory})
    endforeach()
  endforeach()
  set(${output} ${_modules_all} PARENT_SCOPE)
endfunction()

#[==[.rst:
.. cmake:function:: split_module_name(<name> <prefix>)

  splits a qualified module name into namespace and module name.

  Sets in parent scope:
   - <prefix>_NAMESPACE
   - <prefix>_MODULE_NAME

  Example:

    split_module_name(Common::Core _module)
    # Sets:
    #   _module_NAMESPACE = "Common"
    #   _module_MODULE_NAME = "Core"

#]==]
function(split_module_name name prefix)
  string(FIND "${name}" "::" namespace_pos)
  if (namespace_pos EQUAL -1)
    set(namespace "")
    set(module_name "${name}")
  else ()
    string(SUBSTRING "${name}" 0 "${namespace_pos}" namespace)
    math(EXPR name_pos "${namespace_pos} + 2")
    string(SUBSTRING "${name}" "${name_pos}" -1 module_name)
  endif ()
  set("${prefix}_NAMESPACE" "${namespace}" PARENT_SCOPE)
  set("${prefix}_MODULE_NAME" "${module_name}" PARENT_SCOPE)
endfunction()

#[==[.rst:
.. cmake:function:: module_target_name(<module_name> <prefix>)

  constructs the target name from namespace and module name.

  sets in parent scope:
   - <prefix>_TARGET_NAME

  example:

    module_target_name(Common::Core _module)
    # Sets:
    #   _module_TARGET_NAME = "CommonCore"
#]==]
function(module_target_name module_name prefix)
  split_module_name(${module_name} TMP)
  set(target_name "${TMP_NAMESPACE}${TMP_MODULE_NAME}")
  set("${prefix}_TARGET_NAME" "${target_name}" PARENT_SCOPE)
endfunction()

#[==[.rst:
.. cmake:function:: get_module_component(<qualified_name> <prefix>)

  extracts the namespace and target name from a qualified module name and 
  set the following variables in the parent scope:
   - <prefix>_NAMESPACE 
   - <prefix>_TARGET_NAME

  .. code-block:: cmake

    get_module_component(Common::Core _module)
    # Sets:
    #   _module_NAMESPACE = "Common"
    #   _module_TARGET_NAME = "CommonCore"

#]==]
function(get_module_component name prefix)
  string(FIND "${name}" "::" namespace_pos)
  if (namespace_pos EQUAL -1)
    set(namespace "")
    set(target_name "${name}")
  else ()
    string(SUBSTRING "${name}" 0 "${namespace_pos}" namespace)
    math(EXPR name_pos "${namespace_pos} + 2")
    string(SUBSTRING "${name}" "${name_pos}" -1 target_name)
  endif ()
  set("${prefix}_NAMESPACE"
    "${namespace}"
    PARENT_SCOPE)
  set("${prefix}_TARGET_NAME"
    "${namespace}${target_name}"
    PARENT_SCOPE)
endfunction()

#[==[.rst:
.. cmake:function:: add_submodules(<directory>)

  A wrapper around ``add_subdirectory`` to add multiple submodules.
  .. code-block::cmake

    add_submodules(${CMAKE_CURRENT_SOURCE_DIR})

#]==]
function(add_submodules directory)
  find_modules(_submodules_directory_list ${directory})
  scan_submodules(_sorted_list "${_submodules_directory_list}")
  foreach(_submodule_directory IN LISTS _sorted_list)
    message(STATUS "Adding Module ${_submodule_directory} ...")
    add_subdirectory(${_submodule_directory})
  endforeach()
endfunction()

#[==[.rst:
.. cmake:function:: scan_submodules(<directory_list>)

  scan submodules to build a topological sorted structure for the
  ``add_submodules`` utility function

  .. code-block::cmake

    scan_submodules(${CMAKE_CURRENT_SOURCE_DIR})
#]==]
function(scan_submodules _sorted_list _modules_dir_list)

  set(_tmp_sorted)
  set(_buffer ${_modules_dir_list})

  foreach(_mod_dir IN LISTS _buffer)
    scan_module_file(_module "${_mod_dir}/Module.txt")
    split_module_name(${_module_name} _module_prefix)
    set(_module_id "${_module_prefix_NAMESPACE}_${_module_prefix_MODULE_NAME}")

    get_submodule_dependency("${_mod_dir}" _deps_raw)

    set(_deps_ids "")
    foreach(_d IN LISTS _deps_raw)
      if(_d MATCHES "::")
        split_module_name(${_d} _dep_prefix)
        set(_dep_id "${_dep_prefix_NAMESPACE}_${_dep_prefix_MODULE_NAME}")
        list(APPEND _deps_ids "${_dep_id}")
      else()
        message(FATAL_ERROR "Module name should be Namespace::Identifier")
      endif()
    endforeach()

    set(_dir_to_id_${_mod_dir} "${_module_id}")
    set(_deps_map_${_module_id} "${_deps_ids}")

  endforeach()

  set(_queue)
  foreach(_mod_dir IN LISTS _buffer)
    set(_module_id "${_dir_to_id_${_mod_dir}}")
    if("${_deps_map_${_module_id}}" STREQUAL "")
      list(APPEND _queue "${_mod_dir}")
    endif()
  endforeach()

  while(_queue)

    list(GET _queue 0 _mod_dir)
    list(REMOVE_AT _queue 0)

    set(_module_id "${_dir_to_id_${_mod_dir}}")

    list(APPEND _tmp_sorted "${_mod_dir}")
    list(REMOVE_ITEM _buffer "${_mod_dir}")

    foreach(_other_dir IN LISTS _buffer)
      set(_other_id "${_dir_to_id_${_other_dir}}")
      set(_other_deps "${_deps_map_${_other_id}}")

      list(REMOVE_ITEM _other_deps "${_module_id}")
      set(_deps_map_${_other_id} "${_other_deps}")

      if("${_other_deps}" STREQUAL "")
        list(FIND _queue "${_other_dir}" _inq)
        if(_inq EQUAL -1)
          list(APPEND _queue "${_other_dir}")
        endif()
      endif()

    endforeach()
  endwhile()

  # unresolved modules
  if(_buffer)
    foreach(_mod_dir IN LISTS _buffer)
      set(_module_id "${_dir_to_id_${_mod_dir}}")
      message("Module ${_module_id} still depends on: ${_deps_map_${_module_id}}")
    endforeach()
    message(FATAL_ERROR "scan_submodules: cyclic or unresolved module dependencies.")
  endif()

  set(${_sorted_list} ${_tmp_sorted} PARENT_SCOPE)
endfunction()


#[==[.rst:
.. cmake:function:: get_submodule_dependency(<module_directory> <list>)

  scan the Module.txt file found in the <module_directory> variable
  and fetch set them in an ouput list

  .. code-block::cmake

    get_submodule_dependency(${CMAKE_CURRENT_SOURCE_DIR} dependency_map)
#]==]
function(get_submodule_dependency module_dir dep_list)

  if(NOT IS_DIRECTORY "${module_dir}")
    message(FATAL_ERROR "'${module_dir}' is not a valid directory")
  endif()
  set(_module_file "${module_dir}/Module.txt")
  if(NOT EXISTS "${_module_file}")
    message(FATAL_ERROR "Missing Module.txt in '${module_dir}'")
  endif()
  scan_module_file(_module "${_module_file}")

  set(_deps "")
  if(NOT "${_module_public_depends}" STREQUAL "")
    list(APPEND _deps ${_module_public_depends})
  endif()
  if(NOT "${_module_private_depends}" STREQUAL "")
    list(APPEND _deps ${_module_private_depends})
  endif()
  if(NOT "${_module_external_depends}" STREQUAL "")
    list(APPEND _deps ${_module_external_depends})
  endif()
  set(${dep_list} ${_deps} PARENT_SCOPE)

endfunction()

#[==[.rst:
.. cmake:function:: configure_module([<input>...] <directory>)

  A wrapper around ``configure_file`` to configure multiple files
  .. code-block:: cmake

    configure_module(
      ${CMAKE_CURRENT_SOURCE_DIR}/Config1.h.in
      ${CMAKE_CURRENT_SOURCE_DIR}/Config2.h.in
      ${CMAKE_CURRENT_BINARY_DIR}
    )

#]==]
function(configure_module input directory)
  foreach(infile IN LISTS input)
    get_filename_component(filename "${infile}" NAME_WE)
    set(outfile "${directory}/${filename}.h")
    configure_file("${infile}" "${outfile}")
  endforeach()
endfunction()

#[==[.rst:
.. cmake:function:: scan_module_file(<prefix> <file_path>)

Module.txt file contents
========================

The Module.txt is parsed and used as input to the CMake build system
Uppercase keys are used to define various properties of the module.
any uppercase key is considered a valid key except the values TRUE/FALSE
Uppercase values are not allowed as they will be considered as keys
This function sets pattern for module metadata in parent scope as 
  <prefix>_<key>
if <file_path> not given, the default is the value of the variable
  ${CMAKE_CURRENT_SOURCE_DIR}/Module.txt

Example:
  scan_module_file(MODULE)
  # Sets
    MODULE_name
    MODULE_version 
    ....

Template of Module.txt file:

.. code-block:: text
  NAME
    <namespace>::<module_name>
  DESCRIPTION
    <module_description>
  LICENSE
    <license_type>
  VERSION
     <module_version>
  MAINTAINER
    <maintainer_contact>
  ENABLE_BUILD
    TRUE/FALSE
  ENABLE_TEST
    TRUE/FALSE
  ENABLE_DOC
    TRUE/FALSE
  ENABLE_BINDING
    TRUE/FALSE
  INSTALL_HEADERS
    TRUE/FALSE
  INSTALL_TARGETS
    TRUE/FALSE
  CLASSES
    ClassA
    ClassB
  SOURCES
    SourceA.cxx
    SourceB.cxx
  HEADERS
    HeaderA.h
    HeaderB.h
  CONFIG_HEADERS
    ConfigA.h.in
    ConfigB.h.in
  CMAKE_MODULES_DIRS
    cmake/
  PUBLIC_DEPENDS
    ModuleA::SubModule1
    ModuleB::SubModule2
  PRIVATE_DEPENDS
    ModuleC::SubModule3
  PRIVATE_COMPILE_DEFINITIONS
    DEFINE_A
    DEFINE_B
  PUBLIC_COMPILE_DEFINITIONS
    DEFINE_C
  TEST_DEPENDS
    ModuleD::SubModule4
  TEST_OPTIONAL_DEPENDS
    ModuleE::SubModule5
  BINDING_DEPENDS
    ModuleF::SubModule6
  BINDING_OPTIONAL_DEPENDS
    ModuleG::SubModule7
#]==]
function(scan_module_file prefix)

  if(ARGC GREATER 1)
    set(_module_path "${ARGV1}")
  else()
    set(_module_path "${CMAKE_CURRENT_SOURCE_DIR}/Module.txt")
  endif()
  if(NOT EXISTS "${_module_path}")
    message(FATAL_ERROR "Module.txt not found at: ${_module_path}")
    return()
  endif()

  file(READ ${_module_path} contents)
  string(REPLACE "\r" "" contents "${contents}")
  string(REPLACE "\t" " " contents "${contents}")  
  string(REPLACE "\n" ";" contents "${contents}")
  string(REPLACE "  " " " contents "${contents}")  
  string(REPLACE "  " " " contents "${contents}")
  string(REPLACE "  " " " contents "${contents}")

  list(LENGTH contents line_count)
  math(EXPR last_index "${line_count} - 1")

  set(current_key "")
  set(current_values "")

  foreach(i RANGE 0 ${last_index})
    list(GET contents ${i} line)
    string(STRIP "${line}" strip_line)

    if(strip_line STREQUAL "")
      continue()
    endif()
    string(REGEX MATCH "^[A-Z_]+$" is_key "${strip_line}")
    if(is_key AND NOT strip_line STREQUAL "TRUE" AND NOT strip_line STREQUAL "FALSE")
      if(current_key)
        string(TOLOWER "${current_key}" key_lower)
        set("${prefix}_${key_lower}" "${current_values}" PARENT_SCOPE)
      endif()
      set(current_key "${strip_line}")
      set(current_values "")
    else()
      list(APPEND current_values "${strip_line}")
    endif()
  endforeach()
  if(current_key)
    string(TOLOWER "${current_key}" key_lower)
    set("${prefix}_${key_lower}" "${current_values}" PARENT_SCOPE)
  endif()
endfunction()

#[==[.rst:
.. cmake:function:: is_module_target(<prefix>)

  Check whether a module can be built as a CMake target.

  This function scans the ``Module.txt`` file for the given ``<module>`` and
  checks whether the module defines any classes or sources. If either
  ``<module>_classes`` or ``<module>_sources`` is non-empty, the module is
  considered buildable and can be wrapped as a target.

  The result is stored in the parent scope as:

    ``<prefix>_IS_MODULE_TARGET``

#]==]
function(is_module_target prefix)

  if("${${prefix}_external_build}" STREQUAL "TRUE")
    set("${prefix}_IS_MODULE_TARGET" TRUE PARENT_SCOPE)
    return()
  endif()
  if(NOT "${${prefix}_classes}" STREQUAL "" OR
     NOT "${${prefix}_sources}" STREQUAL "")
    set("${prefix}_IS_MODULE_TARGET" TRUE PARENT_SCOPE)
  else()
    set("${prefix}_IS_MODULE_TARGET" FALSE PARENT_SCOPE)
  endif()
endfunction()

#[==[.rst:
.. cmake:function:: module_verify_status(<module>)

  Verify that all dependencies of a module are enabled before building.

  This function checks whether the given ``<module>`` has its binding enabled
  (``<module>_enable_building``). If not, the function returns immediately.

  If binding is enabled, the function iterates over the module’s public and
  private dependencies (``<module>_public_depends`` and
  ``<module>_private_depends``). For each dependency, it verifies that
  ``<dep>_enable_building`` is set. If any dependency is not enabled, a
  ``FATAL_ERROR`` is raised.
  .. code-block:: cmake

    module_verify_status(Common::Core)

#]==]
function(module_verify_status module)
  if(NOT ${module}_enable_building)
    return()
  endif()
  foreach(dep IN LISTS ${module}_public_depends
      ${module}_private_depends)
    if(NOT ${dep}_enable_building)
      message(FATAL_ERROR "Module ${module} depends on ${dep}, 
        which is not enabled.")
    endif()
  endforeach()
endfunction()

#[==[.rst:
  .. cmake:function:: add_module_dependencies(<module>)

    A wrapper around ``add_dependencies`` that works for modules.
    This function ensures that the given module depends on all its 
    declared public and private dependencies.

    .. code-block:: cmake

      add_module_dependencies(CommonCore)
#]==]
function(add_module_dependencies _module_target prefix)

  set(dep_targets "")
  foreach(dep IN LISTS ${prefix}_public_depends 
      ${prefix}_private_depends)
    module_target_name(${dep} _dep)
    list(APPEND dep_targets ${_dep_TARGET_NAME})
  endforeach()

  if(dep_targets)
    add_dependencies(${_module_target} ${dep_targets})
  endif()

endfunction()

#[==[.rst:
  .. cmake:function:: module_sources(<module> [<source>...])

    A wrapper around ``target_sources`` that works for modules.

    .. code-block:: cmake

      module_sources(Common::Core FileA.cxx FileB.cxx)
#]==]
function(module_sources module)
  set(srcs "")
  foreach(name IN LISTS ARGN)
    list(APPEND srcs "${name}")
  endforeach()
  module_target_name(${module} tmp)
  target_sources(${tmp_TARGET_NAME} PRIVATE ${srcs})
endfunction()

#[==[.rst:
  .. cmake:function:: module_classes(<module> [<class>...])

    A wrapper around ``target_sources`` that works only for module 
    classes.Classes are source files with `.cxx` extension.

    .. code-block:: cmake

      module_classes(Common::Core ClassA ClassB)
#]==]
function(module_classes module)
  set(classes "")
  foreach(name IN LISTS ARGN)
    list(APPEND classes "${name}.cxx")
  endforeach()
  module_target_name(${module} tmp)
  target_sources(${tmp_TARGET_NAME} PRIVATE ${classes})
endfunction()


#[==[.rst:
.. cmake:function:: module_include_directories(<target_name> <prefix>)

  A wrapper around ``target_include_directories`` that works for modules.
  Note: as per cmake default behavior this function do not include nested files
  inside the module folder, so all nested headers within any subdir insid ethe module
  shouled have been include at top level, all *.h files should have absolute includes
  eg: LibXML2 verdored package, ... 
  .. code-block:: cmake

    module_include_directories(CommonCore MAIN)

  TODO: add support for adding include dirs from depandecies also
        and specify for each module what headers to include either
        public or private for the dependecies modules via
        PUBLIC_HEADERS or PRIVATE_HEADERS in Module.txt declration file
#]==]
function(module_include_directories target_name prefix)

  get_filename_component(_module_directory 
    "${CMAKE_CURRENT_LIST_FILE}" DIRECTORY
  )
  target_include_directories(${target_name}
    PUBLIC  "${_module_directory}" "${CMAKE_CURRENT_BINARY_DIR}"  
  )
  # For vendored / third‑party modules
  target_include_directories(${target_name}
    PUBLIC   "${_module_directory}/src"
  )

  # For each module, set the source and binary include directories so they can be
  # consumed by higher-level modules built on top. We avoid using a global cache
  # registry to manage inter-module exchange, and instead attach these paths as
  # properties on the target itself.
  set_target_properties(${target_name} PROPERTIES
    target_src_include_dir ${_module_directory}
    target_bin_include_dir ${CMAKE_CURRENT_BINARY_DIR}
  )

  if(DEFINED ${prefix}_public_depends AND NOT "${${prefix}_public_depends}" STREQUAL "")
    foreach(dep IN LISTS ${prefix}_public_depends)
      module_target_name(${dep} _dep_module)
      get_target_property(pub_src ${_dep_module_TARGET_NAME} target_src_include_dir)
      get_target_property(pub_bin ${_dep_module_TARGET_NAME} target_bin_include_dir)
      target_include_directories(${target_name} PUBLIC "${pub_bin}" "${pub_src}")
    endforeach()
  endif()

  if(DEFINED ${prefix}_private_depends AND NOT "${${prefix}_private_depends}" STREQUAL "")
    foreach(dep IN LISTS ${prefix}_private_depends)
      module_target_name(${dep} _dep_module)
      get_target_property(priv_src ${_dep_module_TARGET_NAME} target_src_include_dir)
      get_target_property(priv_bin ${_dep_module_TARGET_NAME} target_bin_include_dir)
      target_include_directories(${target_name} PRIVATE "${priv_bin}" "${priv_src}")
    endforeach()
  endif()

endfunction()

#[==[.rst:
.. cmake:function:: module_link_libraries(<module>)

  A wrapper around ``target_link_libraries`` that works for modules.

  .. code-block:: cmake

    module_link_libraries(Common::Core)
#]==]
function(module_link_libraries module)

  module_target_name(${module} tmp)

  if(DEFINED MODULE_public_depends)
    foreach(dep IN LISTS MODULE_public_depends)
      module_target_name(${dep} dep_tmp)
      target_link_libraries(${tmp_TARGET_NAME} PUBLIC ${dep_tmp_TARGET_NAME})
    endforeach()
  else()
    message(FATAL_ERROR "MODULE_public_depends not defined")
  endif()

  if(DEFINED MODULE_private_depends)
    foreach(dep IN LISTS MODULE_private_depends)
      module_target_name(${dep} dep_tmp)
      target_link_libraries(${tmp_TARGET_NAME} PRIVATE ${dep_tmp_TARGET_NAME})
    endforeach()
  else()
     message(FATAL_ERROR "MODULE_private_depends not defined")
  endif()

endfunction()

#[==[.rst:
.. cmake:function:: module_add_compile_defintions(<module>)

  A wrapper around ``target_compile_definitions`` that works for modules.

  .. code-block:: cmake

    module_add_compile_defintions(Common::Core)
#]==]
function(module_add_compile_defintions module)
  module_target_name(${module} tmp)
  # target_compile_definitions(${tmp_TARGET_NAME}
  #   PUBLIC ${module}_public_compile_definitions
  #   PRIVATE ${module}_private_compile_definitions
  # )
endfunction()

#[==[.rst:
.. cmake:function:: module_add_cmake_modules ()

  This function let modules register their cmake modules to be
  available globally, cmake local module folder are list in Module.txt
  under CMAKE_MODULES_DIRS key, this function shoule be invoked before
  add_submodules to make sure all modules cmake modules are available
  return a list of all cmake modules paths to added to CMAKE_MODULE_PATH
  in the parent scope.

  Example:  
    CMAKE_MODULES_DIRS
      cmake/
      cmake-compact/

  .. code-block:: cmake

    module_add_cmake_modules(${CMAKE_CURRENT_SOURCE_DIR})
  
  sets in parent scope:
   - MODULES_CMAKE_DIRS
#]==]
function(module_add_cmake_modules directory)

  find_modules(_submodules_directory_list ${directory} _module_cmake_paths)
  foreach(_submodule_directory IN LISTS _submodules_directory_list)
    scan_module_file(MODULE "${_submodule_directory}/Module.txt")
    if(DEFINED MODULE_cmake_modules_dirs AND NOT "${MODULE_cmake_modules_dirs}" STREQUAL "")
      foreach(module_cmake_dir IN LISTS MODULE_cmake_modules_dirs)
        # check if the path is a valid directory
        if(NOT IS_DIRECTORY "${_submodule_directory}/${module_cmake_dir}")
          message(FATAL_ERROR "CMake module dir not found: ${_submodule_directory}/${module_cmake_dir}")  
        else()
          list(APPEND _module_cmake_paths
            "${_submodule_directory}/${module_cmake_dir}")
            set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};
              ${_submodule_directory}/${module_cmake_dir}" PARENT_SCOPE
            )
        endif()
        # reset the MODULE_cmake_modules_dirs variable to avoid re-adding paths
        set(MODULE_cmake_modules_dirs "")
        set(MODULES_CMAKE_DIRS "${_module_cmake_paths}" PARENT_SCOPE)
      endforeach()
    endif() 
  endforeach()

endfunction()


#[==[.rst:
.. cmake:function:: add_module(<module_name>)

  Main wrapper for module declarations.

  ... code-block:: cmake

    add_module(Common::Core)
#]==]
function(add_module module_name)

  scan_module_file(MODULE)
  if(${MODULE_enable_build} STREQUAL "FALSE")
    message(STATUS "Module ${module_name} build is disabled.")
    set(${module_name}_enable_building FALSE PARENT_SCOPE)
    return()
  endif()
  is_module_target(MODULE)
  if(NOT ${MODULE_IS_MODULE_TARGET})
    # for modules which have only config file or header files 
    # used by other modules targets and third party modules
    configure_module("${MODULE_config_headers}" 
      "${CMAKE_CURRENT_BINARY_DIR}"
    )
    return()
  endif()
  configure_module("${MODULE_config_headers}" 
    "${CMAKE_CURRENT_BINARY_DIR}"
  )

  # Fallback for custom modules that want to specify their own build rules
  # e.g. vendored third‑party or externally fetched modules
  if(${MODULE_external_build} STREQUAL "TRUE")
    add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/${MODULE_external_source_dir}")
    return()
  endif()

  module_target_name(${module_name} _module)
  add_library(${_module_TARGET_NAME})
  add_module_dependencies(${_module_TARGET_NAME} MODULE)
  module_sources(${module_name} ${MODULE_sources})
  module_classes(${module_name} ${MODULE_classes})
  module_include_directories(${_module_TARGET_NAME} MODULE)  
  module_link_libraries(${module_name})
  module_add_compile_defintions(${module_name})

endfunction()

#[==[.rst:
.. cmake:function:: add_test_sources(<module> [<source>...])

  A wrapper around ``target_sources`` that works for module test sources.

#]==]
function(add_test_sources module)

  module_target_name(${module} tmp)
  foreach(filename IN LISTS ARGN)
    get_filename_component(test_name "${filename}" NAME_WE)
    split_module_name(${module} tmp)
    set(test_name "${tmp_NAMESPACE}${tmp_MODULE_NAME}${test_name}")
    add_executable(${test_name} ${filename})
    add_test_dependencies(${test_name} ${module})
    test_include_directory(${test_name} ${module}) 
    test_link_libraries(${test_name} ${module})
    add_test(NAME ${test_name} COMMAND ${test_name})
  endforeach()

endfunction()

#[==[.rst:
.. cmake:function:: add_test_dependencies(<test_target> <module>)

  A wrapper around ``add_dependencies`` that works for module test dependencies.
  fetch all required and optional dependencies for the module tests targets

#]==]
function(add_test_dependencies test_target module)

  module_target_name(${module} tmp)
  add_dependencies(${test_target} ${tmp_TARGET_NAME})
  set(MODULE_test_dep_targets "")
  foreach(test_dep IN LISTS MODULE_test_depends MODULE_test_optional_depends)
    module_target_name(${test_dep} dep_tmp)
    list(APPEND MODULE_test_dep_targets ${dep_tmp_TARGET_NAME}) 
  endforeach()
  if(MODULE_test_dep_targets)
    add_dependencies(${test_target} ${MODULE_test_dep_targets})
  endif()

endfunction()

#[==[.rst:
.. cmake:function:: test_link_libraries(<test_target>)

  A wrapper around ``target_link_libraries`` that works for module test dependencies.

  test_link_libraries(Common)
#]==]
function(test_link_libraries test_target module)

  module_target_name(${module} tmp)
  target_link_libraries(${test_target}
    PRIVATE ${tmp_TARGET_NAME}
  )

  set(MODULE_test_dep_targets "")
  foreach(test_dep IN LISTS MODULE_test_depends MODULE_test_optional_depends)
    module_target_name(${test_dep} dep_tmp)
    list(APPEND MODULE_test_dep_targets ${dep_tmp_TARGET_NAME})
  endforeach()
  if(MODULE_test_dep_targets)
    target_link_libraries(${test_target} PRIVATE ${MODULE_test_dep_targets})
  endif()

  get_target_property(_module_libs ${tmp_TARGET_NAME} LINK_LIBRARIES)
  if(_module_libs)
    target_link_libraries(${test_target} PRIVATE ${_module_libs})
  endif()

endfunction()

#[==[.rst:
  ..  cmake_function:test_include_directory(<test_target>)

  A wrapper around target include directory but for modules test dependency

#]==]
function(test_include_directory test_target module)

  module_target_name(${module} prefix)
  get_target_property(_module_include_dirs ${prefix_TARGET_NAME} 
    INCLUDE_DIRECTORIES
  )

  target_include_directories(${test_target} PUBLIC 
      "${_module_include_dirs}" 
      "${CMAKE_CURRENT_BINARY_DIR}" 
      "${CMAKE_CURRENT_SOURCE_DIR}"
  )

  get_filename_component(_module_test_dir 
    "${CMAKE_CURRENT_LIST_FILE}" DIRECTORY
  )
  get_filename_component(_parent_dir "${_module_test_dir}" DIRECTORY)
  get_filename_component(_module_dir "${_parent_dir}" DIRECTORY)

  scan_module_file(_module  "${_module_dir}/Module.txt")

  if(DEFINED _module_test_depends AND NOT "${_module_test_depends}" STREQUAL "")
    foreach(test_dep IN LISTS _module_test_depends)
      module_target_name(${test_dep} _dep_prefix)
      get_target_property(_dep_mod_inc_dirs ${_dep_prefix_TARGET_NAME} 
        INCLUDE_DIRECTORIES
      )
      target_include_directories(${test_target} PRIVATE "${_dep_mod_inc_dirs}")
    endforeach()
  endif()

  if(DEFINED _module_test_optional_depends AND NOT "${_module_test_optional_depends}" STREQUAL "")
    foreach(test_opt_dep IN LISTS  _module_test_optional_depends)
      module_target_name(${test_opt_dep} _opt_dep_prefix)
      get_target_property(_opt_dep_mod_inc_dirs ${_opt_dep_prefix_TARGET_NAME} 
        INCLUDE_DIRECTORIES
      )
      target_include_directories(${test_target} PRIVATE "${_opt_dep_mod_inc_dirs}")
    endforeach()
  endif()

endfunction()

#[==[.rst:
.. : cmake_function::add_module_binding(<module>)

  if one module at least enable python binding, 
    enable the global python binding support 
    a flag to enable/disable extra depenacy for python binding for the module
    set the var :
      <module>_ENABLE_BINDING - to TRUE/FALSE
      by defult all the binding folder is placed by langauge spec under /Binding/<LANG>
      NOTE: if global binding enabled via ENABLE_BINDING and at leats one module
      has local BINDING build enabled -> thirdpart deps like pybind, JNI, .. are fetched and 
      propagrted, global flags to be throwen are :
      
      ``PYTHON_BINDING``
      ``JAVA_BINDING``
      ``LUA_BINDING``
      ``WASM_BINDING``
      ``OCTAVE_BINDING``
#]==]
function(add_module_binding module)

endfunction()

#[==[.rst:
  helper to generate documentaion for a spec module based on enabled flag
  if at least on module will genrte documentaion and doxygen not valiabl
  invoke a fuction to install it
  this  fuction will add the trqured files of the module to a global var 
  to feed it to doxygen to gete the docmetnion 
  set the vars :
    DOC_MODULES - list of modules to gnerat to the document&ion to 
#]==]
function(add_module_documentation module)

  if(${module}_ENABLE_DOCUMENTATION)
    list(APPEND DOC_MODULES ${module})
    set(DOC_MODULES ${DOC_MODULES} PARENT_SCOPE)
  endif()

endfunction()















