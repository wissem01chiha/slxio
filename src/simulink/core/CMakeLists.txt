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
  SimulinkInPort.cxx
  SimulinkOutPort.cxx
  SimulinkPortType.cxx
  SimulinkBlockCategory.cxx
  SimulinkPortBase.cxx
  SimulinkBlock.cxx
  SimulinkElement.cxx
  SimulinkElementBase.cxx
  SimulinkModel.cxx
  ParameterizedElement.cxx
  SimulinkObject.cxx
  SimulinkArray.cxx)
module_link_libraries(SimulinkCore CommonCore SimulinkMisc
                      SimulinkConfiguration SimulinkAnnotation)
add_subdirectory(test)
