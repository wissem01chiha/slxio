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

find_package(Doxygen REQUIRED)

set(CMAKE_DOXYGEN_OUTPUT_DIR "${CMAKE_CURRENT_BINARY_DIR}")
set(CMAKE_DOXYGEN_WARN_LOGFILE
    "${PROJECT_BINARY_DIR}/documentation/doxygen.log")
set(CMAKE_DOXYGEN_MAINPAGE_MDFILE "${PROJECT_SOURCE_DIR}/documentation/Home.md")

file(GLOB PAGES ${PROJECT_SOURCE_DIR}/documentation/*.md)

set(CMAKE_DOXYGEN_INPUT_LIST
    ${PAGES} ${PROJECT_SOURCE_DIR}/src/** ${PROJECT_SOURCE_DIR}/AUTHORS.md
    ${PROJECT_SOURCE_DIR}/SECURITY.md ${PROJECT_SOURCE_DIR}/CONTRIBUTING.md)

string(REPLACE ";" " \\\n" CMAKE_DOXYGEN_INPUT_LIST
               "${CMAKE_DOXYGEN_INPUT_LIST}")

configure_file(${PROJECT_SOURCE_DIR}/Doxyfile.in
               ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile @ONLY)

add_custom_target(
  Documentation
  COMMAND ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
  COMMENT "Generating ${PROJECT_NAME} API Documentation with Doxygen"
  VERBATIM)
