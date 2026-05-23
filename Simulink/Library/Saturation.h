// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SATURATION_H
#define SATURATION_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Saturation final
{
public:
  /** Default Constructor */
  Saturation();

  /** Get the UpperLimit */
  Float32 GetUpperLimit() const;

  /** Set the UpperLimit */
  void SetUpperLimit(Float32 value);

  /** Default Destructor */
  ~Saturation();

private:
  Float32 UpperLimit;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SATURATION_H
