# SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
# SPDX-License-Identifier: Apache-2.0
#[=======================================================================[.rst:
Module.cmake
----------------
This file is part of the slxio project.
Released under the terms of the Apache-2.0 license. <chihawissem08@gmail.com>
Provide utility functions for managing project modules build.
#]=======================================================================]

include(ModuleDebugging)

#[==[.rst:
.. cmake:function:: add_submodules(<directory>)

  A wrapper around ``add_subdirectory`` to add multiple modules.

  .. code-block::cmake

    add_submodules(${CMAKE_CURRENT_SOURCE_DIR})

#]==]
function(add_submodules directory)
  find_modules(_submodules_directory_list ${directory})
  scan_submodules(_sorted_list "${_submodules_directory_list}")

  # this cache variable will hold the mapping between the module
  # qualified name 'eg Common::Core' and the buildbale library name defined
  # in the module file, typically, we used the follwing rule for library name:
  # <namespace><module_name>, but in general those can be different and the later
  # is random defined by the user
  set(module_map "" CACHE INTERNAL "Global module name-target mapping")

  foreach(_submodule_directory IN LISTS _sorted_list)
    if(SLXIO_MODULE_DEBUG)
      message(STATUS "[add_submodules] Adding Module ${_submodule_directory} ...")
    endif()
    add_subdirectory(${_submodule_directory})
  endforeach()
endfunction()

#[==[.rst:
.. cmake:function:: find_modules(<output> [<directory>...])

  Find all modules in the given directories and subdirectories and
  add them to the output variable.

   .. code-block:: cmake

    find_modules(_module_dirs ${CMAKE_CURRENT_SOURCE_DIR})
#]==]
function(find_modules output)
  set(_modules_all)
  foreach(_find_modules_directory IN LISTS ARGN)
    file(GLOB_RECURSE _found_modules "${_find_modules_directory}/slxio.module")
    foreach(_module_file IN LISTS _found_modules)
      get_filename_component(_module_directory "${_module_file}" DIRECTORY)
      list(APPEND _modules_all ${_module_directory})
    endforeach()
  endforeach()
  set(${output} ${_modules_all} PARENT_SCOPE)
endfunction()

#[==[.rst:
.. cmake:function:: scan_submodules(<directory_list>)

  Scan submodules to build a topological sorted structure for the
  ``add_submodules`` utility function

  .. code-block::cmake

    scan_submodules(${CMAKE_CURRENT_SOURCE_DIR})
