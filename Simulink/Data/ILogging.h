// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataPCH.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class ILogging
 */
class SLXIO_APIEXPORT ILogging
{
public:
  ILogging() = default;
  virtual ~ILogging() = default;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio