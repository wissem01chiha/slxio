// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef GROUNDRESET_H
#define GROUNDRESET_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT GroundReset : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  GroundReset();

  /** Default Destructor */
  ~GroundReset();

private:

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // GROUNDRESET_H
