#include "SimulinkParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkParameter::SimulinkParameter(uint32 val) {
  intValue = val;
  DataType = Int;
  Dimensions.clear();
  Dimensions.push_back((uint16)1);
}

SimulinkParameter::SimulinkParameter(Float val) {
  doubleValue = val;
  DataType = Double;
  Dimensions.clear();
  Dimensions.push_back((uint16)1);
}

SimulinkParameter::SimulinkParameter(const std::string &val) {
  stringValue = val;
  DataType = String;
  Dimensions.clear();
  Dimensions.push_back((uint16)1);
}

SimulinkParameter::SimulinkParameter(char *val) {
  charValue = val;
  DataType = Char;
  Dimensions.clear();
}

SimulinkParameter::SimulinkParameter(const std::vector<Float> &val) {
  vectorValue = val;
  DataType = Vector;
  Dimensions.clear();
  Dimensions.push_back(static_cast<uint16>(val.size()));
}

Float SimulinkParameter::getValueAsFloat() {
  if (DataType == Double) {
    return doubleValue;
  } else if (DataType == Int) {
    return (Float)intValue;
  }
  return FloatEps;
}

uint32 SimulinkParameter::getValueAsInt() { return 1; }

const char *SimulinkParameter::getValueAsChar() {
  if (DataType == Char) {
    return charValue;
  } else if (DataType == String) {
    return stringValue.c_str();
  }
  return nullptr;
}

std::string SimulinkParameter::getValueAsString() {
  if (DataType == String) {
    return stringValue;
  } else if (DataType == Char) {
    return std::string(charValue);
  }
  return std::string();
}

const std::vector<Float> SimulinkParameter::getValueAsVector() {
  return std::vector<Float>();
}

CoderInfo SimulinkParameter::getCoderInfo() { return coder; }

std::vector<uint16> SimulinkParameter::getDimensions() { return Dimensions; }

std::string SimulinkParameter::toString() {

  char str[100];
  strcpy(str, "{");
  strcpy(str, Name);
  strcpy(str, ",");
  strcpy(str, toString(DataType));
  strcpy(str, ",");
  strcpy(str, getValueAsChar());
  strcpy(str, "}");

  return std::string(str);
}

const char *SimulinkParameter::toString(ValueType vtype) {
  switch (vtype) {
  case Int:
    return "Int";
    break;
  case Double:
    return "Double";
    break;
  case String:
    return "String";
    break;
  case Vector:
    return "Vector";
    break;
  case Char:
    return "Char";
    break;
  default:
    return "";
    break;
  }
}

const char *SimulinkParameter::getName() { return Name; }

SimulinkParameter::ErrorCode SimulinkParameter::setName(const char *name) {
  if (strcmp(name, "")) {
    return InvalidArgument;
  }
  Name = name;
  return Ok;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
