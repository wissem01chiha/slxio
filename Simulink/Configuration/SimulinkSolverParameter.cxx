#include "SimulinkSolverParameter.h"
#include "SimulinkSolver.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

IParameterObjectBase* SimulinkSolverParameter::New()
{
    return new SimulinkSolverParameter(); // NOSONAR
}

SimulinkSolver& SimulinkSolverParameter::GetValue() { return m_data; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio