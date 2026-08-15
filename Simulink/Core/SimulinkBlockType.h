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
 * @class SimulinkBlockType
 * @brief Enumeration wrapper for Simulink block types.
 */
class SLXIO_APIEXPORT SimulinkBlockType final
{
public:
    enum Type
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
        numInPorts,
        numOutPorts
    };

    /** Default constructor */
    SimulinkBlockType() = default;

    /** Constructs a block type from an enum value */
    explicit SimulinkBlockType(Type type);

    /** Default destructor */
    ~SimulinkBlockType() = default;

    /** Checks if this block type matches the given type */
    bool isA(SimulinkBlockType::Type type) const;

    /** Returns the string representation of the current block type */
    std::string ToString() const;

private:
    Type m_type;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKBLOCKTYPE_H
