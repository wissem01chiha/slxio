// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKVERSIONRELEASE_H
#define SIMULINKVERSIONRELEASE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @enum SimulinkVersionRelease
 * @brief Enumeration class containing all Simulink© Releases
 * supported, this may grow by time, adding support/patches for newer
 * releases, note that slxio and Simulink DO NOT follow the same versioning
 * system!
 */
enum class SLXIO_APIEXPORT SimulinkVersionRelease
{
    R2018a,
    R2018b,
    R2019a,
    R2025b
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKVERSIONRELEASE_H