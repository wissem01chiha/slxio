// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SUBSYSTEM_H
#define SUBSYSTEM_H

#include "AbiNamespaceMacro.h"
#include "PlatformTypes.h"
#include "ApiExportMacro.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Subsystem final
{
public:
  /** Default Constructor */
  Subsystem();

  /** Get the Enabled */
  bool GetEnabled() const;

  /** Set the Enabled */
  void SetEnabled(bool value);

  /** Default Destructor */
  ~Subsystem();

private:
  bool Enabled;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SUBSYSTEM_H
