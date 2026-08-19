#include "SimulinkBlock.h"
#include "SimulinkPortType.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkBlock::SimulinkBlock() {}

ISimulinkElement* SimulinkBlock::New() const { return nullptr; }

SLXIO_ABI_NAMESPACE_END

}; // namespace slxio
