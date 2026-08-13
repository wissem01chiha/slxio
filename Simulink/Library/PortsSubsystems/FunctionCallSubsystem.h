// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef FUNCTIONCALLSUBSYSTEM_H
#define FUNCTIONCALLSUBSYSTEM_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT FunctionCallSubsystem : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  FunctionCallSubsystem();

  /** Default Destructor */
  ~FunctionCallSubsystem();

private:

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // FUNCTIONCALLSUBSYSTEM_H
