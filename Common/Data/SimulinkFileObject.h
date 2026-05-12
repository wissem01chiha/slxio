// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKFILEBASE_H
#define SIMULINKFILEBASE_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "DataObject.h"
#include <string>
#include <vector>

class xmlDocDataObject;

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkFileObject
 */
class SLXIO_APIEXPORT SimulinkFileObject : public DataObject
{
public:
  SimulinkFileObject* New() override;

  void Initialize() override;

  UInt32 GetUpdateTime() override;

  IdType GetDataType() override;

  std::string ToString() const;

protected:
  std::string Category;
  std::string Creator;
  std::string LastModifiedBy;
  std::string Revision;
  std::string Version;
  std::string ContentType;
  std::string ContentTypeFriendlyName;
  std::string MatlabRelease;
  std::string MatlabVersion;

  xmlDocDataObject& Blockdiagram;
  xmlDocDataObject& ModelDictionary;
  xmlDocDataObject& ConfigSetInfo;
  xmlDocDataObject& Bddefaults;
  xmlDocDataObject& ScheduleEditor;
  xmlDocDataObject& ScheduleCore;
  xmlDocDataObject& GraphicalInterface;
  xmlDocDataObject& CoreProperties;
  xmlDocDataObject& MWcoreProperties;
  xmlDocDataObject& MWcorePropertiesExtension;
  std::vector<xmlDocDataObject&> ConfigSets;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKFILEOBJECT_H
