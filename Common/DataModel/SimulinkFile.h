// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKFILE_H
#define SIMULINKFILE_H

#include "ABINamespaceMacro.h"
#include "PlatformTypes.h"
#include "xmlDocDataObject.h"
#include <string>
#include <vector>

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkFile
 * @brief Represents metadata and XML sections of a Simulink model file
 */
struct SimulinkFile {
  std::string Extension;
  std::string Name;
  UInt16 Size;

  std::string Category;
  std::string Creator;
  std::string LastModifiedBy;
  std::string Revision;
  std::string Version;
  std::string ContentType;
  std::string ContentTypeFriendlyName;
  std::string MatlabRelease;
  std::string MatlabVersion;

  xmlDocDataObject &Blockdiagram;
  xmlDocDataObject &ModelDictionary;
  xmlDocDataObject &ConfigSetInfo;
  xmlDocDataObject &Bddefaults;
  xmlDocDataObject &ScheduleEditor;
  xmlDocDataObject &ScheduleCore;
  xmlDocDataObject &GraphicalInterface;
  xmlDocDataObject &CoreProperties;
  xmlDocDataObject &MWcoreProperties;
  xmlDocDataObject &MWcorePropertiesExtension;
  std::vector<xmlDocDataObject> ConfigSets;
};

typedef SimulinkFile *SimulinkFilePtr;

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKFILE_H
