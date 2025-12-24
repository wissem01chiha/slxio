#include "SimulinkParameter.h"
#include "Logger.h"
#include <cstdlib>
#include <cstring>
#include <sstream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkParameter::SimulinkParameter() : Min(FloatMin), Max(FloatMax) {

  DataType = SimulinkDataType::Auto;
  Complexity = "real";
  Value = "";
  Name = nullptr;
  Description = "";
  Unit = "";
  Dimensions.clear();
}

SimulinkParameter::SimulinkParameter(const char *val)
    : Min(FloatMin), Max(FloatMax) {

  Value = val;
  Name = nullptr;
  Description = "";
  Unit = "";
  Complexity = "real";
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

ErrorCode SimulinkParameter::getValueAsDouble(Float &fval) {
  if (!Value) {
    fval = 0.0;
    return ErrorCode::SLX_ERR_NULL_PTR;
  }
  char *endptr = nullptr;
  fval = std::strtod(Value, &endptr);
  if (endptr == Value) {
    return ErrorCode::SLX_ERR_TYPE_MISMATCH;
  }
  return ErrorCode::Ok;
}

ErrorCode SimulinkParameter::getValueAsSingle(Float &sval) {
  if (!Value) {
    sval = 0.0;
    return ErrorCode::SLX_ERR_NULL_PTR;
  }
  char *endptr = nullptr;
  sval = std::strtof(Value, &endptr);
  if (endptr == Value) {
    return ErrorCode::SLX_ERR_TYPE_MISMATCH;
  }
  return ErrorCode::Ok;
}

ErrorCode SimulinkParameter::getValueAsUInt8(uint8 &u8val) {
  if (!Value) {
    u8val = 0;
    return ErrorCode::SLX_ERR_NULL_PTR;
  }
  char *endptr = nullptr;
  long parsed = std::strtol(Value, &endptr, 10);
  if (endptr == Value) {
    u8val = 0;
    return ErrorCode::SLX_ERR_TYPE_MISMATCH;
  }
  u8val = static_cast<uint8>(parsed);
  return ErrorCode::Ok;
}

ErrorCode SimulinkParameter::getValueAsUInt16(uint16 &u16val) {

  if (!Value) {
    u16val = 0;
    return ErrorCode::SLX_ERR_NULL_PTR;
  }
  char *endptr = nullptr;
  long parsed = std::strtol(Value, &endptr, 10);
  if (endptr == Value) {
    u16val = 0;
    return ErrorCode::SLX_ERR_TYPE_MISMATCH;
  }
  u16val = static_cast<uint16>(parsed);
  return ErrorCode::Ok;
}

ErrorCode SimulinkParameter::getValueAsString(std::string &strval) {

  if (!Value) {
    strval.clear();
    return ErrorCode::SLX_ERR_NULL_PTR;
  }
  strval = std::string(Value);
  return ErrorCode::Ok;
}

ErrorCode SimulinkParameter::getValueAsArray(std::vector<Float> &vecval) {

  vecval.clear();
  if (!Value) {
    return ErrorCode::SLX_ERR_NULL_PTR;
  }
  if (Value[0] != '[') {
    return ErrorCode::SLX_ERR_TYPE_MISMATCH;
  }

  std::string s(Value);
  s.erase(0, 1);
  if (!s.empty() && s.back() == ']') {
    s.pop_back();
  }

  std::stringstream ss(s);
  std::string token;
  while (std::getline(ss, token, ',')) {
    char *endptr = nullptr;
    double parsed = std::strtod(token.c_str(), &endptr);
    if (endptr == token.c_str()) {
      return ErrorCode::SLX_ERR_TYPE_MISMATCH;
    }
    vecval.push_back(static_cast<Float>(parsed));
  }
  return ErrorCode::Ok;
}

CoderInfo SimulinkParameter::getCoderInfo() { return coder; }

std::vector<uint16> SimulinkParameter::getDimensions() { return Dimensions; }

std::string SimulinkParameter::toString() const {

  char str[100];
  strcpy(str, "{");
  strcpy(str, Name);
  strcpy(str, ",");
  strcpy(str, toChar(DataType));
  strcpy(str, ",");
  strcpy(str, Value);
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

SimulinkElementType SimulinkParameter::getType() const {
  return SimulinkElementType(SimulinkElementType::Type::Parameter);
}

Index SimulinkParameter::getID() const {
  Logger::getInstance().log(
      Logger::V_WARNING,
      "SimulinkParameter::getID called on unsupported element. Returning 0.");
  return (Index)0;
}

bool SimulinkParameter::contains(const Index &id) const {
  Logger::getInstance().log(
      Logger::V_WARNING,
      "SimulinkParameter::contains called on unsupported element.");
  return false;
}

ErrorCode
SimulinkParameter::remove(const std::shared_ptr<SimulinkElementBase> element) {
  Logger::getInstance().log(Logger::V_ERROR,
                            "SimulinkParameter::remove is not supported.");
  return ErrorCode::SLX_ERR_UNSUPPORTED;
}

ErrorCode
SimulinkParameter::add(const std::shared_ptr<SimulinkElementBase> element) {
  Logger::getInstance().log(Logger::V_ERROR,
                            "SimulinkParameter::add is not supported.");
  return ErrorCode::SLX_ERR_UNSUPPORTED;
}

Float SimulinkParameter::getMin(){
  return Min;
}

Float SimulinkParameter::getMax(){
  return Max;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
