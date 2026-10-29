cmake_minimum_required(VERSION 3.18...3.21 FATAL_ERROR)

project(SLXIO)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_EXTENSIONS OFF)

list(PREPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/CMake")

find_package(Git)
include(DetermineVersion)
include(Version)
include(CMakeDependentOption)

set(PROJECT_DESCRIPTION "SIMULINK SLX File I/O Library")
set(PROJECT_HOMEPAGE_URL "https://github.com/wissem01chiha/slxio")
set(CMAKE_PROJECT_SPDX_LICENSE "")

include(Options)
include(CompilerFlags)
include(CompilerPlatformFlags)
include(CompilerWarningFlags)
if(APPLE)
  include(Apple)
endif()

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

# Check if IPO is supported by the compiler for LTO
if(SLXIO_ENABLE_LTO)
  include(CheckIPOSupported)
  check_ipo_supported(
    RESULT ipo_supported
    OUTPUT ipo_output
    LANGUAGES C CXX)
  if(ipo_supported)
    set(CMAKE_INTERPROCEDURAL_OPTIMIZATION ON)   
  endif()
endif()





include(Sanitize)
include(ThirdParty)
include(Module)
if(SLXIO_BUILD_TESTING)
  include(Tests)
endif()
if(SLXIO_BUILD_SUMMARY)
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

if(SLXIO_DOXYGEN_DOCUMENTATION)
    add_subdirectory(Documentation)
endif()