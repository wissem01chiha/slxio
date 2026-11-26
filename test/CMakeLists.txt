# Copyright 2025-2026 Wissem Chiha
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

file(GLOB test_sources cxx/*.cxx)

foreach(test_source_file IN LISTS test_sources)
  get_filename_component(test_executable_name ${test_source_file} NAME_WE)
  add_executable(${test_executable_name} ${test_source_file})
  target_link_libraries(${test_executable_name} PUBLIC SLXIO::SLXIO)
  add_dependencies(${test_executable_name} SLXIO::SLXIO)
  doctest_discover_tests(
    ${test_executable_name} WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    PROPERTIES LABELS "integration")
endforeach()
