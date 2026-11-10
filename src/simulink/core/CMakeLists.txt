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

add_module(
  SimulinkCore
  SimulinkDataType.cxx
  SimulinkSignal.cxx
  SimulinkParameterInfo.cxx
  SimulinkParameter.cxx
  SimulinkBlockType.cxx
  SimulinkModelType.cxx
  SimulinkBlockCategory.cxx)
module_link_libraries(SimulinkCore CommonCore SimulinkMisc
                      SimulinkConfiguration)
module_include_directories(SimulinkCore
                           ${PROJECT_EXTERN_SOURCE_DIR}/unordered_dense)
add_subdirectory(test)
