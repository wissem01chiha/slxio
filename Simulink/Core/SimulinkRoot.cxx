#include "SimulinkRoot.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkRoot::SimulinkRoot() {}

SimulinkArray& SimulinkRoot::getSubsystems()
{
  return subsystems;
}

SimulinkArray& SimulinkRoot::getConfigSets()
{
  return configSets;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
