# Distributed under the Apache-2.0 License.  See accompanying file
# LICENSE.rst or https://cmake.org/licensing for details.

# SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
# SPDX-License-Identifier: Apache-2.0

#[=======================================================================[.rst:
Module.cmake
------
Changelog:
  - 03-08-2026 Wissem CHIHA Intial Release
  - 04-08-2026 Add CMAKE_BINARY_NAME_PREFIX
#]=======================================================================]

#[==[.rst:
.. cmake:function:: add_module(
      MODULE_NAME
      MODULE_GROUP
      LIBRARY_NAME
      MODULE_DESCRIPTION
      MODULE_MAINTAINER
      MODULE_SPDX_LICENSE_IDENTIFIER
      MODULE_SPDX_COPYRIGHT_TEXT
      MODULE_SPDX_CUSTOM_LICENSE_FILE
      MODULE_SPDX_CUSTOM_LICENSE_NAME
      MODULE_ENABLE_BUILD
      MODULE_ENABLE_TESTS
      MODULE_ENABLE_COVERAGE
      MODULE_INCLUDE_IN_GROUP
      MODULE_INSTALL_HEADERS
      MODULE_INSTALL_TARGETS
      MODULE_INSTALL_LICENSES
      MODULE_INSTALL_DOCS
      MODULE_INSTALL_RESOURCES
      MODULE_ENABLE_DOCS
      MODULE_DOCS_SOURCES
      MODULE_DOCS_TOOL
      MODULE_DOCS_OUTPUT_DIR
      MODULE_CLASSES
      MODULE_SOURCES
      MODULE_HEADERS
      MODULE_CONFIG_HEADERS
      MODULE_RESOURCES
      MODULE_WINDOWS_SOURCES
      MODULE_UNIX_SOURCES
      MODULE_MACOS_SOURCES
      MODULE_ANDROID_SOURCES
      MODULE_WASM_SOURCES
      MODULE_WINDOWS_HEADERS
      MODULE_UNIX_HEADERS
      MODULE_MACOS_HEADERS
      MODULE_ANDROID_HEADERS
      MODULE_WASM_HEADERS
      MODULE_WINDOWS_CLASSES
      MODULE_UNIX_CLASSES
      MODULE_MACOS_CLASSES
      MODULE_PUBLIC_DEPENDS
      MODULE_PRIVATE_DEPENDS
      MODULE_TEST_DEPENDS
      MODULE_WINDOWS_DEPENDS
      MODULE_UNIX_DEPENDS
      MODULE_MACOS_DEPENDS
      MODULE_ANDROID_DEPENDS
      MODULE_WASM_DEPENDS
      MODULE_COMPILE_FLAGS
      MODULE_WINDOWS_COMPILE_FLAGS
      MODULE_UNIX_COMPILE_FLAGS
      MODULE_MACOS_COMPILE_FLAGS
      MODULE_ANDROID_COMPILE_FLAGS
      MODULE_WASM_COMPILE_FLAGS
      MODULE_CROSS_COMPILE_FLAGS
      MODULE_EXPORT_TARGETS
      MODULE_PACKAGE_CONFIG
  )
