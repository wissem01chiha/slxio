#include "SimulinkRoot.h"
#include "Logger.h"
#include "SimulinkArray.h"
#include "SimulinkObject.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkRoot::SimulinkRoot()
{
}

SimulinkArray* SimulinkRoot::GetSubsystems()
{
  return Subsystems;
}

SimulinkArray* SimulinkRoot::GetConfigSets()
{
  return ConfigSets;
}

SLXIO_ABI_NAMESPACE_END
};