#]==]
function(scan_submodules _sorted_list _modules_dir_list)

  set(_tmp_sorted)
  set(_buffer ${_modules_dir_list})

  foreach(_mod_dir IN LISTS _buffer)

    scan_module_file(_module "${_mod_dir}/slxio.module")
    set(_module_id "${_module_group}_${_module_name}")

    get_submodule_dependency(_module _deps_raw)

    set(_deps_ids "")
    if(SLXIO_MODULE_DEBUG)
      message(STATUS "[scan_submodules] Scanning module dependencies: ${_deps_raw}")
    endif()
    foreach(_d IN LISTS _deps_raw)
        string(REPLACE "::" ";" _parts "${_d}")
        list(GET _parts 0 _dep_group)
        list(GET _parts 1 _dep_name)
        set(_dep_id "${_dep_group}_${_dep_name}")
        list(APPEND _deps_ids "${_dep_id}")
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
      message(STATUS "[scan_submodules] Module ${_module_id}
        still depends on : ${_deps_map_${_module_id}}")
    endforeach()
    message(FATAL_ERROR "[scan_submodules] Cyclic or unresolved
    module dependencies.")
  endif()

  set(${_sorted_list} ${_tmp_sorted} PARENT_SCOPE)
endfunction()

#[==[.rst:
.. cmake:function:: get_submodule_dependency(<module_prefix> <list>)

  Get the list of dependencies for a given module.
  Note : This function should be called after ``scan_module_file`` to
  ensure that the module properties are available in the parent scope.

  .. code-block::cmake

    get_submodule_dependency(_module dependency_list)
#]==]
function(get_submodule_dependency module_prefix dep_list)

  set(_deps "")
  if(NOT "${${module_prefix}_public_depends}" STREQUAL "")
    list(APPEND _deps ${${module_prefix}_public_depends})
  endif()
  if(NOT "${${module_prefix}_private_depends}" STREQUAL "")
    list(APPEND _deps ${${module_prefix}_private_depends})
  endif()
  set(${dep_list} ${_deps} PARENT_SCOPE)

endfunction()

#[==[.rst:
.. cmake:function:: add_module(<module_name>)

  Main wrapper for module declarations, this function should be called
  in each module's CMakeLists.txt file.
  Note: a module should contain a slxio.module file with all properties, and
  at least one source file or config header to be buildable as target, by the
  wrapper

  ... code-block:: cmake

    add_module(Common::Core)

#]==]
function(add_module module_name)

  scan_module_file(_module)

  if(${_module_enable_build} STREQUAL "FALSE")
  if(SLXIO_MODULE_DEBUG)
    message(STATUS "[add_module] module ${module_name} build is disabled.")
  endif()
    return()
  endif()

  configure_module("${_module_config_headers}"
    "${CMAKE_CURRENT_SOURCE_DIR}")

  add_library(${_module_library_name})
  if(SLXIO_BUILD_SHARED)
    set_target_properties(${_module_library_name} PROPERTIES
      WINDOWS_EXPORT_ALL_SYMBOLS ON)
  endif()
  module_sources(_module ${_module_library_name})
  add_module_dependencies(_module ${_module_library_name})

  # module include directories
  target_include_directories(${_module_library_name} PUBLIC
   ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR}
  )
  set_target_properties(${_module_library_name} PROPERTIES
    module_include_directories
    "${CMAKE_CURRENT_SOURCE_DIR}")
  set_target_properties(${_module_library_name} PROPERTIES
    module_source_dir "${CMAKE_CURRENT_SOURCE_DIR}")

  set(module_map
  "${module_map};${_module_group}::${_module_name}=${_module_library_name}"
   CACHE INTERNAL "Global module name-target mapping")

  module_include_directories(_module ${_module_library_name})
  module_link_libraries(_module ${_module_library_name})
  module_add_compile_defintions(_module ${_module_library_name})

  # test targets
  if(${_module_enable_test} STREQUAL "TRUE")
    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/Testing)
  endif()

endfunction()

#[==[.rst:
.. cmake:function:: configure_module([<input>...] <directory>)

  A wrapper around ``configure_file`` to configure multiple files.

  .. code-block:: cmake

    configure_module( ${CMAKE_CURRENT_SOURCE_DIR}/config1.h.in
      ${CMAKE_CURRENT_SOURCE_DIR}/config2.h.in
      ${CMAKE_CURRENT_SOURCE_DIR}
    )
#]==]
function(configure_module input directory)
  if(NOT input)
  if(SLXIO_MODULE_DEBUG)
    message(STATUS "[configure_module] No input files provided, skipping.")
  endif()
    return()
  endif()
  foreach(infile IN LISTS input)
    get_filename_component(filename "${infile}" NAME_WE)
    set(outfile "${directory}/${filename}.h")
    configure_file("${infile}" "${outfile}")
  endforeach()
endfunction()

#[==[.rst:
  .. cmake:function:: module_sources(<module_prefix> <module_target_name>)

    A wrapper around ``target_sources`` that works for modules.
    This function adds source files(classes, sources, and platform
     specific sources) to the module target.
    Note: this function shoule be called after the module target
    created and module properties are propulated in the parent
    scope by calling ``scan_module_file`` function

    .. code-block:: cmake

      module_sources(_module CommonCore)
