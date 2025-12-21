#include "SimulinkParameter.h"
#include "Logger.h"
#include <cstdlib>
#include <cstring>
#include <sstream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkParameter::SimulinkParameter() {
  DataType = SimulinkDataType::Auto;
  Complexity = "real";
  Value = "";
  Name = nullptr;
  Description = "";
  Unit = "";
  Min = 0;
  Max = 1;
  Dimensions.clear();
}

SimulinkParameter::SimulinkParameter(const char *val) {
  Value = val;
  Name = nullptr;
  Description = "";
  Unit = "";
  Complexity = "real";
  Min = 0;
  Max = 1;
  Dimensions.clear();
  coder = CoderInfo();

  if (Value && Value[0] == '[') {
    size_t count = 1;
    for (const char *p = Value; *p; ++p) {
      if (*p == ',')
        ++count;
    }
    Dimensions = {static_cast<uint16>(count)};
  }
  DataType = toSimulinkDataType(val);
}

SimulinkDataType SimulinkParameter::getDataType() { return DataType; }

const char *SimulinkParameter::getValue() { return Value; }

Float SimulinkParameter::getValueAsDouble() {
  if (!Value)
    return (Float)0.0;
  return static_cast<Float>(std::strtod(Value, nullptr));
}

Float SimulinkParameter::getValueAsSingle() {
  if (!Value)
    return (Float)0.0;
  return static_cast<Float>(std::strtof(Value, nullptr));
}

uint8 SimulinkParameter::getValueAsUInt8() {
  if (!Value)
    return 0;
  return static_cast<uint8>(std::strtol(Value, nullptr, 10));
}

uint16 SimulinkParameter::getValueAsUInt16() {
  if (!Value)
    return 0;
  return static_cast<uint16>(std::strtol(Value, nullptr, 10));
}
std::string SimulinkParameter::getValueAsString() {
  return Value ? std::string(Value) : std::string();
}

const std::vector<Float> SimulinkParameter::getValueAsArray() {

  std::vector<Float> arr;
  if (!Value)
    return arr;
  if (Value[0] != '[')
    return arr;
  std::string s(Value);
  s.erase(0, 1);

  s.pop_back();
  std::stringstream ss(s);
  std::string token;
  while (std::getline(ss, token, ',')) {
    arr.push_back(static_cast<Float>(std::strtod(token.c_str(), nullptr)));
  }
  return arr;
}

CoderInfo SimulinkParameter::getCoderInfo() { return coder; }

std::vector<uint16> SimulinkParameter::getDimensions() { return Dimensions; }

std::string SimulinkParameter::toString() {

  char str[100];
  strcpy(str, "{");
  strcpy(str, Name);
  strcpy(str, ",");
  strcpy(str, toChar(DataType));
  strcpy(str, ",");
  strcpy(str, getValueAsString().c_str());
  strcpy(str, "}");

  return std::string(str);
}

const char *SimulinkParameter::getName() { return Name; }

ErrorCode SimulinkParameter::setName(const char *name) {

  if (name == nullptr) {
    return ErrorCode::SLX_ERR_NULL_PTR;
  }
  if (strcmp(name, "") == 0) {
    return ErrorCode::InvalidArgument;
  }
  Name = name;
  return ErrorCode::Ok;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
