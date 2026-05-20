// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ABS_H
#define ABS_H

#include "AbiNamespaceMacro.h"
#include "PlatformTypes.h"
#include "ApiExportMacro.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Abs final
{
public:
  /** Default Constructor */
  Abs();

  /** Get the InputValue */
  Float32 GetInputValue() const;

  /** Set the InputValue */
  void SetInputValue(Float32 value);

  /** Default Destructor */
  ~Abs();

private:
  Float32 InputValue;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // ABS_H