#]==]
function(module_sources module_prefix module_target_name)
    set(srcs "")
    if(NOT "${${module_prefix}_classes}" STREQUAL "")
      foreach(class IN LISTS ${module_prefix}_classes)
        list(APPEND srcs "${class}.cxx")
      endforeach()
    endif()
    if(NOT "${${module_prefix}_sources}" STREQUAL "")
      foreach(source IN LISTS ${module_prefix}_sources)
        list(APPEND srcs "${source}")
      endforeach()
    endif()

    # add platform specific sources
    if(WIN32 AND DEFINED ${module_prefix}_windows_sources
    AND NOT "${${module_prefix}_windows_sources}" STREQUAL "")
      foreach(win_src IN LISTS ${module_prefix}_windows_sources)
        list(APPEND srcs "${win_src}")
      endforeach()
    endif()

    if(UNIX AND DEFINED ${module_prefix}_unix_sources
    AND NOT "${${module_prefix}_unix_sources}" STREQUAL "")
      foreach(unix_src IN LISTS ${module_prefix}_unix_sources)
        list(APPEND srcs "${unix_src}")
      endforeach()
    endif()

    if(ANDROID AND DEFINED ${module_prefix}_android_sources
    AND NOT "${${module_prefix}_android_sources}" STREQUAL "")
      foreach(android_src IN LISTS ${module_prefix}_android_sources)
        list(APPEND srcs "${android_src}")
      endforeach()
    endif()

    if(WASM AND DEFINED ${module_prefix}_wasm_sources
      AND NOT "${${module_prefix}_wasm_sources}" STREQUAL "")
      foreach(wasm_src IN LISTS ${module_prefix}_wasm_sources)
        list(APPEND srcs "${wasm_src}")
      endforeach()
    endif()

    target_sources(${module_target_name} PRIVATE ${srcs})

endfunction()

#[==[.rst:
  .. cmake:function:: add_module_dependencies(<module_prefix>
      <module_target_name>)

    A wrapper around ``add_dependencies`` that works for modules.
    This function ensures that the given module depends on all its
    declared public and private dependencies.
    Note: this function shouled be called after scan_module_file function

    .. code-block:: cmake

      add_module_dependencies(_module CommonCore)
#]==]
function(add_module_dependencies module_prefix module_target_name)

  set(dep_targets "")
  foreach(dep IN LISTS ${module_prefix}_public_depends
    ${module_prefix}_private_depends)
    # for each dependency, get its target name in module file
    module_target_name(${dep} dep_tmp)
    list(APPEND dep_targets ${dep_tmp})
  endforeach()

  if(dep_targets)
    add_dependencies(${module_target_name} ${dep_targets})
  endif()

endfunction()

#[==[.rst:
  .. cmake:function:: module_target_name(<module_id> <prefix>)

   This function retuns the module target name specified in the
   module declaration file as LIBRARY_NAME, used for fetching
   the target name for the module dependencies, and also to set
   the target name for the current module.

   .. code-block:: cmake

      module_target_name(Common::Core library_name)
   Sets:
      library_name = "CommonCore"
#]==]
function(module_target_name module_name library_name)

  split_module_name(${module_name} temp)
  # build the full path to the module slxio.module file
  # a Woraround for IO modules, in slxio.module files, the _depend section are
  # listed as Io:Core, to not break the parsing logic in scan_module_file function,
  # here we need to reconvert it to upper to match folder name, can we do better ?
  if(temp_NAMESPACE STREQUAL "Io")
    set(temp_NAMESPACE "IO")
  endif()
  set(module_file
    "${PROJECT_SOURCE_DIR}/${temp_NAMESPACE}/${temp_MODULE_NAME}/slxio.module")
  # scan the module file
  scan_module_file(tmp "${module_file}")
  set(${library_name} "${tmp_LIBRARY_NAME}")
  set(${library_name} "${tmp_LIBRARY_NAME}" PARENT_SCOPE)
endfunction()

#[==[.rst:
.. cmake:function:: split_module_name(<name> <prefix>)

  Splits a qualified module name into namespace and module name.

  Sets in parent scope:
   - <prefix>_NAMESPACE
   - <prefix>_MODULE_NAME

#]==]
function(split_module_name name prefix)
  string(FIND "${name}" "::" namespace_pos)
  if(namespace_pos EQUAL -1)
    set(namespace "")
    set(module_name "${name}")
  else()
    string(SUBSTRING "${name}" 0 "${namespace_pos}" namespace)
    math(EXPR name_pos "${namespace_pos} + 2")
    string(SUBSTRING "${name}" "${name_pos}" -1 module_name)
  endif()
  set("${prefix}_NAMESPACE" "${namespace}" PARENT_SCOPE)
  set("${prefix}_MODULE_NAME" "${module_name}" PARENT_SCOPE)
