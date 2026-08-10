// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKFILEDATAOBJECT_H
#define SIMULINKFILEDATAOBJECT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IDataObject.h"
#include "SimulinkFile.h"
#include "DataModelPCH.h"

class xmlDocDataObject;

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkFileDataObject
 * @brief iDataObject Wrapper for SimulinkFile class
 */
class SLXIO_APIEXPORT SimulinkFileObject : public IDataObject
{
public:
  SimulinkFileObject* New() override;
  void Initialize(void* implDataObject) override;
  UInt32 GetUpdateTime() const override;
  void* GetImplDataObject() const override;
  bool operator==(const IDataObject&) override;
  std::string ToString() const;
  bool Empty() const  override;

  SimulinkFileObject();

private:
  SimulinkFile m_implDataObject;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKFILEDATAOBJECT_H
