// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef INTEGRATORLIMITED_H
#define INTEGRATORLIMITED_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT IntegratorLimited final
{
public:
  /** Default Constructor */
  IntegratorLimited();

  /** Get the UpperLimit */
  Float32 GetUpperLimit() const;

  /** Set the UpperLimit */
  void SetUpperLimit(Float32 value);

  /** Default Destructor */
  ~IntegratorLimited();

private:
  Float32 UpperLimit;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // INTEGRATORLIMITED_H
