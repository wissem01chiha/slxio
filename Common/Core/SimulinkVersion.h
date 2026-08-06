// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKVERSION_H
#define SIMULINKVERSION_H

#include "Options.h"
#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "CorePCH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

enum class SimulinkVersionRelease;

/**
 * @class SimulinkVersion
 */
class SLXIO_APIEXPORT SimulinkVersion
{
public:
    /**  */
    static UInt16 Year();

    /**  */
    static char Release();
    
    /* */
    static std::string ToString();
    
    /**  */
    static SimulinkVersionRelease GetRelease();
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKVERSION_H
