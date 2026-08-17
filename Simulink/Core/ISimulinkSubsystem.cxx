#include "SimulinkSubsystem.h"

#include "Logger.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkSubsystem::SimulinkSubsystem() {}

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
