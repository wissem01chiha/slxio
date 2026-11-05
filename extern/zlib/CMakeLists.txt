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

set(CMAKE_POLICY_DEFAULT_CMP0077 NEW)

set(ZLIB_BUILD_TESTING OFF)
set(ZLIB_BUILD_SHARED ${SLXIO_BUILD_SHARED_LIBS})
set(ZLIB_BUILD_STATIC ${SLXIO_BUILD_STATIC_LIBS})
set(ZLIB_INSTALL ON)
set(ZLIB_PREFIX OFF)

if(SLXIO_BUILD_SHARED_AND_STATIC_LIBS)
    set(ZLIB_BUILD_SHARED ON)
    set(ZLIB_BUILD_STATIC ON)
endif()

add_subdirectory(src)

if(ZLIB_BUILD_STATIC)
    export(TARGETS zlibstatic FILE ZLIBTargets.cmake)
endif()
if(ZLIB_BUILD_SHARED)
    export(TARGETS zlib APPEND FILE ZLIBTargets.cmake)
endif()