#]==]
function(add_module)
  set(options
      MODULE_ENABLE_COVERAGE
      MODULE_INSTALL_HEADERS
      MODULE_INSTALL_TARGETS
      MODULE_INSTALL_LICENSES
      MODULE_INSTALL_DOCS
      MODULE_INSTALL_RESOURCES
      MODULE_ENABLE_DOCS)
  set(oneValueArgs
      MODULE_NAME
      MODULE_GROUP
      LIBRARY_NAME
      MODULE_DESCRIPTION
      MODULE_MAINTAINER
      MODULE_SPDX_LICENSE_IDENTIFIER
      MODULE_SPDX_COPYRIGHT_TEXT
      MODULE_SPDX_CUSTOM_LICENSE_FILE
      MODULE_SPDX_CUSTOM_LICENSE_NAME
      MODULE_DOCS_TOOL
      MODULE_DOCS_OUTPUT_DIR
      MODULE_EXPORT_TARGETS
      MODULE_PACKAGE_CONFIG
      MODULE_ENABLE_BUILD
      MODULE_ENABLE_TESTS)
  set(multiValueArgs
      MODULE_CLASSES
      MODULE_SOURCES
      MODULE_HEADERS
      MODULE_CONFIG_HEADERS
      MODULE_PCH_HEADERS
      MODULE_RESOURCES
      MODULE_WINDOWS_SOURCES
      MODULE_UNIX_SOURCES
      MODULE_MACOS_SOURCES
      MODULE_ANDROID_SOURCES
      MODULE_WASM_SOURCES
      MODULE_TEST_SOURCES
      MODULE_TEST_SOURCE_DIR
      MODULE_TEST_DATA_SOURCE_DIR
      MODULE_TEST_DATA_SOURCES
      MODULE_WINDOWS_HEADERS
      MODULE_UNIX_HEADERS
      MODULE_MACOS_HEADERS
      MODULE_ANDROID_HEADERS
      MODULE_WASM_HEADERS
      MODULE_WINDOWS_CLASSES
      MODULE_UNIX_CLASSES
      MODULE_MACOS_CLASSES
      MODULE_PUBLIC_DEPENDS
      MODULE_PRIVATE_DEPENDS
      MODULE_TEST_DEPENDS
      MODULE_WINDOWS_DEPENDS
      MODULE_UNIX_DEPENDS
      MODULE_MACOS_DEPENDS
      MODULE_ANDROID_DEPENDS
      MODULE_WASM_DEPENDS
      MODULE_COMPILE_FLAGS
      MODULE_WINDOWS_COMPILE_FLAGS
      MODULE_UNIX_COMPILE_FLAGS
      MODULE_MACOS_COMPILE_FLAGS
      MODULE_ANDROID_COMPILE_FLAGS
      MODULE_WASM_COMPILE_FLAGS
      MODULE_CROSS_COMPILE_FLAGS
      MODULE_LICENSE_FILES
      MODULE_DOCS_SOURCES)

  cmake_parse_arguments(MOD "${options}" "${oneValueArgs}" 
                        "${multiValueArgs}"
                        ${ARGN})

  set(TARGET_NAME "${MOD_LIBRARY_NAME}")
  # target module binary output name 
  if(CMAKE_BINARY_NAME_PREFIX)
    set(TARGET_OUTPUT_NAME "${CMAKE_BINARY_NAME_PREFIX}${MOD_LIBRARY_NAME}")
  endif()

  foreach(cfg_header IN LISTS MOD_MODULE_CONFIG_HEADERS)
    get_filename_component(cfg_header_name "${cfg_header}" NAME_WE)
    configure_file(
      ${cfg_header}
      ${CMAKE_CURRENT_BINARY_DIR}/${cfg_header_name}.h
      @ONLY)
  endforeach()

  if(MOD_MODULE_ENABLE_BUILD)
    add_library(
      ${TARGET_NAME}
      ${MOD_MODULE_SOURCES}
      ${MOD_MODULE_HEADERS}
      ${MOD_MODULE_CLASSES}
      ${MOD_MODULE_RESOURCES})
     
    if(CMAKE_BINARY_NAME_PREFIX) 
      set_target_properties(${TARGET_NAME} PROPERTIES
            OUTPUT_NAME "${TARGET_OUTPUT_NAME}")
    endif()
    target_include_directories(${TARGET_NAME} PUBLIC
      $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>)

    if(WIN32)
      target_sources(${TARGET_NAME} PRIVATE ${MOD_MODULE_WINDOWS_SOURCES})
    elseif(UNIX AND NOT APPLE)
      target_sources(${TARGET_NAME} PRIVATE ${MOD_MODULE_UNIX_SOURCES})
    elseif(APPLE)
      target_sources(${TARGET_NAME} PRIVATE ${MOD_MODULE_MACOS_SOURCES})
    elseif(ANDROID)
      target_sources(${TARGET_NAME} PRIVATE ${MOD_MODULE_ANDROID_SOURCES})
    elseif(WASM)
      target_sources(${TARGET_NAME} PRIVATE ${MOD_MODULE_WASM_SOURCES})
    endif()
     
  foreach(pch_header IN LISTS MOD_MODULE_PCH_HEADERS)
    target_precompile_headers(${TARGET_NAME} PRIVATE  
      ${pch_header}
    )
  endforeach()

    if(MOD_MODULE_COMPILE_FLAGS)
      target_compile_options(${TARGET_NAME} PRIVATE 
        ${MOD_MODULE_COMPILE_FLAGS})
    endif()
    
    if(MOD_MODULE_PUBLIC_DEPENDS)
      target_link_libraries(${TARGET_NAME} PUBLIC 
        ${MOD_MODULE_PUBLIC_DEPENDS})
        # add include directories from dependency targets 
        foreach(module_depend IN LISTS MOD_MODULE_PUBLIC_DEPENDS)
          get_target_property(module_depend_includes ${module_depend} INCLUDE_DIRECTORIES)
          if(NOT module_depend_includes)
            target_include_directories(${TARGET_NAME} PUBLIC ${module_depend_includes})
          endif()
        endforeach()
    endif()
    if(MOD_MODULE_PRIVATE_DEPENDS)
      target_link_libraries(
        ${TARGET_NAME}
        PRIVATE ${MOD_MODULE_PRIVATE_DEPENDS})
    endif()
    if(MOD_MODULE_INSTALL_TARGETS)
      install(TARGETS ${TARGET_NAME} DESTINATION lib)
    endif()
    if(MOD_MODULE_HEADERS AND MOD_MODULE_INSTALL_HEADERS)
      install(
        FILES ${MOD_MODULE_HEADERS}
        DESTINATION include/${MOD_MODULE_NAME})
    endif()
    if(MOD_MODULE_LICENSE_FILES AND MOD_MODULE_INSTALL_LICENSES)
      install(
        FILES ${MOD_MODULE_LICENSE_FILES}
        DESTINATION share/licenses/${MOD_MODULE_NAME})
    endif()
    if(MOD_MODULE_DOCS_SOURCES AND MOD_MODULE_INSTALL_DOCS)
      install(
        FILES ${MOD_MODULE_DOCS_SOURCES}
        DESTINATION share/docs/${MOD_MODULE_NAME})
    endif()
    if(MOD_MODULE_RESOURCES AND MOD_MODULE_INSTALL_RESOURCES)
      install(
        FILES ${MOD_MODULE_RESOURCES}
        DESTINATION share/resources/${MOD_MODULE_NAME})
    endif()
  endif()

  # fixed issue with building tests even MODULE_TEST_DEPENDS is evaluated
  # to empty this was disable standlone tests from beeing compiled
  if(MOD_MODULE_ENABLE_TESTS)

    enable_testing()
    foreach(test_source IN LISTS MOD_MODULE_TEST_SOURCES)
      get_filename_component(test_source_name "${test_source}" NAME_WE)
      if(MOD_MODULE_TEST_SOURCE_DIR)
        set(test_source "${MOD_MODULE_TEST_SOURCE_DIR}/${test_source}")
      endif()

      add_executable(${TARGET_NAME}${test_source_name} ${test_source})
      if(CMAKE_BINARY_NAME_PREFIX) 
        set_target_properties(${TARGET_NAME}${test_source_name} PROPERTIES
          OUTPUT_NAME "${CMAKE_BINARY_NAME_PREFIX}${TARGET_NAME}${test_source_name}"
        )
      endif()
      
      get_target_property(module_includes ${TARGET_NAME} INCLUDE_DIRECTORIES)
      if(module_includes)
        target_include_directories(${TARGET_NAME}${test_source_name}
          PRIVATE ${module_includes})
      endif()

      if(NOT MODULE_TEST_DEPENDS)
        foreach(test_depends IN LISTS MOD_MODULE_TEST_DEPENDS)
          if(TARGET ${test_depends})
            get_target_property(test_depends_includes ${test_depends} INCLUDE_DIRECTORIES)
            if(test_depends_includes)
              target_include_directories(${TARGET_NAME}${test_source_name} 
              PRIVATE ${test_depends_includes})
            endif()
          endif()
        endforeach()
      endif()

      if(NOT MODULE_TEST_DEPENDS)
        target_link_libraries(
          ${TARGET_NAME}${test_source_name}
          PRIVATE ${MOD_MODULE_TEST_DEPENDS}
          PUBLIC ${TARGET_NAME})
      else()
          target_link_libraries(
            ${TARGET_NAME}${test_source_name}
            PUBLIC ${TARGET_NAME})
      endif()

      add_test(NAME ${TARGET_NAME}${test_source_name} COMMAND
        ${TARGET_NAME}${test_source_name}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
    endforeach()

    foreach(test_data_source ${MOD_MODULE_TEST_DATA_SOURCES})
      if(MOD_TEST_DATA_SOURCE_DIR)
        set(test_data "${MOD_MODULE_TEST_DATA_DIR}/${test_data_source}")
      else()
        set(test_data "${test_data_source}")
      endif()
      configure_file(
          ${CMAKE_CURRENT_SOURCE_DIR}/${test_data}
          ${CMAKE_CURRENT_BINARY_DIR}/${test_data_source}
          COPYONLY
      )
    endforeach()

  endif()
endfunction()
