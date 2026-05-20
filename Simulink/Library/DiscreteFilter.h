// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DISCRETEFILTER_H
#define DISCRETEFILTER_H

#include "AbiNamespaceMacro.h"
#include "PlatformTypes.h"
#include "ApiExportMacro.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DiscreteFilter final
{
public:
  /** Default Constructor */
  DiscreteFilter();

  /** Get the FilterCoefficient */
  Float32 GetFilterCoefficient() const;

  /** Set the FilterCoefficient */
  void SetFilterCoefficient(Float32 value);

  /** Default Destructor */
  ~DiscreteFilter();

private:
  Float32 FilterCoefficient;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // DISCRETEFILTER_H
