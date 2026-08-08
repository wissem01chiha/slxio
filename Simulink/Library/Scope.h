// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SCOPE_H
#define SCOPE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class Scope
 * @brief A class representing a scope in the simulation.
 */
class SLXIO_APIEXPORT Scope final {
public:
  Scope();

  UInt32 GetNumInputPorts() const;

  void SetNumInputPorts(UInt32 numPorts);

  ~Scope();

private:
  UInt32 numInputPorts;
  bool floating;
  const char *scopeSpecificationString;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SCOPE_H
