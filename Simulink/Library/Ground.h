// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef GROUND_H
#define GROUND_H

#include "AbiNamespaceMacro.h"
#include "PlatformTypes.h"
#include "ApiExportMacro.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Ground final
{
public:
  /** Default Constructor */
  Ground();

  /** Get the Grounded */
  bool GetGrounded() const;

  /** Set the Grounded */
  void SetGrounded(bool value);

  /** Default Destructor */
  ~Ground();

private:
  bool Grounded;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // GROUND_H
