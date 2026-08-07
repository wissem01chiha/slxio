#include "SimulinkPortType.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

bool SimulinkPortType::isA(const SimulinkPortType &typeObj) {
  return this->type_ == typeObj.type_;
}

bool operator==(const SimulinkPortType &lhs, const SimulinkPortType &rhs) {
  return lhs.type_ == rhs.type_;
}

std::string SimulinkPortType::ToString() const {
  switch (type_) {
  case INPORT:
    return "INPORT";
  case OUTPORT:
    return "OUTPORT";
  case ENABLE:
    return "ENABLE";
  case TRIGGER:
    return "TRIGGER";
  case STATE:
    return "STATE";
  case LCONN:
    return "LCONN";
  case RCONN:
    return "RCONN";
  case IFACTION:
    return "IFACTION";
  default:
    return "UNKNOWN";
  }
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
