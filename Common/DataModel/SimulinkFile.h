// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKFILE_H
#define SIMULINKFILE_H

#include "ABINamespaceMacro.h"
#include "DataModelPCH.h"
#include "PlatformTypes.h"
#include "xmlDocDataObject.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkFile
 * @brief Represents metadata and XML sections of a Simulink model file
 */
class SimulinkFile
{
public:
  SimulinkFile();

  const std::string& getExtension() const { return extension; }
  void setExtension(const std::string& ext) { extension = ext; }

  const std::string& getName() const { return name; }
  void setName(const std::string& n) { name = n; }

  UInt16 getSize() const { return size; }
  void setSize(UInt16 s) { size = s; }

  const std::string& getCategory() const { return category; }
  void setCategory(const std::string& c) { category = c; }

  const std::string& getCreator() const { return creator; }
  void setCreator(const std::string& cr) { creator = cr; }

  const std::string& getLastModifiedBy() const { return lastModifiedBy; }
  void setLastModifiedBy(const std::string& lmb) { lastModifiedBy = lmb; }

  const std::string& getRevision() const { return revision; }
  void setRevision(const std::string& r) { revision = r; }

  const std::string& getVersion() const { return version; }
  void setVersion(const std::string& v) { version = v; }

  const std::string& getContentType() const { return contentType; }
  void setContentType(const std::string& ct) { contentType = ct; }

  const std::string& getContentTypeFriendlyName() const
  {
    return contentTypeFriendlyName;
  }
  void setContentTypeFriendlyName(const std::string& cfn)
  {
    contentTypeFriendlyName = cfn;
  }

  const std::string& getMatlabRelease() const { return matlabRelease; }
  void setMatlabRelease(const std::string& mr) { matlabRelease = mr; }

  const std::string& getMatlabVersion() const { return matlabVersion; }
  void setMatlabVersion(const std::string& mv) { matlabVersion = mv; }

  xmlDocDataObject& getBlockdiagram() const { return blockdiagram; }
  xmlDocDataObject& getModelDictionary() const { return modelDictionary; }
  xmlDocDataObject& getConfigSetInfo() const { return configSetInfo; }
  xmlDocDataObject& getBddefaults() const { return bddefaults; }
  xmlDocDataObject& getScheduleEditor() const { return scheduleEditor; }
  xmlDocDataObject& getScheduleCore() const { return scheduleCore; }
  xmlDocDataObject& getGraphicalInterface() const { return graphicalInterface; }
  xmlDocDataObject& getCoreProperties() const { return coreProperties; }
  xmlDocDataObject& getMwcoreProperties() const { return mwcoreProperties; }
  xmlDocDataObject& getMwcorePropertiesExtension() const
  {
    return mwcorePropertiesExtension;
  }

  const std::vector<xmlDocDataObject>& getConfigSets() const
  {
    return configSets;
  }
  void setConfigSets(const std::vector<xmlDocDataObject>& cs)
  {
    configSets = cs;
  }

private:
  std::string extension;
  std::string name;
  UInt16 size;

  std::string category;
  std::string creator;
  std::string lastModifiedBy;
  std::string revision;
  std::string version;
  std::string contentType;
  std::string contentTypeFriendlyName;
  std::string matlabRelease;
  std::string matlabVersion;

  xmlDocDataObject& blockdiagram;
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
