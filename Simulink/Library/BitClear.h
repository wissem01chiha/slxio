// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef BITCLEAR_H
#define BITCLEAR_H

#include "AbiNamespaceMacro.h"
#include "PlatformTypes.h"
#include "ApiExportMacro.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT BitClear final
{
public:
  /** Default Constructor */
  BitClear();

  /** Get the BitPosition */
  Float32 GetBitPosition() const;

  /** Set the BitPosition */
  void SetBitPosition(Float32 value);

  /** Default Destructor */
  ~BitClear();

private:
  Float32 BitPosition;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // BITCLEAR_H
