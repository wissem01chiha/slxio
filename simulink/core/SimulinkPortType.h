// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKPORTTYPE_H
#define SIMULINKPORTTYPE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "SimulinkPCH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Enumeration of Simulink port types.
 */
enum class SimulinkPortType
{
    Inport = 0,
    Outport = 1,
    Enable = 2,
    Trigger = 3,
    State = 4,
    LConn = 5,
    RConn = 6,
    IfAction = 7
};

SLXIO_APIEXPORT std::string ToString(SimulinkPortType type);

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SIMULINKPORTTYPE_H
