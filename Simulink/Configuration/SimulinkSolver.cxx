#include "SimulinkSolver.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

bool IsValid(const SimulinkSolver* solver)
{
    if (solver == nullptr)
    {
        return false;
    }
    return std::stod(solver->StopTime) > std::stod(solver->StartTime);
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
