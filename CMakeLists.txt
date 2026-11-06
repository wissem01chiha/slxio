# Copyright 2026 Wissem Chiha
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

cmake_minimum_required(VERSION 3.18...3.21 FATAL_ERROR)

project(SLXIO)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_EXTENSIONS OFF)

list(PREPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")

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

if(SLXIO_ENABLE_PIC)
  set(CMAKE_POSITION_INDEPENDENT_CODE ON)
endif()

if(APPLE)
  include(Apple)
endif()

if(MINGW)
  include(MinGW)
endif()

if(SLXIO_BUILD_SUMMARY)
  include(Summary)
endif()

add_subdirectory(extern)
add_subdirectory(common)
add_subdirectory(simulink)

if(SLXIO_ENABLE_IO)
  add_subdirectory(io)
endif()

if(SLXIO_BUILD_CONSOLE)
  add_subdirectory(cli)
endif()

if(SLXIO_BUILD_PYTHON)
  add_subdirectory(python)
endif()

if(SLXIO_BUILD_INTEGRATION_TESTS)
  add_subdirectory(tests)
endif()

if(SLXIO_BUILD_EXAMPLES)
  add_subdirectory(examples)
endif()
