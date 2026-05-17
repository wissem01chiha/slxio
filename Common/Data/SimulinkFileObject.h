// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKFILEOBJECT_H
#define SIMULINKFILEOBJECT_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "DataObject.h"
#include "SimulinkFile.h"
#include <string>
#include <vector>

class xmlDocDataObject;

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkFileObject
 * @brief DataObject Wrapper for SimulinkFile struct
 */
class SLXIO_APIEXPORT SimulinkFileObject : public DataObject
{
public:
  SimulinkFileObject* New() override;
  void Initialize() override;
  UInt32 GetUpdateTime() const override;
  void* GetImplDataObject() const override;
  bool operator==(const DataObject&) override;
  std::string toString() const;
  bool Empty() override;

  SimulinkFileObject();

private:
  SimulinkFilePtr ImplDataObject;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKFILEOBJECT_H
