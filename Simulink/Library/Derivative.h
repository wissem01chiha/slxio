// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DERIVATIVE_H
#define DERIVATIVE_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Derivative final {
public:
  /** Default Constructor */
  Derivative();

  /** Get the DerivativeGain */
  Float32 GetDerivativeGain() const;

  /** Set the DerivativeGain */
  void SetDerivativeGain(Float32 value);

  /** Default Destructor */
  ~Derivative();

private:
  Float32 DerivativeGain;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // DERIVATIVE_H
