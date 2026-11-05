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
  Data
  IDataObject.cxx
  JsonDataObject.cxx
  XmlDocDataObject.cxx
  XmlNodeDataObject.cxx
  IParameterDataObjectBase.cxx
  XmlCharDataObject.cxx
  XmlNodeDataObject.cxx)
module_link_libraries(Data json-c LibXml2 Core)
set_target_properties(Data PROPERTIES OUTPUT_NAME "CommonData")
module_include_directories(
  Data ${PROJECT_EXTERN_SOURCE_DIR}/doctest
  ${PROJECT_EXTERN_SOURCE_DIR}/json-c
  ${PROJECT_EXTERN_SOURCE_DIR}/libxml2)
add_subdirectory(test)
