// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IPARAMETEROBJECTBASE_H
#define IPARAMETEROBJECTBASE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataModelECH.h"
#include "DataModelPCH.h"
#include "DataType.h"
#include "ILogger.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class IParameterObjectBase
 * @brief A type-erased interface for IParamaterObject
 */
class SLXIO_APIEXPORT IParameterObjectBase
{
public:
  virtual IParameterObjectBase* New() = 0;
  virtual std::string GetName() const { return m_name; };
  virtual DataType GetDataType() const = 0;
  virtual UInt16 Size() const { return (UInt16)1; }
  virtual ~IParameterObjectBase() = default;

protected:
  std::string m_name;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // IPARAMETEROBJECTBASE_H