// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IDIAGNOCTICS_H
#define IDIAGNOCTICS_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataPCH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class IDiagnoctics
 */
class SLXIO_APIEXPORT IDiagnoctics
{
public:
  enum class Type
  {
    none,
    warning,
    error
  };

  IDiagnoctics() = default;
  virtual ~IDiagnoctics() = default;

  virtual void SetDetectReadBeforeWrite(IDiagnoctics::Type m) = 0;
  virtual void SetDetectWriteBeforeRead(IDiagnoctics::Type m) = 0;
  virtual void SetDetectWriteAfterWrite(IDiagnoctics::Type m) = 0;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // IDIAGNOCTICS_H