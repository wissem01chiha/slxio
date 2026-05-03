// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKCONTENT_H
#define SIMULINKCONTENT_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
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
class SLXIO_APIEXPORT SimulinkContent final
{
public:
  friend class SimulinkContentParser;

  SimulinkContent();

  /// @brief Copy Operator, Deep copy of all xmlDocPtr members
  SimulinkContent& operator=(const SimulinkContent& other);

  ReturnType getBlockdiagramNodePtr(xmlNodePtr& nodePtr) const;
  ReturnType getPropertiesNodePtr(xmlNodePtr& nodePtr) const;
  ReturnType getMwPropertiesNodePtr(xmlNodePtr& nodePtr) const;
  ReturnType getConfigSetInfoNodePtr(xmlNodePtr& nodePtr) const;
  ReturnType getConfigSetNodePtr(IdType& idx, xmlNodePtr& nodePtr) const;
  ReturnType getModelDictionaryPtr(xmlNodePtr& nodePtr) const;

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
