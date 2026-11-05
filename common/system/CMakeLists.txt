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

add_module(
  System
    File.cxx
    Directory.cxx
    FileManager.cxx
    DirectoryManager.cxx
    ExecutableManager.cxx
    DirectoryService.cxx
)
module_link_libraries(System Core libzip::zip)
set_target_properties(System PROPERTIES OUTPUT_NAME "CommonSystem")
module_include_directories(
  System ${PROJECT_EXTERN_SOURCE_DIR}/doctest)
add_subdirectory(test)