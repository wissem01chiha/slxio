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

# check if IPO is supported by the compiler for LTO note replace with
# CheckIPOSupported starting from CMake 3.9
# https://cmake.org/cmake/help/latest/module/CheckIPOSupported.html
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
