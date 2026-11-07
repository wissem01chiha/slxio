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

get_property(_is_multi_config GLOBAL PROPERTY GENERATOR_IS_MULTI_CONFIG)

message(STATUS "")
status("******************* Slxio Configuration Summary *******************")
status(" ")
status("General:")
status("  Build Version:" "${PROJECT_VERSION}")
status("  CMake version:" "${CMAKE_VERSION}")
status("  Generator:" "${CMAKE_GENERATOR}")

status("")
status("  System:" "${CMAKE_HOST_SYSTEM_NAME}")
status("  Version:" "${CMAKE_HOST_SYSTEM_VERSION}")
status("  Processor:" "${CMAKE_HOST_SYSTEM_PROCESSOR}")

status("")
status("Compiler:")
status("  C compiler:" "${CMAKE_C_COMPILER}")
status("  C compiler version:" "${CMAKE_C_COMPILER_VERSION}")
status("  C++ compiler:" "${CMAKE_CXX_COMPILER}")
status("  C++ compiler version:" "${CMAKE_CXX_COMPILER_VERSION}")
status("  C++ standard:" "${CMAKE_CXX_STANDARD}")

status("")
status("Configuration:")
if(_is_multi_config)
  status("  Configuration :" "Multi-config")
  status("  Configurations:" "${CMAKE_CONFIGURATION_TYPES}")
else()
  status("  Configuration :" "Single-config")
  status("  Build         :" "${CMAKE_BUILD_TYPE}")
endif()
status("  Shared libraries:" "${SLXIO_BUILD_SHARED_LIBS}")
status("  Static libraries:" "${SLXIO_BUILD_STATIC_LIBS}")
status("  Shared and static libraries:" "${SLXIO_BUILD_SHARED_AND_STATIC_LIBS}")
status("  Default build type:" "${SLXIO_DEFAULT_BUILD_TYPE}")
status("  LTO:" "${SLXIO_ENABLE_LTO}")
status("  PIC:" "${SLXIO_ENABLE_PIC}")

status("")
status("Features:")
status("  I/O modules:" "${SLXIO_ENABLE_IO}")
status("  Simulink data dictionaries:" "${SLXIO_ENABLE_SLDD}")
status("  MAT-file support:" "${SLXIO_ENABLE_MAT}")
status("  Legacy MDL support:" "${SLXIO_ENABLE_MDL}")
status("  HDF5 support check:" "${SLXIO_ENABLE_HDF5}")
status("  OpenMP:" "${SLXIO_ENABLE_OPENMP}")
status("  Python bindings:" "${SLXIO_BUILD_PYTHON}")
status("  Command-line interface:" "${SLXIO_BUILD_CONSOLE}")
status("  Examples:" "${SLXIO_BUILD_EXAMPLES}")
status("  Install examples:" "${SLXIO_INSTALL_EXAMPLES}")
status("  Pkg-config :" "${SLXIO_ENABLE_PKGCONFIG}")
status("  Custom targets:" "${SLXIO_CUSTOM_TARGETS}")

status("")
status("Simulink:")
status("  Automatic version detection:" "${SLXIO_AUTO_DETECT_SIMULINK}")
status("  Default version:" "${SLXIO_SIMULINK_DEFAULT_VERSION}")
status("  Default release:" "${SLXIO_SIMULINK_VERSION_YEAR}")
status("  Default release suffix:" "${SLXIO_SIMULINK_VERSION_RELEASE}")
status("  Selected release:" "${SLXIO_SIMULINK_VERSION}")

status("")
status("Testing:")
status("  Unit and integration tests:" "${SLXIO_BUILD_TESTS}")
status("  Unit tests:" "${SLXIO_BUILD_UNIT_TESTS}")
status("  Integration tests:" "${SLXIO_BUILD_INTEGRATION_TESTS}")
status("  Fuzz tests:" "${SLXIO_BUILD_FUZZER}")
status("  Third-party tests:" "${SLXIO_BUILD_EXTERN_TESTS}")
status("  Coverage instrumentation:" "${SLXIO_ENABLE_COVERAGE}")
status("  Sanitizers enabled:" "${SLXIO_ENABLE_SANITIZERS}")
status("  All warnings enabled:" "${SLXIO_ENABLE_WALL}")
status("  Warnings as errors:" "${SLXIO_ENABLE_WERROR}")
status("  Third-party warnings:" "${SLXIO_ENABLE_EXTERN_WALL}")
status("  Third-party custom targets:" "${SLXIO_BUILD_EXTERN_CUSTOM_TARGETS}")

status("")
status("Documentation:")
status("  Documentation enabled:" "${SLXIO_ENABLE_DOCUMENTATION}")

status("")
status("Dependencies:")
status("  HDF5:" HDF5_FOUND THEN "Found" ELSE "Not found")
status("  MATIO:" MATIO_FOUND THEN "Found" ELSE "Not found")
status("  OpenMP C++:" OpenMP_CXX_FOUND THEN "Found" ELSE "Not found")

status("")
status("Installation:")
status("  Install rules:" "${SLXIO_INSTALL}")
status("  Install licenses:" "${SLXIO_INSTALL_LICENSES}")
status("  Install prefix:" "${CMAKE_INSTALL_PREFIX}")
status("  Runtime directory:" "${CMAKE_INSTALL_BINDIR}")
status("  Library directory:" "${CMAKE_INSTALL_LIBDIR}")
status("  Include directory:" "${CMAKE_INSTALL_INCLUDEDIR}")
status("  License directory:" "${CMAKE_DEFAULT_LICENSEDIR}")

message(STATUS "======================================================================")
message(STATUS "")
