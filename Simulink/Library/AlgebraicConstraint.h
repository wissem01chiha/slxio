// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ALGEBRAICCONSTRAINT_H
#define ALGEBRAICCONSTRAINT_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT AlgebraicConstraint final {
public:
  /** Default Constructor */
  AlgebraicConstraint();

  /** Get the ConstraintValue */
  Float32 GetConstraintValue() const;

  /** Set the ConstraintValue */
  void SetConstraintValue(Float32 value);

  /** Default Destructor */
  ~AlgebraicConstraint();

private:
  Float32 ConstraintValue;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // ALGEBRAICCONSTRAINT_H
