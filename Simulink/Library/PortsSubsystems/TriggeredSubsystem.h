// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TRIGGEREDSUBSYSTEM_H
#define TRIGGEREDSUBSYSTEM_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT TriggeredSubsystem
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  TriggeredSubsystem();

  /** Default Destructor */
  ~TriggeredSubsystem();

private:
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // TRIGGEREDSUBSYSTEM_H
