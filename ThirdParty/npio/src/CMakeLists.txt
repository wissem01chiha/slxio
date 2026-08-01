# SPDX-FileCopyrightText: Copyright (c) Wissem Chiha
# SPDX-License-Identifier: MIT

cmake_minimum_required(VERSION 3.22)

project(
  npio
  VERSION 0.1.0
  DESCRIPTION "NUMPY NPY/NPZ File I/O Library"
  HOMEPAGE_URL "https://github.com/wissem01chiha/npio"
  LANGUAGES C 
)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})

include(CMakePackageConfigHelpers)
include(CMakeDependentOption)
include(CheckCCompilerFlag)
include(GNUInstallDirs)

set(CMAKE_C_VISIBILITY_PRESET hidden)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)
set(CMAKE_C_STANDARD 11)

set(CMAKE_EXPORT_COMPILE_COMMANDS OFF)

set (CTEST_OUTPUT_ON_FAILURE TRUE)
set(BUILD_TESTING ON)

option(NPIO_BUILD_SHARED "Build shared library" OFF)
# this option is usful in projects when zlib is already build or fetched by the 
# project and we want to use it instead of building it again.
# by default set to ON in standlone builds
option(NPIO_FORCE_LOCAL_ZLIB "force auto-fetch and build of zlib" ON)

cmake_dependent_option(NPIO_BUILD_TESTS
  "Build the unit tests when BUILD_TESTING is enabled and we are the root project" ON
  "BUILD_TESTING;CMAKE_SOURCE_DIR STREQUAL PROJECT_SOURCE_DIR" OFF)

option(NPIO_ASAN "Enable Address Sanitizer" OFF)
option(NPIO_UBSAN "Enable Undefined Behavior Sanitizer" OFF)
option(NPIO_COVER "Enable Test Coverage Reporting" ON)

