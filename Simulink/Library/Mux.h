// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef MUX_H
#define MUX_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Mux final
{
public:
  /** Default Constructor */
  Mux();

  /** Get the NumInputs */
  UInt32 GetNumInputs() const;

  /** Set the NumInputs */
  void SetNumInputs(UInt32 value);

  /** Default Destructor */
  ~Mux();

private:
  UInt32 NumInputs;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // MUX_H
