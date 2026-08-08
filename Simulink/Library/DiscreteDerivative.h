// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DISCRETEDERIVATIVE_H
#define DISCRETEDERIVATIVE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DiscreteDerivative final
{
public:
  /** Default Constructor */
  DiscreteDerivative();

  /** Get the SampleTime */
  Float32 GetSampleTime() const;

  /** Set the SampleTime */
  void SetSampleTime(Float32 value);

  /** Default Destructor */
  ~DiscreteDerivative();

private:
  Float32 SampleTime;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // DISCRETEDERIVATIVE_H
