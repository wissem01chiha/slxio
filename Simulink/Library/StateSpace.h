// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STATESPACE_H
#define STATESPACE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT StateSpace final {
public:
  /** Default Constructor */
  StateSpace();

  /** Get the StateValue */
  Float32 GetStateValue() const;

  /** Set the StateValue */
  void SetStateValue(Float32 value);

  /** Default Destructor */
  ~StateSpace();

private:
  Float32 StateValue;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // STATESPACE_H
