#include "SimulinkElementType.h"
#include <cstring>

namespace slxio {
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

SimulinkElementType &SimulinkElementType::New() {
  static SimulinkElementType instance;
  return instance;
}

SimulinkElementType::Type SimulinkElementType::ToType(const char *typeName) {
  if (typeName != nullptr && *typeName) {
    if (strcmp(typeName, "Array")) {
      return Type::Array;
    } else if (strcmp(typeName, "Object")) {
      return Type::Object;
    } else if (strcmp(typeName, "Block")) {
      return Type::Block;
    } else if (strcmp(typeName, "Port")) {
      return Type::Port;
    } else if (strcmp(typeName, "Line")) {
      return Type::Line;
    } else if (strcmp(typeName, "Model")) {
      return Type::Model;
    } else if (strcmp(typeName, "Annotation")) {
      return Type::Annotation;
    } else if (strcmp(typeName, "Parameter")) {
      return Type::Parameter;
    } else if (strcmp(typeName, "ConfigSet")) {
      return Type::ConfigSet;
    } else if (strcmp(typeName, "Chart")) {
      return Type::Chart;
    }
  }
  return Type::Unknown;
}

const char *SimulinkElementType::ToString(SimulinkElementType::Type type) {
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
  case Unknown:
    return "Unknown";
  default:
    return "Invalid";
  }
}

std::string SimulinkElementType::ToString() const {
  return std::string(this->ToString(type_));
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
