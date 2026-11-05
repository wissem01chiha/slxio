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
  Core
  ValidationReport.cxx
  Version.cxx
  SimulinkVersion.cxx
  TimeStamp.cxx
  Timer.cxx
  ErrorLogMessage.cxx
  FileLogger.cxx
  BackgroundLogger.cxx
  BufferedLogger.cxx
  BufferedErrorHandler.cxx
  IObservable.cxx
  HErrorHelper.cxx)

configure_file(Options.h.in ${CMAKE_CURRENT_BINARY_DIR}/Options.h @ONLY)
configure_file(VersionMacro.h.in ${CMAKE_CURRENT_BINARY_DIR}/VersionMacro.h
               @ONLY)
configure_file(SimulinkVersionMacro.h.in
               ${CMAKE_CURRENT_BINARY_DIR}/SimulinkVersionMacro.h @ONLY)
module_link_libraries(Core spdlog)
set_target_properties(Core PROPERTIES OUTPUT_NAME "CommonCore")
target_precompile_headers(Core PRIVATE CommonPCH.h)
module_include_directories(
  Core ${PROJECT_EXTERN_SOURCE_DIR}/doctest
  ${PROJECT_EXTERN_SOURCE_DIR}/spdlog)
add_subdirectory(test)
