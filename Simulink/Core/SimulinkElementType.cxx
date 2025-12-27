#include "SimulinkElementType.h"
#include <cstring>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

bool SimulinkElementType::isA(const SimulinkElementType &typeObj) {
  return this->type_ == typeObj.type_;
}

bool SimulinkElementType::isA(const SimulinkElementType::Type &type) {
  return this->type_ == type;
}

SimulinkElementType::SimulinkElementType(SimulinkElementType::Type typeName) {
  this->type_ = typeName;
}

SimulinkElementType &SimulinkElementType::getInstance() {
  static SimulinkElementType instance;
  return instance;
}

SimulinkElementType::Type SimulinkElementType::toType(const char *typeName) {
  if (typeName != nullptr && *typeName) {
    if (strcmp(typeName, "Array")) {
      return Type::Array;
    } else if (strcmp(typeName, "Object")) {
      return Type::Object;
    }
  }
  return Type::Unkown;
}

bool operator==(const SimulinkElementType &lhs,
                const SimulinkElementType &rhs) {
  return lhs.type_ == rhs.type_;
};

const char *SimulinkElementType::toString(SimulinkElementType::Type type) {
  switch (type) {
  case Base:
    return "Base";
  case Object:
    return "Object";
  case Block:
    return "Block";
  case Port:
    return "Port";
  case Line:
    return "Line";
  case Model:
    return "Model";
  case Annotation:
    return "Annotation";
  case Array:
    return "Array";
  case Parameter:
    return "Parameter";
  case ConfigSet:
    return "ConfigSet";
  case Chart:
    return "Chart";
  case Unkown:
    return "Unknown";
  default:
    return "Invalid";
  }
}

std::string SimulinkElementType::toString() {
  return std::string(this->toString(type_));
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END