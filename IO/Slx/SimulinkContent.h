// Copyright 2025-2026 Wissem Chiha
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef SIMULINKCONTENT_H
#define SIMULINKCONTENT_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "ErrorCode.h"
#include "LibXML2.h"
#include "Type.h"
#include <string>
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkContentParser;

/// @class SimulinkContent
/// @brief Holds the physical implementation of a Simulink .slx file.
/// This class stores the subfiles of a Simulink .slx file as libxml
/// document pointers and provides accessor methods for parsers to
/// retrieve the corresponding XML nodes as input data.
/// @todo Add validation routines in each getter
class APIEXPORT SimulinkContent final {
public:
  friend class SimulinkContentParser;

  SimulinkContent() = default;
  ~SimulinkContent() = default;

  ErrorCode getBlockdiagramNodePtr(xmlNodePtr& nodePtr) const;
  ErrorCode getPropertiesNodePtr(xmlNodePtr& nodePtr) const;
  ErrorCode getMwPropertiesNodePtr(xmlNodePtr& nodePtr) const;
  ErrorCode getConfigSetInfoNodePtr(xmlNodePtr& nodePtr) const;
  ErrorCode getConfigSetNodePtr(Index &idx, xmlNodePtr& nodePtr) const;
  ErrorCode getModelDictionary(xmlNodePtr& nodePtr) const;

private:
  xmlDocPtr blockdiagram = nullptr;
  xmlDocPtr modelDictionary = nullptr;
  xmlDocPtr configSetInfo = nullptr;
  xmlDocPtr bddefaults = nullptr;
  xmlDocPtr scheduleEditor = nullptr;
  xmlDocPtr scheduleCore = nullptr;
  xmlDocPtr graphicalInterface = nullptr;
  xmlDocPtr coreProperties = nullptr;
  xmlDocPtr mwcoreProperties = nullptr;
  xmlDocPtr mwcorePropertiesExtension = nullptr;
  std::string thumbnail;
  std::vector<xmlDocPtr> configSets;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // !SIMULINKCONTENT_H
