// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef REINITIALIZEFUNCTION_H
#define REINITIALIZEFUNCTION_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ReinitializeFunction : public IBlockParameters,
                                             public IBlockProperties
{
public:
    /** Default Constructor */
    ReinitializeFunction();

    /** Default Destructor */
    ~ReinitializeFunction();

private:
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // REINITIALIZEFUNCTION_H
