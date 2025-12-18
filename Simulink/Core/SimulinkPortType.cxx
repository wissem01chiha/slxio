#include "SimulinkPortType.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

bool SimulinkPortType::isA(const SimulinkPortType &typeObj) { return true; }

std::string SimulinkPortType::toString() { return std::string("gg"); }

bool operator==(const SimulinkPortType &lhs, const SimulinkPortType &rhs) {
  return true;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
