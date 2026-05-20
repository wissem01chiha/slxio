// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TRANSFERFCN_H
#define TRANSFERFCN_H

#include "AbiNamespaceMacro.h"
#include "PlatformTypes.h"
#include "ApiExportMacro.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT TransferFcn final
{
public:
  /** Default Constructor */
  TransferFcn();

  /** Get the Numerator */
  Float32 GetNumerator() const;

  /** Set the Numerator */
  void SetNumerator(Float32 value);

  /** Default Destructor */
  ~TransferFcn();

private:
  Float32 Numerator;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // TRANSFERFCN_H
