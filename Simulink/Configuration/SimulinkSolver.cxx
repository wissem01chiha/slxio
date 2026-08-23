#include "SimulinkSolver.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

bool SimulinkSolver::IsValid() const
{
    return std::stod(StopTime) > std::stod(StartTime);
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
