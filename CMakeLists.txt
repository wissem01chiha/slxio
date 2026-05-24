# SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
# SPDX-License-Identifier: Apache-2.0
cmake_minimum_required(VERSION 3.12...3.21 FATAL_ERROR)

project(slxio)

if(POLICY CMP0077)
  cmake_policy(SET CMP0077 NEW)
endif()

set(slxio_cmake_dir "${PROJECT_SOURCE_DIR}/CMake")
list(INSERT CMAKE_MODULE_PATH 0 "${slxio_cmake_dir}")
include(CI)

if(APPLE)
  include(Apple)
endif()

if(WIN32)
  include(Windows)
endif()

find_package(Git)
include(DetermineVersion)
include(Version)
set(SLXIO_VERSION
    "${SLXIO_MAJOR_VERSION}.${SLXIO_MINOR_VERSION}.${SLXIO_PATCH_VERSION}")

include(CMakeDependentOption)

get_property(IS_MULTI GLOBAL PROPERTY GENERATOR_IS_MULTI_CONFIG)
if(NOT DEFINED CMAKE_BUILD_TYPE AND NOT IS_MULTI)
    message(STATUS "No CMAKE_BUILD_TYPE set -- using Release")
    set(CMAKE_BUILD_TYPE Release)
endif()

add_library(slxio INTERFACE)
add_library(SLXIO::SLXIO ALIAS slxio)

include(CompilerChecks)
include(CompilerFlags)
include(CompilerPlatformChecks)
include(CompilerPlatformFlags)
include(CompilerExtraFlags)
include(CompilerWarningFlags)

#-----------------------------------------------------------------------------
# License files installation
set(CMAKE_INSTALL_LICENSEDIR ""
  CACHE STRING "License files")
mark_as_advanced(CMAKE_INSTALL_LICENSEDIR)
if (NOT CMAKE_INSTALL_LICENSEDIR)
  set(CMAKE_INSTALL_LICENSEDIR
    "${CMAKE_INSTALL_DATAROOTDIR}/licenses/${CMAKE_PROJECT_NAME}")
endif ()

set(SLXIO_SIMULINK_VERSION "R2018b")

#-----------------------------------------------------------------------------
# Support for 64 bits Identifiers
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
  set(SLXIO_64BIT_IDS  1)
elseif(CMAKE_SIZEOF_VOID_P EQUAL 4)
  set(SLXIO_64BIT_IDS  0)
endif()

#-----------------------------------------------------------------------------
# Build static or shared libraries.
option(BUILD_SHARED_LIBS "Build with shared libraries." OFF)
set(SLXIO_BUILD_SHARED ${BUILD_SHARED_LIBS})
if(SLXIO_BUILD_SHARED)
  set(BUILD_SHARED_LIBS TRUE)
else()
  set(BUILD_SHARED_LIBS FALSE)
endif()

#-----------------------------------------------------------------------------
# Select Logging ThirdParty Utility
option(SLXIO_LOGURU "Use Loguru library for logging" FALSE)
option(SLXIO_SLOG  "Use slog library for logging" TRUE)

if(SLXIO_LOGURU AND SLXIO_SLOG)
  message(FATAL_ERROR "Slog and Loguru enabled both")
elseif(NOT SLXIO_LOGURU AND NOT SLXIO_SLOG)
  set(SLXIO_SLOG ON)
endif()

#-----------------------------------------------------------------------------
# Testing
option(SLXIO_BUILD_TESTS "Build library tests" ON)
CMAKE_DEPENDENT_OPTION(SLXIO_BUILD_THIRDPARTY_TESTS "Build vendored modules tests"
    OFF "SLXIO_BUILD_TESTS" OFF)
mark_as_advanced(SLXIO_BUILD_THIRDPARTY_TESTS)
CMAKE_DEPENDENT_OPTION(SLXIO_COVERAGE "Enable testing code coverage"
    OFF "SLXIO_BUILD_TESTS" OFF)
mark_as_advanced(SLXIO_COVERAGE)

#-----------------------------------------------------------------------------
# Sanitizers
option(SLXIO_ASAN "Enable AddressSanitizer (ASan)" OFF)
mark_as_advanced(SLXIO_ASAN)
option(SLXIO_MSAN "Enable MemorySanitizer (MSan)" OFF)
mark_as_advanced(SLXIO_MSAN)
option(SLXIO_TSAN "Enable ThreadSanitizer (TSan)" OFF)
mark_as_advanced(SLXIO_TSAN)
option(SLXIO_UBSAN "Enable UndefinedBehaviorSanitizer (UBSan)" OFF)
mark_as_advanced(SLXIO_UBSAN)

#-----------------------------------------------------------------------------
# Package Config
option(SLXIO_PKGCONFIG "Generate pkg-config file during build" ON)
mark_as_advanced(SLXIO_PKGCONFIG)
if(SLXIO_PKGCONFIG)
    find_package(PkgConfig)
    if(PKG_CONFIG_FOUND)
        set(SLXIO_PC "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}.pc")
        configure_file(
            ${CMAKE_CURRENT_SOURCE_DIR}/${PROJECT_NAME}.pc.in
            ${SLXIO_PC}
            @ONLY
        )
    endif()
endif()

#-----------------------------------------------------------------------------
# CTest Config
set(SLXIO_ROOT_DIR "${PROJECT_SOURCE_DIR}")

#-----------------------------------------------------------------------------
# Documentation Config
option(SLXIO_DOXYGEN_DOCUMENTATION "Enable Doxygen documentation generation" ON)



option(SLXIO_OPENMP "Enable OpenMP support" ON)

option(SLXIO_INSTALL "Enable installtion after build" OFF)

option(SLXIO_BUILD_EXAMPLES "Build example applications" OFF)
option(SLXIO_BUILD_PYTHON "Enable building Python Interface" ON)
option(SLXIO_BUILD_JAVA "Enable building Java Interface" ON)
option(SLXIO_FORCE_LOCAL_MODULES "Enable Using local installed modules" ON)
option(SLXIO_ENABLE_WERROR "Enable treating warnings as errors" OFF)
option(SLXIO_ENABLE_WALL "Enable all compiler warnings" ON)
option(SLXIO_MODULE_DEBUG "Enable Debugging module during build" OFF)
option(SLXIO_ENABLE_CPPCHECK "Enable cppcheck static analysis" OFF)
option(SLXIO_ENABLE_CLANG_TIDY "Enable clang-tidy static analysis" OFF)


include(Sanitize)
include(Testing)
include(ModuleThirdParty)
include(ModuleDebugging)
include(Module)
include(Install)

add_subdirectory(ThirdParty/zlib)
add_submodules(${CMAKE_CURRENT_SOURCE_DIR})
summary()