endfunction()

#[==[.rst:
.. cmake:function:: module_include_directories(<prefix> <target_name>)

  A wrapper around ``target_include_directories`` that works for modules.
  This function adds include directories from all module dependencies to
  the given target.
  Note: this function require that all module targets have the following
  properties set before:
    - module_include_directories
    - module_source_dir
  And also the module properties should be available in the parent scope by
  calling ``scan_module_file`` function

  .. code-block:: cmake

    module_include_directories(_module CommonCore)

#]==]
function(module_include_directories module_prefix module_target_name)

if(DEFINED ${module_prefix}_public_depends
  AND NOT "${${module_prefix}_public_depends}" STREQUAL "")
  foreach(dep IN LISTS ${module_prefix}_public_depends)

    foreach(entry IN LISTS module_map)
      string(FIND "${entry}" "=" pos)
      string(SUBSTRING "${entry}" 0 ${pos} key)
      math(EXPR val_pos "${pos}+1")
      string(SUBSTRING "${entry}" ${val_pos} -1 value)
      if(key STREQUAL "${dep}")
        get_target_property(public_include_directories
        ${value} module_include_directories)
        target_include_directories(${module_target_name}
        PUBLIC "${public_include_directories}")
        break()
      endif()
    endforeach()
  endforeach()

endif()

if(DEFINED ${module_prefix}_private_depends
  AND NOT "${${module_prefix}_private_depends}" STREQUAL "")
  foreach(dep IN LISTS ${module_prefix}_private_depends)

    foreach(entry IN LISTS module_map)
      string(FIND "${entry}" "=" pos)
      string(SUBSTRING "${entry}" 0 ${pos} key)
      math(EXPR val_pos "${pos}+1")
      string(SUBSTRING "${entry}" ${val_pos} -1 value)
      if(key STREQUAL "${dep}")
        get_target_property(private_include_directories
        ${value} module_include_directories)
        target_include_directories(${module_target_name}
        PRIVATE "${private_include_directories}")
        break()
      endif()
    endforeach()
  endforeach()

endif()

endfunction()

#[==[.rst:
.. cmake:function:: module_link_libraries(<prefix> <target_name>)

  A wrapper around ``target_link_libraries`` that works for modules.

  .. code-block:: cmake

    module_link_libraries(_module Common::Core)
#]==]
function(module_link_libraries module_prefix module_target_name)

  if(DEFINED ${module_prefix}_public_depends)
    foreach(dep IN LISTS ${module_prefix}_public_depends)

      foreach(entry IN LISTS module_map)
        string(FIND "${entry}" "=" pos)
        string(SUBSTRING "${entry}" 0 ${pos} key)
        math(EXPR val_pos "${pos}+1")
        string(SUBSTRING "${entry}" ${val_pos} -1 value)
        if(key STREQUAL "${dep}")
          target_link_libraries(${module_target_name} PUBLIC ${value})
          break()
        endif()
      endforeach()

    endforeach()
  else()
    message(FATAL_ERROR "[module_link_libraries] : module_public_depends not defined")
  endif()

  if(DEFINED ${module_prefix}_private_depends)
    foreach(dep IN LISTS ${module_prefix}_private_depends)

      foreach(entry IN LISTS module_map)
        string(FIND "${entry}" "=" pos)
        string(SUBSTRING "${entry}" 0 ${pos} key)
        math(EXPR val_pos "${pos}+1")
        string(SUBSTRING "${entry}" ${val_pos} -1 value)
        if(key STREQUAL "${dep}")
          target_link_libraries(${module_target_name} PRIVATE ${value})
          break()
        endif()
      endforeach()

    endforeach()
  else()
    message(FATAL_ERROR "[module_link_libraries] : module_private_depends not defined")
  endif()

  # Add system wise libraries if declared for each platform
  if(WIN32)
    if(DEFINED ${module_prefix}_windows_depends)
      foreach(sysdep IN LISTS ${module_prefix}_windows_depends)
        target_link_libraries(${module_target_name} PRIVATE ${sysdep})
      endforeach()
    endif()
  endif()

  if(UNIX)
    if(DEFINED ${module_prefix}_unix_depends)
      foreach(sysdep IN LISTS ${module_prefix}_unix_depends)
        target_link_libraries(${module_target_name} PRIVATE ${sysdep})
      endforeach()
    endif()
  endif()

  if(ANDROID)
    if(DEFINED ${module_prefix}_android_depends)
      foreach(sysdep IN LISTS ${module_prefix}_android_depends)
        target_link_libraries(${module_target_name} PRIVATE ${sysdep})
      endforeach()
    endif()
  endif()

  if(WASM)
    if(DEFINED ${module_prefix}_wasm_depends)
      foreach(sysdep IN LISTS ${module_prefix}_wasm_depends)
        target_link_libraries(${module_target_name} PRIVATE ${sysdep})
      endforeach()
    endif()
  endif()

