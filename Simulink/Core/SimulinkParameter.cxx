#include "SimulinkParameter.h"

#include "CoderInfo.h"
#include "ErrorCode.h"
#include "Logger.h"

#include <cstdlib>
#include <cstring>
#include <sstream>

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

static const Logger::ApplicationInfoType SimulinkParameterLogApp = {
  101,
  "SimulinkParameter"
};

SimulinkParameter::SimulinkParameter()
  : Min(SLXIO_FLOAT_MIN)
  , Max(SLXIO_FLOAT_MAX)
  , logger(Logger::GetInstance())
{

  DataType = SimulinkDataType::Auto;
  Complexity = "real";
  Value = "";
  Name = nullptr;
  Description = "";
  Unit = "";
  Dimensions.clear();
  coder = std::make_shared<CoderInfo>();
}

SimulinkParameter::SimulinkParameter(const char* val)
  : Min(SLXIO_FLOAT_MIN)
  , Max(SLXIO_FLOAT_MAX)
  , logger(Logger::GetInstance())
{

  Value = val;
  Name = "";
  Description = "";
  Unit = "";
  Complexity = "real";
  Dimensions.clear();
  coder = std::make_shared<CoderInfo>();

  if (Value && Value[0] == '[') {
    size_t count = 1;
    for (const char* p = Value; *p; ++p) {
      if (*p == ',')
        ++count;
    }
    Dimensions = { static_cast<UInt16>(count) };
  }
  DataType = toSimulinkDataType(val);
}

SimulinkDataType SimulinkParameter::GetDataType()
{
  return DataType;
}

void SimulinkParameter::SetDataType(SimulinkDataType DataType_)
{

  if (DataType_ == DataType) {
    logger.SendLogMessage(
      { Logger::MessageType::LOG,
        Logger::LOG_WARN,
        SimulinkParameterLogApp,
        0 },
      { "SimulinkParameter::SetDataType called with same data type. No "
        "changes "
        "made." });
    return;
  }

  this->DataType = DataType_;
}

const char* SimulinkParameter::GetValue()
{
  return Value;
}

void SimulinkParameter::SetValue(const char* value)
{
  Value = value;
}

UInt32 SimulinkParameter::GetValueAsDouble(Float32& fval)
{
  if (!Value) {
    fval = 0.0;
    return E_PARAMETER_NULL_PTR;
  }
  char* endptr = nullptr;
  fval = std::strtod(Value, &endptr);
  if (endptr == Value) {
    return E_OK;
  }
  return E_OK;
}

UInt32 SimulinkParameter::GetValueAsSingle(Float32& sval)
{
  if (!Value) {
    sval = 0.0;
    return E_PARAMETER_NULL_PTR;
  }
  char* endptr = nullptr;
  sval = std::strtof(Value, &endptr);
  if (endptr == Value) {
    return E_OK;
  }
  return E_OK;
}

UInt32 SimulinkParameter::GetValueAsUInt8(UInt8& u8val)
{
  if (!Value) {
    u8val = 0;
    return E_PARAMETER_NULL_PTR;
  }
  char* endptr = nullptr;
  long parsed = std::strtol(Value, &endptr, 10);
  if (endptr == Value) {
    u8val = 0;
    return E_OK;
  }
  u8val = static_cast<UInt8>(parsed);
  return E_OK;
}

UInt32 SimulinkParameter::GetValueAsUInt16(UInt16& u16val)
{

  if (!Value) {
    u16val = 0;
    return E_PARAMETER_NULL_PTR;
  }
  char* endptr = nullptr;
  long parsed = std::strtol(Value, &endptr, 10);
  if (endptr == Value) {
    u16val = 0;
    return E_OK;
  }
  u16val = static_cast<UInt16>(parsed);
  return E_OK;
}

std::shared_ptr<CoderInfo> SimulinkParameter::GetCoderInfo()
{
  return coder;
}

std::vector<UInt16> SimulinkParameter::GetDimensions()
{
  return Dimensions;
}

std::string SimulinkParameter::ToString() const
{

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

std::string SimulinkParameter::GetName()
{
  return Name;
}

UInt32 SimulinkParameter::SetName(const char* name)
{

  if (name == nullptr) {
    return E_PARAMETER_NULL_PTR;
  }
  if (strcmp(name, "") == 0) {
    return E_INVALID_ARGUMENT;
  }
  Name = name;
  return E_OK;
}

Float32 SimulinkParameter::GetMin()
{
  return Min;
}

Float32 SimulinkParameter::GetMax()
{
  return Max;
}

Logger& SimulinkParameter::GetLogger() const
{
  return logger;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
