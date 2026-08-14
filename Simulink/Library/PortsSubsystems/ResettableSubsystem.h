// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef RESETTABLESUBSYSTEM_H
#define RESETTABLESUBSYSTEM_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ResettableSubsystem : public IBlockParameters,
                                            public IBlockProperties
{
public:
    /** Default Constructor */
    ResettableSubsystem();

    /** Default Destructor */
    ~ResettableSubsystem();

private:
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // RESETTABLESUBSYSTEM_H