endfunction()

#[==[.rst:
.. cmake:function:: module_add_compile_defintions(<prefix> <target_name>)

  A wrapper around ``target_compile_definitions`` that works for modules.

  .. code-block:: cmake

    module_add_compile_defintions(_module Common::Core)
#]==]
function(module_add_compile_defintions module_prefix module_target_name)
  if(DEFINED ${module_prefix}_compile_flags)
    target_compile_definitions(${module_target_name}
    PUBLIC ${${module_prefix}_compile_flags})
  endif()

  # add system wise compile flags if declared for each platform
  if(WIN32)
    if(DEFINED ${module_prefix}_windows_compile_flags)
      target_compile_definitions(${module_target_name}
      PRIVATE ${${module_prefix}_windows_compile_flags})
    endif()
  endif()

  if(UNIX)
    if(DEFINED ${module_prefix}_unix_compile_flags)
      target_compile_definitions(${module_target_name}
      PRIVATE ${${module_prefix}_unix_compile_flags})
    endif()
  endif()

  if(ANDROID)
    if(DEFINED ${module_prefix}_android_compile_flags)
      target_compile_definitions(${module_target_name}
      PRIVATE ${${module_prefix}_android_compile_flags})
    endif()
  endif()

  if(WASM)
    if(DEFINED ${module_prefix}_wasm_compile_flags)
      target_compile_definitions(${module_target_name}
        PRIVATE ${${module_prefix}_wasm_compile_flags})
    endif()
  endif()

endfunction()

#[==[.rst:
  .. cmake:function:: scan_module_file(<prefix> <file_path>)

  The slxio.module is parsed and used as input to the CMake build system
  Uppercase keys are used to define various properties of the module.
  any uppercase key is considered a valid key except the values TRUE/FALSE
  Uppercase values are not allowed as they will be considered as keys
  This function sets pattern for module metadata in parent scope as
    <prefix>_<key>
  NOTE:
   if <file_path> not given, the default is the value of the variable
    ${CMAKE_CURRENT_SOURCE_DIR}/slxio.module

    .. code-block:: cmake
        scan_module_file(_module)

      Sets
        _module_name
        _mdoule_version
        ....
#]==]
function(scan_module_file prefix)

  if(ARGC GREATER 1)
    set(_module_path "${ARGV1}")
  else()
    set(_module_path "${CMAKE_CURRENT_SOURCE_DIR}/slxio.module")
  endif()
  if(NOT EXISTS "${_module_path}")
    message(FATAL_ERROR "[scan_module_file] slxio.module not found at: ${_module_path}")
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
  if(SLXIO_MODULE_DEBUG)
    message(STATUS "[scan_module_file] Scanning module file : ${_module_path}")
  endif()
  foreach(i RANGE 0 ${last_index})
    list(GET contents ${i} line)
    string(STRIP "${line}" strip_line)

    if(strip_line STREQUAL "")
      continue()
    endif()
    string(REGEX MATCH "^[A-Z_]+$" is_key "${strip_line}")
    if(is_key
        AND NOT strip_line STREQUAL "TRUE"
        AND NOT strip_line STREQUAL "FALSE")
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
.. cmake:function:: add_test_sources(<target> [<source>...])

  A wrapper around ``target_sources`` that works for module test sources.

  .. code-block:: cmake

    add_test_sources(CommonCore TestFileSystem.cxx)
