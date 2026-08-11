// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

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
class IParameterObjectBase
{
public:
  virtual ~IParameterObjectBase() = default;
  virtual std::string GetName() const = 0;
  virtual DataType GetDataType() const = 0;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio