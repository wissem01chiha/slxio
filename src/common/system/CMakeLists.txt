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

add_module(
  CommonSystem
  Tempdir.cxx
  SimulinkFileLoader.cxx
  SimulinkFileWriter.cxx
  Filesystem.cxx
  SimulinkFile.cxx
  SimulinkFileInfo.cxx)
if(SLXIO_MDL)
  target_sources(CommonSystem PRIVATE MDLFile.cxx MDLFileWriter.cxx
                                      MDLFileLoader.cxx MDLSection.cxx)
endif()
module_link_libraries(CommonSystem CommonCore pugixml)
if(SIMULINK_COMPATIBILTY_2024)
  module_link_libraries(CommonSystem yyjson)
endif()
module_include_directories(
  CommonSystem ${PROJECT_EXTERN_SOURCE_DIR}/doctest
  ${PROJECT_EXTERN_SOURCE_DIR}/pugixml ${PROJECT_EXTERN_SOURCE_DIR}/yyjson)
add_subdirectory(test)
