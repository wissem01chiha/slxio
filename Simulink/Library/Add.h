// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ADD_H
#define ADD_H

#include "AbiNamespaceMacro.h"
#include "PlatformTypes.h"
#include "ApiExportMacro.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Add final
{
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
SLXIO_NAMESPACE_END

#endif // ADD_H
