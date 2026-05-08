// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef CONSTANT_H
#define CONSTANT_H

#include "AbiNamespaceMacro.h"
#include "PlatformTypes.h"
#include "SimulinkLibraryBase.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Constant final 
{
  Float32 value;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // CONSTANT_H