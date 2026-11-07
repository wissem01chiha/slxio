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

include(CMakePackageConfigHelpers)

set(PKGCONFIG_INSTALL_DIR lib/pkgconfig)

if(SLXIO_ENABLE_PKGCONFIG)
  find_package(PkgConfig REQUIRED)
  configure_file(${PROJECT_SOURCE_DIR}/slxio.pc.in 
    ${PROJECT_BINARY_DIR}/slxio.pc @ONLY)
  install(
    DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/
    DESTINATION ${PKGCONFIG_INSTALL_DIR}
    FILES_MATCHING
    PATTERN "slxio.pc")
endif()

if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
  set(CMAKE_INSTALL_PREFIX
      "${CMAKE_BINARY_DIR}/install"
      CACHE PATH "Default install path" FORCE)
endif()

if(SLXIO_INSTALL AND SLXIO_INSTALL_LICENSES AND CMAKE_INSTALL_LICENSEDIR)
  install(DIRECTORY "${PROJECT_SOURCE_DIR}/licenses/"
          DESTINATION "${CMAKE_DEFAULT_LICENSEDIR}")
endif()

configure_package_config_file(
  "${PROJECT_SOURCE_DIR}/cmake/slxio-config.cmake.in"
  "${PROJECT_BINARY_DIR}/slxio-config.cmake"
  INSTALL_DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/slxio")

configure_file(
  "${PROJECT_SOURCE_DIR}/cmake/slxio-config-version.cmake.in"
  "${PROJECT_BINARY_DIR}/slxio-config-version.cmake" @ONLY)

install(
  FILES "${PROJECT_BINARY_DIR}/slxio-config.cmake"
        "${PROJECT_BINARY_DIR}/slxio-config-version.cmake"
  DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/slxio")

