#include "SimulationSettings.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulationSettings::~SimulationSettings() {}

char* SimulationSettings::GetSolverName()
{
  return SolverName;
}

char* SimulationSettings::GetSolverType()
{
  return SolverType;
}

Float32 SimulationSettings::GetFixedStepSize()
{
  return FixedStepSize;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
