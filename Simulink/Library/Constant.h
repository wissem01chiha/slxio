// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef CONSTANT_H
#define CONSTANT_H

#include "AbiNamespaceMacro.h"
#include "PlatformTypes.h"
#include "SimulinkLibraryBase.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Constant final {
public:
  /** Default Constructor */
  Constant() = default;

  /** Default Destructor */
  ~Constant() = default;

  /** Set the constant value */
  void SetValue(Float32 value);

  /** Get the constant value */
  Float32 GetValue() const;

private:
  Float32 ConstantValue = 0;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // CONSTANT_H
