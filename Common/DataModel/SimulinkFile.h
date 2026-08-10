// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKFILE_H
#define SIMULINKFILE_H

#include "ABINamespaceMacro.h"
#include "DataModelPCH.h"
#include "PlatformTypes.h"
#include "SimulinkFileInformation.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class xmlDocDataObject;

/**
 * @class SimulinkFile
 * @brief Represents a parsed Simulink model file, combining metadata and XML
 * sections.
 */
class SimulinkFile
{
public:
  SimulinkFile();

  const SimulinkFileInformation& GetInformation() const;

  std::unique_ptr<xmlDocDataObject> GetBlockdiagram() const;
  xmlDocDataObject& GetModelDictionary() const { return modelDictionary; }
  xmlDocDataObject& GetConfigSetInfo() const { return configSetInfo; }
  xmlDocDataObject& GetBddefaults() const { return bddefaults; }
  xmlDocDataObject& GetScheduleEditor() const { return scheduleEditor; }
  xmlDocDataObject& GetScheduleCore() const { return scheduleCore; }
  xmlDocDataObject& GetGraphicalInterface() const { return graphicalInterface; }
  xmlDocDataObject& GetCoreProperties() const { return coreProperties; }
  xmlDocDataObject& GetMwcoreProperties() const { return mwcoreProperties; }
  xmlDocDataObject& GetMwcorePropertiesExtension() const
  {
    return mwcorePropertiesExtension;
  }

  const std::vector<xmlDocDataObject>& GetConfigSets() const
  {
    return configSets;
  }
  void SetConfigSets(const std::vector<xmlDocDataObject>& cs)
  {
    configSets = cs;
  }

  ~SimulinkFile() = default;

private:
  SimulinkFileInformation fileInfo;

  std::unique_ptr<xmlDocDataObject> blockdiagram;
  xmlDocDataObject& modelDictionary;
  xmlDocDataObject& configSetInfo;
  xmlDocDataObject& bddefaults;
  xmlDocDataObject& scheduleEditor;
  xmlDocDataObject& scheduleCore;
  xmlDocDataObject& graphicalInterface;
  xmlDocDataObject& coreProperties;
  xmlDocDataObject& mwcoreProperties;
  xmlDocDataObject& mwcorePropertiesExtension;
  std::vector<xmlDocDataObject> configSets;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKFILE_H
