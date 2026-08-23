# SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.18...3.21 FATAL_ERROR)

project(SLXIO)

list(PREPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/CMake")

find_package(Git)
include(DetermineVersion)
include(Version)
include(CMakeDependentOption)

# Project metadata
set(PROJECT_DESCRIPTION "SIMULINK SLX File I/O Library")

set(PROJECT_HOMEPAGE_URL "https://github.com/wissem01chiha/slxio")

# Option to enable/disable Global Link Time Optimisation note that this might increase 
# build time but produce more optimized binary,this feature required CMake >=v3.9, 
# since we support min CMake v3.18 we are fine
option(SLXIO_ENABLE_LTO "" OFF)
mark_as_advanced(SLXIO_ENABLE_LTO)

# Build slxio static or shared libs
option(SLXIO_BUILD_SHARED_LIBS  "" OFF)

# Option to enable using std::uint64_t types
# If the platform/compiler does not support 64-bit this throws an error
option(SLXIO_64BIT_IDENTIFIERS "" ON)
set(SLXIO_64BIT_IDENTIFIERS ${SLXIO_64BIT_IDENTIFIERS})

# Enable unit and integration testing
option(SLXIO_BUILD_TESTING "" ON)

# Enable coverage reports when testing is ON
option(SLXIO_ENABLE_TESTING_COVERAGE "" OFF)

# Enable build fuzzy tests
option(SLXIO_BUILD_FUZZ_TESTING "" OFF)

# Option to enable compiling example scripts
option(SLXIO_BUILD_EXAMPLES "" OFF)

# By default it will look for any installed Simulink instances
# If found, will set the target Simulink version automatically to match
# Else can be forced to one of the supported releases
# For more information refer to https://wissem01chiha.github.io/slxio/matlab-support.html
set(SLXIO_SIMULINK_DEFAULT_VERSION R2018b)

# Option to enable building utilities like console application 
# and others
option(SLXIO_WITH_INTERACTION "" ON)

# Option to enable Python bindings
option(SLXIO_BUILD_PYTHON_BINDINGS "" OFF)

# Option to enable Java bindings
option(SLXIO_BUILD_JAVA_BINDINGS "" OFF)

# Option to use only vendored third_party modules
option(SLXIO_FORCE_LOCAL_MODULES "" ON)
mark_as_advanced(SLXIO_FORCE_LOCAL_MODULES)

# Use system-wide installed modules when found
option(SLXIO_USE_SYSTEM_MODULES "" OFF)
mark_as_advanced(SLXIO_USE_SYSTEM_MODULES)

# Vendored third_parties are built by other targets
option(SLXIO_DISABLE_VENDORED_MODULES "" OFF)
mark_as_advanced(SLXIO_DISABLE_VENDORED_MODULES)

# Option to install vendored third_party modules licenses
option(SLXIO_INTSALL_THIRDPARTY_LISENCES "" ON)

# Option to enable building third party module tests for regression
# Requires SLXIO_BUILD_TESTING enabled
option(SLXIO_BUILD_THIRDPARTY_TESTING "" OFF)

# Option to enable building third party module extra tools or scripts 
option(SLXIO_BUILD_THIRDPARTY_TOOLS "" OFF)

# Option to enable *.sldd file support
option(SLXIO_SLDD "Enable Simulink Data Dictionary support" ON)
set(SLDD ${SLXIO_SLDD})

# Option to enable *.mat file support
option(SLXIO_MAT "Enable MATLAB MAT file support" OFF)

# Option to enable Numpy *.npy file support
option(SLXIO_NPY "Enable NUMPY NPY file support" OFF)

# Option to enable Numpy *.npz file support
option(SLXIO_NPZ "Enable NUMPY NPZ file support" OFF)

# Option to enable export feature to *.xlsx files 
option(SLXIO_XLSX "Enable Microsoft Excel file support" OFF)

# Build with HDF5 library support
# Enables internal HDF5 exporter and MAT files with HDF5 via MATIO_WITH_HDF5
option(SLXIO_WITH_HDF5 "Check for hdf5 library" ON)

# Option to enable latex *.tex file support
option(SLXIO_TEX "Enable Latex TeX file support" OFF)

# Option to enable position-independent code (PIC)
option(SLXIO_PIC "Enable position-independent code (PIC)" ON)

# Option to enable visualization modules support
# Note enabling this may require additional third-parties not managed by project build
option(SLXIO_WITH_VISUALIZATION "" ON)

# Option to enable support for *.mdl files
# Note that *.mdl files are experimental and may be unstable
option(SLXIO_MDL "Enable legacy simulink model files support" OFF)
set(MDL ${SLXIO_MDL})

# Option to enable installation rules on target machine
option(SLXIO_INSTALL "Enable installation after build" ON)

# Option to install software licenses, requires SLXIO_INSTALL enabled
option(CMAKE_INSTALL_LICENSEDIR "")
mark_as_advanced(CMAKE_INSTALL_LICENSEDIR)

# Default license installation directory
option(CMAKE_DEFAULT_LICENSEDIR ${CMAKE_INSTALL_DATAROOTDIR}/licenses/${CMAKE_PROJECT_NAME})
mark_as_advanced(CMAKE_DEFAULT_LICENSEDIR)

# Override default build type
option(SLXIO_DEFAULT_BUILD_TYPE "" Release)

# Option to use pkg-config tooling
# Requires Pkg-Config installed, see https://people.freedesktop.org/~dbn/pkg-config-guide.html
option(SLXIO_WITH_PKGCONFIG "Generate pkg-config file during build" ON)
mark_as_advanced(SLXIO_WITH_PKGCONFIG)

# Option to generate API HTML documentation
# Requires Doxygen installed, else throws a build error
option(SLXIO_DOXYGEN_DOCUMENTATION "Enable Doxygen documentation generation" OFF)
mark_as_advanced(SLXIO_DOXYGEN_DOCUMENTATION)

# Options to enable/disable sanitizers
option(SLXIO_ASAN "Enable AddressSanitizer (ASan)" OFF)
mark_as_advanced(SLXIO_ASAN)

# MSan 
option(SLXIO_MSAN "Enable MemorySanitizer (MSan)" OFF)
mark_as_advanced(SLXIO_MSAN)

option(SLXIO_TSAN "Enable ThreadSanitizer (TSan)" OFF)
mark_as_advanced(SLXIO_TSAN)

option(SLXIO_UBSAN "Enable UndefinedBehaviorSanitizer (UBSan)" OFF)
mark_as_advanced(SLXIO_UBSAN)

# Option to enable/disable third party memory sanitizers
option(SLXIO_THIRDPARTY_MSAN "" OFF)
mark_as_advanced(SLXIO_THIRDPARTY_MSAN)

# Option to enable/disable third party address sanitizers
option(SLXIO_THIRDPARTY_ASAN "" OFF)
mark_as_advanced(SLXIO_THIRDPARTY_ASAN)

# Option to enable/disable third party undefined behavior sanitizers
option(SLXIO_THIRDPARTY_UBSAN "" OFF)
mark_as_advanced(SLXIO_THIRDPARTY_UBSAN)

# Option to use OpenMP acceleration when available
option(SLXIO_WITH_OPENMP "Enable OpenMP support" ON)
mark_as_advanced(SLXIO_WITH_OPENMP)

# Compiler/build options
option(SLXIO_ENABLE_WERROR "Enable treating warnings as errors" OFF)
mark_as_advanced(SLXIO_ENABLE_WERROR)

# Option to enable/disable build summary logging during 
# cmake configuration step
option(SLXIO_ENABLE_BUILD_SUMMARY "" ON)
mark_as_advanced(SLXIO_ENABLE_BUILD_SUMMARY)

option(SLXIO_ENABLE_WALL "Enable all compiler warnings" ON)
mark_as_advanced(SLXIO_ENABLE_WALL)

# Option to set build type when user didn't specify for single generators
if(NOT DEFINED CMAKE_BUILD_TYPE AND NOT IS_MULTI)
  set(CMAKE_BUILD_TYPE ${SLXIO_DEFAULT_BUILD_TYPE})
endif()

# Change this variable to add a prefix before each CMake target compiled
set(CMAKE_BINARY_NAME_PREFIX "Slx")

# Set Simulink version
set(SLXIO_SIMULINK_VERSION "${SLXIO_SIMULINK_DEFAULT_VERSION}")
set(SLXIO_SIMULINK_VERSION ${SLXIO_SIMULINK_VERSION})

if(SLXIO_SIMULINK_VERSION MATCHES "^R([0-9]+)([ab])$")
  set(SLXIO_SIMULINK_VERSION_YEAR "${CMAKE_MATCH_1}")
  set(SLXIO_SIMULINK_VERSION_RELEASE "${CMAKE_MATCH_2}")
else()
  message(FATAL_ERROR
    "Invalid Simulink Version: ${SLXIO_SIMULINK_VERSION}")
endif()

# Do not change this without changing filename on disk !
set(SLXIO_PKG_CONFIG_FILE "slxio.pc")

# Platform specific settings options
if(APPLE)
  include(Apple)
endif()
if(WIN32)
  include(Windows)
endif()

if(SLXIO_ENABLE_LTO)
  # Check if IPO is supported by the compiler for LTO
  include(CheckIPOSupported)
  check_ipo_supported(
    RESULT ipo_supported
    OUTPUT ipo_output
    LANGUAGES C CXX   
  )
  if(ipo_supported)
    set(CMAKE_INTERPROCEDURAL_OPTIMIZATION ON)   
  endif()
endif()

if(NOT CMAKE_INSTALL_LICENSEDIR)
 set(CMAKE_INSTALL_LICENSEDIR "${CMAKE_DEFAULT_LICENSEDIR}")
endif ()

include(CompilerChecks)
include(CompilerFlags)
include(CompilerPlatformFlags)
include(CompilerWarningFlags)

if(SLXIO_WITH_PKGCONFIG)
  include(PkgConfig)
endif()

include(Sanitize)
include(ThirdParty)
include(Module)
if(SLXIO_BUILD_TESTING)
  include(Testing)
endif()
if(SLXIO_ENABLE_BUILD_SUMMARY)
  include(Summary)
endif()

add_subdirectory(ThirdParty)
add_subdirectory(Common)
add_subdirectory(Simulink)
add_subdirectory(IO)
add_subdirectory(Utilities)

if(SLXIO_WITH_INTERACTION)
  add_subdirectory(Interaction)
endif()

if(SLXIO_BUILD_TESTING)
  add_subdirectory(Testing)
endif()

if(SLXIO_BUILD_EXAMPLES)
  add_subdirectory(Examples)
endif()

if(SLXIO_WITH_VISUALIZATION)
  add_subdirectory(Visualization)
endif()

if(SLXIO_DOXYGEN_DOCUMENTATION)
    add_subdirectory(Documentation)
endif()