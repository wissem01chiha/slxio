// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef GROUNDD0_H
#define GROUNDD0_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT GroundD0 : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  GroundD0();

  /** Default Destructor */
  ~GroundD0();

private:

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // GROUNDD0_H
