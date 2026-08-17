// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKSUBSYSTEM_H
#define SIMULINKSUBSYSTEM_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "SimulinkBlock.h"
#include "SimulinkElementBase.h"
#include "SimulinkPort.h"


namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief A SimulinkSubsystem Object
 * @note this struct do not map to a concrete Simulink object in
 * MATLAB API rather then an extension for hiracical blcoks or models
 * manipulatoation added as a feature in the librray
 */
class SLXIO_APIEXPORT ISimulinkSubsystem
{
public:
    ISimulinkSubsystem();
    ~ISimulinkSubsystem() = default;
    std::vector<std::shared_ptr<SimulinkBlock>> getBlocks();
    std::vector<std::shared_ptr<SimulinkBlock>> getPorts();

private:
    std::vector<std::shared_ptr<SimulinkBlock>> subsystemBlocks;
    std::vector<std::shared_ptr<SimulinkBlock>> subsystemPorts;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKSUBSYSTEM_H
