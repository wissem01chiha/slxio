// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TERMINATOR4_H
#define TERMINATOR4_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Terminator4 : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Terminator4();

  /** Default Destructor */
  ~Terminator4();

private:

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // TERMINATOR4_H
