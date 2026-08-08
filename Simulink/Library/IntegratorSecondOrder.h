// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef INTEGRATORSECONDORDER_H
#define INTEGRATORSECONDORDER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT IntegratorSecondOrder final
{
public:
  /** Default Constructor */
  IntegratorSecondOrder();

  /** Get the NaturalFrequency */
  Float32 GetNaturalFrequency() const;

  /** Set the NaturalFrequency */
  void SetNaturalFrequency(Float32 value);

  /** Default Destructor */
  ~IntegratorSecondOrder();

private:
  Float32 NaturalFrequency;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // INTEGRATORSECONDORDER_H
