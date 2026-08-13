// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TERMINATOR2_H
#define TERMINATOR2_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Terminator2 : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Terminator2();

  /** Default Destructor */
  ~Terminator2();

private:

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // TERMINATOR2_H
