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

set(PROJECT_DESCRIPTION "SIMULINK SLX File I/O Library")
set(PROJECT_HOMEPAGE_URL "https://github.com/wissem01chiha/slxio")
set(CMAKE_PROJECT_SPDX_LICENSE "Apache-2.0")

include(Macro)
include(Options)
include(CompilerFlags)
include(CompilerPlatformFlags)
include(CompilerWarningFlags)
include(LTO)
include(CTest)

enable_testing()

if(APPLE)
  include(Apple)
endif()

if(MINGW)
  include(MinGW)
endif()

if(SLXIO_ENABLE_COVERAGE)
  include(Coverage)
endif()

if(SLXIO_ENABLE_SANITIZERS)
  include(Sanitize)
endif()

if(SLXIO_BUILD_SUMMARY)
  include(Summary)
endif()

add_subdirectory(ThirdParty)
add_subdirectory(Common)
add_subdirectory(Simulink)

if(SLXIO_ENABLE_IO)
  add_subdirectory(IO)
endif()

add_subdirectory(Utilities)

if(SLXIO_BUILD_AUXILIARY)
  add_subdirectory(Auxiliary)
endif()

if(SLXIO_BUILD_INTEGRATION_TESTS)
  add_subdirectory(Tests)
endif()

if(SLXIO_BUILD_EXAMPLES)
  add_subdirectory(Examples)
endif()
