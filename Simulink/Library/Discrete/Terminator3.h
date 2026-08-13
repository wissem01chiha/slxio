// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TERMINATOR3_H
#define TERMINATOR3_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Terminator3 : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Terminator3();

  /** Default Destructor */
  ~Terminator3();

private:

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // TERMINATOR3_H
