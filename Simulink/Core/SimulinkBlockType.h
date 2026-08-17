// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKBLOCKTYPE_H
#define SIMULINKBLOCKTYPE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "SimulinkPCH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Enumeration of Simulink block types.
 */
enum class SimulinkBlockType
{
    DigitalClock,
    Clock,
    FromWorkspace,
    FromFile,
    Step,
    UniformRandomNumber,
    RandomNumber,
    ToWorkspace,
    Stop,
    ToFile,
    From,
    Goto,
    DataStoreRead,
    DataStoreWrite,
    DataStoreMemory,
    GotoTagVisibility,
    Assertion,
    Terminator,
    Ground,
    Scope,
    Constant,
    Inport,
    Outport,
    Switch,
    RelationalOperator,
    Lookup2D,
    VariableTransportDelay,
    DotProduct,
    FunctionCallSplit,
    ManualSwitch,
    NumInPorts,
    NumOutPorts
};

SLXIO_APIEXPORT std::string ToString(SimulinkBlockType type);

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SIMULINKBLOCKTYPE_H