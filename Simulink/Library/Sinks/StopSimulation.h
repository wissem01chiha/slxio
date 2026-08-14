// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STOPSIMULATION_H
#define STOPSIMULATION_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT StopSimulation : public IBlockParameters,
                                       public IBlockProperties
{
public:
    /** Default Constructor */
    StopSimulation();

    /** Default Destructor */
    ~StopSimulation();

private:
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // STOPSIMULATION_H
