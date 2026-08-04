# SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.18...3.21 FATAL_ERROR)

project(SLXIO)

list(PREPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/CMake")

if(APPLE)
  include(Apple)
endif()
if(WIN32)
  include(Windows)
endif()

find_package(Git)
include(DetermineVersion)
include(CMakeDependentOption)

# Build slxio static or shared libs
option(SLXIO_BUILD_SHARED_LIBS  "" OFF)

# Option to enable using std::unit64_t types
# if the platform/compiler do not support 64bit 
# this trow an error
option(SLXIO_64BIT_IDENTIFIERS  "" ON)
set(SLXIO_64BIT_IDENTIFIERS ${SLXIO_64BIT_IDENTIFIERS})

# Enable unit, integration testing 
option(SLXIO_BUILD_TESTING      "" ON)

# Works if SLXIO_BUILD_TESTING is ON
option(SLXIO_ENABLE_TESTING_COVERAGE "" ON)

# Option to enable compling example scripts
option(SLXIO_BUILD_EXAMPLES     "" OFF)

# by default it will look for any installed Simulink instances
# if found , will set the targte simulink version autoamtlcy to match
# else can be force to one of the support Releases, for more information 
# refre to https://wissem01chiha.github.io/slxio/matlab-support.html
set(SLXIO_SIMULINK_DEFAULT_VERSION R2018b)

# Option to enable building utuiles like console application and other
option(SLXIO_WITH_Interaction "" ON)

# Option to 
option(SLXIO_BUILD_PYTHON_BINDINGS  "" ON)

#
option(SLXIO_BUILD_JAVA_BINDINGS    "" ON)

# Option to use only vendored third_party modules
option(SLXIO_FORCE_LOCAL_MODULES  "" ON)

# Use System wise installed modules when found
option(SLXIO_USE_SYSTEM_MODULES  "" OFF)

# vendored third_parties are being build by other tagrets
option(SLXIO_DISABLE_VENDORED_MODULES "" OFF)

# Option to install vendored third_party modules lisences
option(SLXIO_INTSALL_THIRDPARTY_LISENCES "" ON)

# Option to enable building third party module tests for regression, 
# this option need SLXIO_BUILD_TESTING enabled to work 
option(SLXIO_BUILD_THIRDPARTY_TESTING "" OFF)

# Option to enable *.sldd file support
set(SLXIO_SLDD "Enable Simulink Data Dictionary support" ON)
set(SLDD ${SLXIO_SLDD})

# Option to enable *.mat file support
set(SLXIO_MATIO "Enable MATLAB MAT file support" ON)

# Build with hdf5 library support, this option enable building
# slxio internal HDF5 Exporter Interface as well as support for MAT
# files with HDF5 throw MATIO_WITH_HDF5 enabled automatlcy 
option(SLXIO_WITH_HDF5 "Check for hdf5 library" ON)

# Option to enable position-independent code (PIC)
option(SLXIO_PIC "Enable position-independent code (PIC)" ON)

# Option to enable visualization modules support
# Note thatenbaling this option may require addtionla third
# parties not manged by project  build, eg Qt, wsWidgets, 
# or other installed on host machine
option(SLXIO_WITH_VISUALIZATION "" ON)

# Option to enbale support for *.mdl files , not that *.mdl files are
# experimental support and may be instlble
option(SLXIO_MDL "Enable legacy simulink model files support" OFF)
set(MDL ${SLXIO_MDL})

# Option to enable installtion rules on targte machine
option(SLXIO_INSTALL "Enable installtion after build" ON)

# Option to whatver install sofwtare lisences, this require SLXIO_INSTALL
# enaled  
option(CMAKE_INSTALL_LICENSEDIR "")
mark_as_advanced(CMAKE_INSTALL_LICENSEDIR)

# 
option(CMAKE_DEFAULT_LICENSEDIR ${CMAKE_INSTALL_DATAROOTDIR}/licenses/${CMAKE_PROJECT_NAME})

# Override default build type
option(SLXIO_DEFAULT_BUILD_TYPE "" Release)

# Option to use package-config tooling, this requird Pkg-Config installed
# for more information : https://people.freedesktop.org/~dbn/pkg-config-guide.html
option(SLXIO_WITH_PKGCONFIG "Generate pkg-config file during build" ON)
mark_as_advanced(SLXIO_WITH_PKGCONFIG)

# Option to genarte API html pages documenations, this require doxygen installed 
# else throw a build error 
option(SLXIO_DOXYGEN_DOCUMENTATION "Enable Doxygen documentation generation" ON)
mark_as_advanced(SLXIO_DOXYGEN_DOCUMENTATION)

# Options to enbale/disable Sanitizers 
option(SLXIO_ASAN "Enable AddressSanitizer (ASan)" OFF)
mark_as_advanced(SLXIO_ASAN)

option(SLXIO_MSAN "Enable MemorySanitizer (MSan)" OFF)
mark_as_advanced(SLXIO_MSAN)

option(SLXIO_TSAN "Enable ThreadSanitizer (TSan)" OFF)
mark_as_advanced(SLXIO_TSAN)

option(SLXIO_UBSAN "Enable UndefinedBehaviorSanitizer (UBSan)" OFF)
mark_as_advanced(SLXIO_UBSAN)

# Option to use OpenMP accelartion when avalbale 
option(SLXIO_WITH_OPENMP "Enable OpenMP support" ON)
mark_as_advanced(SLXIO_WITH_OPENMP)

# Compiler/build options
option(SLXIO_ENABLE_WERROR "Enable treating warnings as errors" OFF)
mark_as_advanced(SLXIO_ENABLE_WERROR)

option(SLXIO_ENABLE_WALL "Enable all compiler warnings" ON)
mark_as_advanced(SLXIO_ENABLE_WALL)

if(NOT DEFINED CMAKE_BUILD_TYPE AND NOT IS_MULTI)
  set(CMAKE_BUILD_TYPE ${SLXIO_DEFAULT_BUILD_TYPE})
endif()

# Change this variable to add a prefix before each cmake target compiled
# eg library, excutable, .. 
set(CMAKE_BINARY_NAME_PREFIX "SLX")

set(SLXIO_SIMULINK_VERSION "${SLXIO_SIMULINK_DEFAULT_VERSION}")
set(SLXIO_SIMULINK_VERSION ${SLXIO_SIMULINK_VERSION})

# Do not change this without chnaging filename on disk 
set(SLXIO_PKG_CONFIG_FILE "slxio.pc")

#-----------------------------------------------------------------------------
if(NOT CMAKE_INSTALL_LICENSEDIR)
 set(CMAKE_INSTALL_LICENSEDIR "${CMAKE_DEFAULT_LICENSEDIR}")
endif ()

# -----------------------------------------------------------------------------
include(CompilerChecks)
include(CompilerFlags)
include(CompilerPlatformFlags)
include(CompilerExtraFlags)
include(CompilerWarningFlags)

# -----------------------------------------------------------------------------
if(SLXIO_WITH_PKGCONFIG)
    find_package(PkgConfig REQUIRED)
     if(PKG_CONFIG_FOUND)
        set(SLXIO_PKG_CFG "${CMAKE_CURRENT_BINARY_DIR}/${SLXIO_PKG_CONFIG_FILE}")
        configure_file(
          ${CMAKE_CURRENT_SOURCE_DIR}/${SLXIO_PKG_CONFIG_FILE}.in
          ${SLXIO_PKG_CFG}
          @ONLY
        )
    endif()
endif()

#-----------------------------------------------------------------------------
# CTest Config
set(PROJECT_SOURCE_DIR "${PROJECT_SOURCE_DIR}")
if(SLXIO_BUILD_TESTING)
  enable_testing()
endif()

#-----------------------------------------------------------------------------
include(ThirdParty)
include(Module)

#-----------------------------------------------------------------------------
add_subdirectory(Common)
add_subdirectory(ThirdParty)
