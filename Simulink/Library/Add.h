// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ADD_H
#define ADD_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Add final {
public:
  /** Default Constructor */
  Add();

  /** Get the OperandValue */
  Float32 GetOperandValue() const;

  /** Set the OperandValue */
  void SetOperandValue(Float32 value);

  /** Default Destructor */
  ~Add();

private:
  Float32 OperandValue;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // ADD_H
