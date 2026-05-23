// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TERMINATOR_H
#define TERMINATOR_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Terminator final
{
public:
  /** Default Constructor */
  Terminator();

  /** Get the Terminated */
  bool GetTerminated() const;

  /** Set the Terminated */
  void SetTerminated(bool value);

  /** Default Destructor */
  ~Terminator();

private:
  bool Terminated;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // TERMINATOR_H
