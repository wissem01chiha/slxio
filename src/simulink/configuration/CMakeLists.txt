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
  Configuration
  SimulinkCodeGeneration.cxx
  SimulinkCoverage.cxx
  SimulinkDebugging.cxx
  SimulinkHardware.cxx
  SimulinkModelReference.cxx
  SimulinkOptimization.cxx
  SimulinkRTW.cxx
  SimulinkSFSim.cxx
  SimulinkSolver.cxx
  SimulinkConfigSet.cxx
  SimulinkConfigSetComponent.cxx
  SimulinkConfigSetCollection.cxx)
module_link_libraries(Configuration Core)
set_target_properties(Configuration PROPERTIES OUTPUT_NAME
                                               "SimulinkConfiguration")
add_subdirectory(test)
