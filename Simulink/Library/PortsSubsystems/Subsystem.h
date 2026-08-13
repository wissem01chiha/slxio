// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SUBSYSTEM_H
#define SUBSYSTEM_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Subsystem : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Subsystem();

  /** Default Destructor */
  ~Subsystem();

private:

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SUBSYSTEM_H
