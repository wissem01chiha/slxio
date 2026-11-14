# Copyright 2026 Wissem Chiha
#
# Licensed under the Apache License, Version 2.0 (the "License"); you may not
# use this file except in compliance with the License. You may obtain a copy of
# the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
# WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
# License for the specific language governing permissions and limitations under
# the License.

include(Macro)
include(GNUInstallDirs)

# Option to enable/disable global Link Time Optimization. Note that this might
# increase build time but produce a more optimized binary. This feature requires
# CMake >= v3.9; since we support min CMake v3.18, we are fine.
advanced_option(SLXIO_LTO "Enable Link Time Optimization" OFF)

# Option to enable position-independent code globally. Useful only when building
# shared libraries or when a static library may later be linked into one.
advanced_option(SLXIO_PIC "Enable position-independent code" ON)

# Build both static and shared libraries. This is disabled by default.
advanced_option(SLXIO_SHARED_AND_STATIC_LIBS "Build both shared and
static libraries" OFF)

# For fine-grained control when building only shared or static libraries. This
# can be enabled for shared builds. Note: this option is relevant only when
# SLXIO_SHARED_AND_STATIC_LIBS is disabled.
advanced_option(SLXIO_SHARED_LIBS "Build shared libraries" OFF)

# For building only static libraries, when SLXIO_SHARED_AND_STATIC_LIBS is
# disabled.
advanced_option(SLXIO_STATIC_LIBS "Build static libraries" ON)

# Enable unit and integration testing globally
option(SLXIO_TESTS "Enable unit and integration testing" ON)

# When the global testing option is disabled, this gives fine-grained control to
# build only unit tests separately.
advanced_option(SLXIO_UNIT_TESTS "Enable building unit tests" ON)

# Same as SLXIO_UNIT_TESTS but for integration tests
advanced_option(SLXIO_INTEGRATION_TESTS "Enable building integration
 tests" OFF)

# Same as SLXIO_UNIT_TESTS but for regression tests
advanced_option(SLXIO_REGRESSION_TESTS "Enable building regression
 tests" OFF)

# Enable coverage reports when SLXIO_TESTS, SLXIO_UNIT_TESTS or
# SLXIO_INTEGRATION_TESTS is enabled
cmake_dependent_option(SLXIO_COVERAGE "Enable code coverage for libraries
 and programs" OFF "SLXIO_TESTS" OFF)

# Option to control building of fuzz test module sources. This is separate from
# the SLXIO_TESTS option, so fuzz pipelines can be built independently to save
# build time.
advanced_option(SLXIO_FUZZ_TESTS "Enable building fuzz tests" OFF)

# Option to enable building example scripts
option(SLXIO_EXAMPLES "Enable building example scripts" OFF)

# Option to control installation of example scripts. This is only relevant if
# example scripts are being built and the global installation option is enabled.
cmake_dependent_option(SLXIO_INSTALL_EXAMPLES "Install example scripts" OFF
                       "SLXIO_EXAMPLES" OFF)

# Option to enable the Python bindings interface.
advanced_option(SLXIO_PYTHON "Build Python interface" ON)

# Enable all sanitizers globally when the compiler and platform support them
advanced_option(SLXIO_SANITIZERS "Enable all available sanitizers" OFF)

# Option to enable AddressSanitizer on supported platforms and compilers.
advanced_dependent_option(SLXIO_ASAN "Enable AddressSanitizer" OFF
                          SLXIO_SANITIZERS ON)

# Option to enable MemorySanitizer  on supported platforms and compilers.
advanced_dependent_option(SLXIO_MSAN "Enable MemorySanitizer" OFF
                          SLXIO_SANITIZERS ON)

# Option to enable ThreadSanitizer  on supported platforms and compilers.
advanced_dependent_option(SLXIO_TSAN "Enable ThreadSanitizer" OFF
                          SLXIO_SANITIZERS ON)

# Option to enable UndefinedBehaviorSanitizer on supported platforms and
# compilers.
advanced_dependent_option(SLXIO_UBSAN "Enable UndefinedBehaviorSanitizer" OFF
                          SLXIO_SANITIZERS ON)

# Option to enable *.mat file support
advanced_option(SLXIO_MAT "MATLAB MAT file support" OFF)

# Option to enable support for *.mdl files. Note that *.mdl support is
# experimental and may be unstable.
advanced_option(SLXIO_MDL "Legacy Simulink model files
 support" OFF)

# Build with HDF5 library support. Enables the internal HDF5 exporter and MAT
# files with HDF5 via MATIO_WITH_HDF5.
advanced_option(SLXIO_HDF5 "Check for HDF5 library" ON)

# Option to enable installation rules on the target machine
advanced_option(SLXIO_INSTALL "Installation after build" ON)

# Choose whether to install vendored licenses when SLXIO_INSTALL is ON. This
# option will install the project license along with third-party ones.
advanced_dependent_option(SLXIO_INSTALL_LICENSES "Install third-party licenses"
                          ON "SLXIO_INSTALL" ON)

# Option to install software licenses; requires SLXIO_INSTALL enabled
advanced_option(CMAKE_INSTALL_LICENSEDIR "Install license directory" ON)

# Default license installation directory
string(TOLOWER "${PROJECT_NAME}" _project_license_dir)
set(_default_license_dir
    "${CMAKE_INSTALL_DATAROOTDIR}/licenses/${_project_license_dir}")
if(NOT CMAKE_DEFAULT_LICENSEDIR OR CMAKE_DEFAULT_LICENSEDIR STREQUAL "ON")
  set(CMAKE_DEFAULT_LICENSEDIR
      "${_default_license_dir}"
      CACHE STRING "Default license installation directory" FORCE)
else()
  set(CMAKE_DEFAULT_LICENSEDIR
      "${CMAKE_DEFAULT_LICENSEDIR}"
      CACHE STRING "Default license installation directory")
endif()

# Generate a .pc file from a template during the build if pkg-config was found
# on the host machine. Requires pkg-config installed, see
# https://people.freedesktop.org/~dbn/pkg-config-guide.html
advanced_option(SLXIO_ENABLE_PKGCONFIG "Generate pkg-config files" OFF)

# When this is on, custom targets (mainly for tooling) will be built
advanced_option(SLXIO_CUSTOM_TARGETS "Custom build targets" ON)

# Override default build type
option(SLXIO_DEFAULT_BUILD_TYPE "Default build type" Release)

# Set the build type when the user didn't specify one for single-config
# generators
if(NOT DEFINED CMAKE_BUILD_TYPE AND NOT IS_MULTI)
  set(CMAKE_BUILD_TYPE ${SLXIO_DEFAULT_BUILD_TYPE})
endif()

# Change this variable to add a prefix before each compiled CMake static targets
set(CMAKE_STATIC_LIBRARY_PREFIX "")

# same as above but for shared libraries
set(CMAKE_SHARED_LIBRARY_PREFIX "")

# Treat warnings as errors
advanced_option(SLXIO_WERROR "Treat warnings as errors" OFF)

# Display all compiler warnings for debugging
advanced_option(SLXIO_WALL "Enable all compiler warnings" ON)

# Option to enable building documentation cmake targets.
advanced_option(SLXIO_DOXYGEN "Enable documentation generation" ON)

# Option to use OpenMP acceleration when available
advanced_configure_option(SLXIO_OPENMP "OpenMP support" OFF)

# Specify the directory where third-party dependencies
set(PROJECT_EXTERN_SOURCE_DIR ${PROJECT_SOURCE_DIR}/vendor)

# Option to enable building third-party module tests for regression. Requires
# SLXIO_TESTS enabled.
advanced_dependent_option(
  SLXIO_BUILD_EXTERN_TESTS "building third-party module tests" OFF
  "SLXIO_TESTS" OFF)

# Option to enable building third-party module extra tools or scripts.
advanced_dependent_option(
  SLXIO_EXTERN_CUSTOM_TARGETS
  "Building third-party module extra tools or scripts" OFF SLXIO_CUSTOM_TARGETS
  ON)

# Display all compiler warnings for debugging third-party code
advanced_option(SLXIO_EXTERN_WALL
                "Enable all compiler warnings from third-party" OFF)
