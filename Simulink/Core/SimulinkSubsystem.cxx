#include "SimulinkSubsystem.h"
#include "ISimulinkBlock.h"
#include "SimulinkPort.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkSubsystem::SimulinkSubsystem() = default;

std::vector<std::shared_ptr<SimulinkBlock>> SimulinkSubsystem::getBlocks()
{
    return subsystemBlocks;
}

std::vector<std::shared_ptr<SimulinkBlock>> SimulinkSubsystem::getPorts()
{
    return subsystemPorts;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