#]==]
function(add_test_sources module_target)

  get_target_property(module_source_directory
          ${module_target} module_source_dir)
  scan_module_file(_module
  ${module_source_directory}/slxio.module)

  foreach(filename IN LISTS ARGN)
    get_filename_component(test_source_filename "${filename}" NAME_WE)
    set(test_target_name "${_module_library_name}${test_source_filename}")
    add_executable(${test_target_name} ${filename})
    add_test_dependencies(${test_target_name} _module)
    test_include_directory(${test_target_name} _module)
    test_link_libraries(${test_target_name} _module)
    add_test(NAME ${test_target_name} COMMAND ${test_target_name})
  endforeach()

endfunction()

#[==[.rst:
.. cmake:function:: add_test_dependencies(<target> <prefix>)

  A wrapper around ``add_dependencies`` that works for module test dependencies.
  fetch all required and optional dependencies for the module tests targets

#]==]
function(add_test_dependencies test_target module_prefix)

  add_dependencies(${test_target} ${${module_prefix}_library_name})
  set(module_test_dep_targets "")
  foreach(test_dep IN LISTS ${module_prefix}_test_depends
    ${module_prefix}_test_optional_depends)
    module_target_name(${test_dep} test_dep_library_name)
    list(APPEND module_test_dep_targets ${test_dep_library_name})
  endforeach()
  if(module_test_dep_targets)
    add_dependencies(${test_target} ${MODULE_test_dep_targets})
  endif()

endfunction()

#[==[.rst:
  ..  cmake_function:test_include_directory(<test_target> <prefix>)

  A wrapper around target_include_directory() but for modules test dependency

#]==]
function(test_include_directory test_target module_prefix)

  get_target_property(public_include_directories
        ${${module_prefix}_library_name} module_include_directories)

  target_include_directories(${test_target} PUBLIC
      "${public_include_directories}")

  if(DEFINED ${module_prefix}_test_depends AND NOT
  "${module_prefix}_test_depends" STREQUAL "")
    foreach(test_dep IN LISTS ${module_prefix}_test_depends)

      foreach(entry IN LISTS module_map)
        string(FIND "${entry}" "=" pos)
        string(SUBSTRING "${entry}" 0 ${pos} key)
        math(EXPR val_pos "${pos}+1")
        string(SUBSTRING "${entry}" ${val_pos} -1 value)
        if(key STREQUAL "${test_dep}")
          get_target_property(test_depends_include_directories
            ${value} module_include_directories)
          target_include_directories(${test_target}
            PRIVATE "${test_depends_include_directories}")
          break()
        endif()
      endforeach()

    endforeach()
  endif()

endfunction()

#[==[.rst:
.. cmake:function:: test_link_libraries(<target> <prefix>)

  A wrapper around ``target_link_libraries`` that works for module test dependencies.

  test_link_libraries(IOSlxTestParameterParser ThirdParty::libxml2)
#]==]
function(test_link_libraries test_target module_prefix)

  target_link_libraries(${test_target} PRIVATE
  ${${module_prefix}_library_name})

endfunction()

#[==[.rst:
.. cmake:function:: add_thirdparty_module(<name> <path> <target>)

  Wrapper for vendored third‑party libraries.

  .. code-block:: cmake

    add_thirdparty_module(libuv
        ${PROJECT_SOURCE_DIR}/ThirdParty/libuv
        uv)
#]==]
function(add_thirdparty_module module_name module_path target_name)

  add_subdirectory(src)

  set(module_map
    "${module_map};ThirdParty::${module_name}=${target_name}"
    CACHE INTERNAL "Global module name-target mapping")

  get_target_property(thirdparty_includes ${target_name} INCLUDE_DIRECTORIES)
  if(NOT thirdparty_includes)
    set(thirdparty_includes "")
  endif()

  set_target_properties(${target_name} PROPERTIES
    module_include_directories "${thirdparty_includes};${CMAKE_CURRENT_SOURCE_DIR}"
    module_source_dir "${module_path}")

endfunction()
