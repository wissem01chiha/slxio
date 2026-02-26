#include "SimulinkSubsystem.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
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
SLXIO_NAMESPACE_END