// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SFUNCTIONBUILDER_H
#define SFUNCTIONBUILDER_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT SFunctionBuilder : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  SFunctionBuilder();

  /** Default Destructor */
  ~SFunctionBuilder();

private:

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SFUNCTIONBUILDER_H
