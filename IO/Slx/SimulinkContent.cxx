#include "SimulinkContent.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

xmlNodePtr SimulinkContent::getBlockdiagramNodePtr() const {
  return xmlNodePtr();
}

xmlNodePtr SimulinkContent::getPropertiesNodePtr() const {
  return xmlNodePtr();
}

xmlNodePtr SimulinkContent::getMwPropertiesNodePtr() const {
  return xmlNodePtr();
}

xmlNodePtr SimulinkContent::getConfigSetInfoNodePtr() const {
  return xmlNodePtr();
}

xmlNodePtr SimulinkContent::getConfigSetNodePtr(Index &idx) const {
  return xmlNodePtr();
}


SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END