if(CMAKE_C_COMPILER_ID MATCHES "AppleClang|GNU|Clang")
    if(CMAKE_C_CLANG_TIDY)
      message(STATUS "clang-tidy detected; skipping sanitizer
       flags to avoid interfering with static analysis")
    else()
      if(NPIO_ASAN)
        list(APPEND NPIO_SANITIZERS -fsanitize=address)
      endif()

      if(NPIO_UBSAN)
        list(APPEND NPIO_SANITIZERS -fsanitize=undefined)
      endif()

      if(NPIO_SANITIZERS)
        list(APPEND NPIO_SANITIZERS -fno-omit-frame-pointer)
        add_library(npio_sanitizers INTERFACE)
        target_compile_options(npio_sanitizers INTERFACE ${NPIO_SANITIZERS})
        target_link_options(npio_sanitizers INTERFACE ${NPIO_SANITIZERS})
        set(SANITIZERS_AVAILABLE TRUE)
      endif()
    endif()
endif()

set(npio_sources 
  src/npio.c
)

set(npio_test_sources 
  test/test_npio_strerror.c
  test/test_np_array_create.c
  test/test_npy_fopen.c
  test/test_npy_fread.c
  test/test_npy_fwrite.c
  test/test_npy_read.c
)

if(NPIO_FORCE_LOCAL_ZLIB)
  include(cmake/external/zlib.cmake)
endif()

if(NPIO_BUILD_TESTS)
  include(CTest)
  enable_testing()
  find_package(Unity)
  if(NOT Unity_FOUND)
    include(cmake/external/unity.cmake)
  endif()
endif()

if(NPIO_BUILD_SHARED)
 add_library(npio SHARED ${npio_sources})
 set_target_properties(npio PROPERTIES OUTPUT_NAME "npio")
 target_link_libraries(npio PUBLIC ZLIB::ZLIB)
  if(SANITIZERS_AVAILABLE)
    target_link_libraries(npio PUBLIC npio_sanitizers)
  endif()
endif()

add_library(npio_a STATIC ${npio_sources})
set_target_properties(npio_a PROPERTIES OUTPUT_NAME "npio")
if(ZLIB_FOUND)
  target_link_libraries(npio_a PUBLIC ZLIB::ZLIB)
else()
  target_link_libraries(npio_a PUBLIC ZLIB::ZLIBSTATIC)
endif()
if(SANITIZERS_AVAILABLE)
  target_link_libraries(npio_a PUBLIC npio_sanitizers)
endif()

if(NPIO_COVER AND NOT WIN32)
  set(NPIO_COVERAGE_COMPILE_FLAGS -g -O0 -fprofile-arcs -ftest-coverage)
  set(NPIO_COVERAGE_LINK_FLAGS --coverage)
  target_compile_options(npio_a PUBLIC ${NPIO_COVERAGE_COMPILE_FLAGS})
  if(TARGET npio)
    target_compile_options(npio PUBLIC ${NPIO_COVERAGE_COMPILE_FLAGS})
    target_link_options(npio PUBLIC ${NPIO_COVERAGE_LINK_FLAGS})
  endif()
endif()

if(NPIO_BUILD_TESTS)

  file(GLOB TEST_DATA_FILES "${CMAKE_CURRENT_SOURCE_DIR}/test/data/*")
  foreach(f ${TEST_DATA_FILES})
    get_filename_component(fname ${f} NAME)
    configure_file(${f} ${CMAKE_CURRENT_BINARY_DIR}/${fname} COPYONLY)
  endforeach()

  foreach(npio_test_source IN LISTS npio_test_sources)

    get_filename_component(npio_test_bin ${npio_test_source} NAME_WE)
    add_executable(${npio_test_bin} ${npio_test_source})
    target_include_directories(${npio_test_bin} PRIVATE 
      ${Unity_INCLUDE_DIRS} 
      ${CMAKE_SOURCE_DIR}/src
    )

    if(NPIO_COVER AND NOT(WIN32))
      target_compile_options(${npio_test_bin} PRIVATE ${NPIO_COVERAGE_COMPILE_FLAGS})
      target_link_options(${npio_test_bin} PRIVATE ${NPIO_COVERAGE_LINK_FLAGS})
    endif()

    add_test(NAME ${npio_test_bin} 
      COMMAND ${npio_test_bin}
      WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    )
    if(NPIO_BUILD_SHARED)
      target_link_libraries(${npio_test_bin} PRIVATE unity npio)
      add_dependencies(${npio_test_bin} npio)
    else()
      target_link_libraries(${npio_test_bin} PRIVATE unity npio_a)
      add_dependencies(${npio_test_bin} npio_a)
    endif()
    if(SANITIZERS_AVAILABLE)
      target_link_libraries(${npio_test_bin} PRIVATE npio_sanitizers)
    endif()

  endforeach()
endif()

configure_file(
  ${CMAKE_CURRENT_SOURCE_DIR}/${PROJECT_NAME}.pc.in
  ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}.pc
  @ONLY
)

install(DIRECTORY src/
  DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
  FILES_MATCHING PATTERN "*.*h"
)

install(
  FILES ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}.pc
  DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig
)

if(NPIO_BUILD_SHARED)
  install(TARGETS npio  EXPORT npioTargets)
else()
  install(TARGETS npio_a  EXPORT npioTargets)
endif()

write_basic_package_version_file("npio-config-version.cmake"
  VERSION ${PROJECT_VERSION}
  COMPATIBILITY SameMajorVersion
)

configure_file(
  "${PROJECT_SOURCE_DIR}/cmake/npio-config.cmake.in"
  "${PROJECT_BINARY_DIR}/npio-config.cmake"
  @ONLY)

install(FILES
  "${PROJECT_BINARY_DIR}/npio-config-version.cmake"
  "${PROJECT_BINARY_DIR}/npio-config.cmake"
  DESTINATION share/cmake/npio)

set(CPACK_PACKAGE_VENDOR "wissem")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "NUMPY NPY/NPZ File I/O Library")
set(CMAKE_PROJECT_HOMEPAGE_URL "https://github.com/wissem01chiha/npio")
set(CPACK_RESOURCE_FILE_LICENSE "${PROJECT_SOURCE_DIR}/LICENSE")
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")
include(CPack)

