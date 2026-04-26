// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKCONTENT_H
#define SIMULINKCONTENT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ErrorCode.h"
#include "LibXML2.h"
#include "Logger.h"
#include "PlatformTypes.h"
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
class APIEXPORT SimulinkContent final
{
public:
  friend class SimulinkContentParser;

  SimulinkContent();

  /// @brief Copy Operator, Deep copy of all xmlDocPtr members
  SimulinkContent& operator=(const SimulinkContent& other);

  ErrorCode getBlockdiagramNodePtr(xmlNodePtr& nodePtr) const;
  ErrorCode getPropertiesNodePtr(xmlNodePtr& nodePtr) const;
  ErrorCode getMwPropertiesNodePtr(xmlNodePtr& nodePtr) const;
  ErrorCode getConfigSetInfoNodePtr(xmlNodePtr& nodePtr) const;
  ErrorCode getConfigSetNodePtr(Index& idx, xmlNodePtr& nodePtr) const;
  ErrorCode getModelDictionaryPtr(xmlNodePtr& nodePtr) const;

  ~SimulinkContent() = default;

private:
  Logger& l;

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

  std::vector<xmlDocPtr> configSets;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // !SIMULINKCONTENT_H
