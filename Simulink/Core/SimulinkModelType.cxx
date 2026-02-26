#include "SimulinkModelType.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkModelType::SimulinkModelType(SimulinkModelType::Type type)
  : type(type)
{
}

std::string SimulinkModelType::toString(SimulinkModelType::Type type)
{
  switch (type)
  {
    case SimulinkModelType::Library:
      return std::string("Library");
    case SimulinkModelType::Model:
      return std::string("Model");
    default:
      return std::string("");
  }
}

SimulinkModelType::Type SimulinkModelType::getType() const
{
  return type;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
