#include "SimulinkPort.h"
#include "SimulinkSubsystem.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

ISimulinkSubsystem::ISimulinkSubsystem() = default;

std::vector<std::shared_ptr<ISimulinkBlock>>
ISimulinkSubsystem::GetBlocks() const
{
    return m_subsystemBlocks;
}

std::vector<std::shared_ptr<SimulinkPort>> ISimulinkSubsystem::GetPorts() const
{
    return m_subsystemPorts;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
