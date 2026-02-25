#include "SimulinkModelType.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

std::string SimulinkModelType::toString(SimulinkModelType::Type type)
{
  switch (type)
  {
    case SimulinkModelType::Library:
      return "Library";
    case SimulinkModelType::Model:
      return "Model";
    default:
      return "Unknown";
  }
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
