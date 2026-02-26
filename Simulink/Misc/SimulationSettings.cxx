#include "SimulationSettings.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulationSettings::~SimulationSettings() {}

char* SimulationSettings::getSolverName()
{
  return SolverName;
}

char* SimulationSettings::getSolverType()
{
  return SolverType;
}

Float SimulationSettings::getFixedStepSize()
{
  return FixedStepSize;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
