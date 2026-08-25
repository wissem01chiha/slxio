// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ISIMULINKSUBSYSTEM_H
#define ISIMULINKSUBSYSTEM_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ISimulinkElement.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class ISimulinkBlock;
class SimulinkPort;

/**
 * @brief A SimulinkSubsystem Object
 * @note this struct do not map to a concrete Simulink object in
 * MATLAB API rather then an extension for hiracical blcoks or models
 * manipulatoation added as a feature in the librray
 */
class SLXIO_APIEXPORT ISimulinkSubsystem : public ISimulinkElement
{
public:
    ISimulinkSubsystem();

    std::vector<std::shared_ptr<ISimulinkBlock>> GetBlocks() const;
    std::vector<std::shared_ptr<SimulinkPort>> GetPorts() const;

    ~ISimulinkSubsystem() = default;

private:
    std::vector<std::shared_ptr<ISimulinkBlock>> m_subsystemBlocks;
    std::vector<std::shared_ptr<SimulinkPort>> m_subsystemPorts;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // ISIMULINKSUBSYSTEM_H
