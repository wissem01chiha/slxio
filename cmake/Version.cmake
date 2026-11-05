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


# Used to read version string from the VERSION.txt file On success sets
# following variables in caller's scope: SLXIO_VERSION SLXIO_MAJOR_VERSION
# SLXIO_MINOR_VERSION SLXIO_BUILD_VERSION

file(READ "VERSION.txt" VERSION)
string(STRIP ${VERSION} VERSION)
if(${VERSION} MATCHES [[([0-9]+)\.([0-9]+)\.([0-9]+)]])
  set(SLXIO_MAJOR_VERSION ${CMAKE_MATCH_1})
  set(SLXIO_MINOR_VERSION ${CMAKE_MATCH_2})
  set(SLXIO_MICRO_VERSION ${CMAKE_MATCH_3})
endif()

set(PROJECT_VERSION_MAJOR ${SLXIO_MAJOR_VERSION})
set(PROJECT_VERSION_MINOR ${SLXIO_MINOR_VERSION})
set(PROJECT_VERSION_PATCH ${SLXIO_MICRO_VERSION})
set(PROJECT_VERSION
    ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH})
