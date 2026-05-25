#include "SimulinkParameter.h"
#include "Logger.h"
#include <cstdlib>
#include <cstring>
#include <sstream>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

static const Logger::ApplicationInfoType SimulinkParameterLogApp = { 101,
  "SimulinkParameter" };

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
  coder = CoderInfo();
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
  coder = CoderInfo();

  if (Value && Value[0] == '[')
  {
    size_t count = 1;
    for (const char* p = Value; *p; ++p)
    {
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

  if (DataType_ == DataType)
  {
    logger.SendLogMessage({ Logger::MessageType::LOG, Logger::LOG_WARN,
                            SimulinkParameterLogApp, 0 },
      { "SimulinkParameter::SetDataType called with same data type. No changes "
        "made." });
    return;
  }

  this->DataType = DataType_;
}

const char* SimulinkParameter::getValue()
{
  return Value;
}

void SimulinkParameter::setValue(const char* value)
{
  Value = value;
}

UInt32 SimulinkParameter::getValueAsDouble(Float32& fval)
{
  if (!Value)
  {
    fval = 0.0;
    return E_PARAMETER_NULL_PTR;
  }
  char* endptr = nullptr;
  fval = std::strtod(Value, &endptr);
  if (endptr == Value)
  {
    return E_OK;
  }
  return E_OK;
}

UInt32 SimulinkParameter::getValueAsSingle(Float32& sval)
{
  if (!Value)
  {
    sval = 0.0;
    return E_PARAMETER_NULL_PTR;
  }
  char* endptr = nullptr;
  sval = std::strtof(Value, &endptr);
  if (endptr == Value)
  {
    return E_OK;
  }
  return E_OK;
}

UInt32 SimulinkParameter::getValueAsUInt8(UInt8& u8val)
{
  if (!Value)
  {
    u8val = 0;
    return E_PARAMETER_NULL_PTR;
  }
  char* endptr = nullptr;
  long parsed = std::strtol(Value, &endptr, 10);
  if (endptr == Value)
  {
    u8val = 0;
    return E_OK;
  }
  u8val = static_cast<UInt8>(parsed);
  return E_OK;
}

UInt32 SimulinkParameter::getValueAsUInt16(UInt16& u16val)
{

  if (!Value)
  {
    u16val = 0;
    return E_PARAMETER_NULL_PTR;
  }
  char* endptr = nullptr;
  long parsed = std::strtol(Value, &endptr, 10);
  if (endptr == Value)
  {
    u16val = 0;
    return E_OK;
  }
  u16val = static_cast<UInt16>(parsed);
  return E_OK;
}

UInt32 SimulinkParameter::getValueAsString(std::string& strval)
{

  if (!Value)
  {
    strval.clear();
    return E_PARAMETER_NULL_PTR;
  }
  strval = std::string(Value);
  return E_OK;
}

UInt32 SimulinkParameter::getValueAsArray(std::vector<Float32>& vecval)
{

  vecval.clear();
  if (!Value)
  {
    return E_PARAMETER_NULL_PTR;
  }
  if (Value[0] != '[')
  {
    return E_OK;
  }

  std::string s(Value);
  s.erase(0, 1);
  if (!s.empty() && s.back() == ']')
  {
    s.pop_back();
  }

  std::stringstream ss(s);
  std::string token;
  while (std::getline(ss, token, ','))
  {
    char* endptr = nullptr;
    double parsed = std::strtod(token.c_str(), &endptr);
    if (endptr == token.c_str())
    {
      return E_OK;
    }
    vecval.push_back(static_cast<Float32>(parsed));
  }
  return E_OK;
}

CoderInfo SimulinkParameter::GetCoderInfo()
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

const char* SimulinkParameter::getName()
{
  return Name;
}

UInt32 SimulinkParameter::setName(const char* name)
{

  if (name == nullptr)
  {
    return E_PARAMETER_NULL_PTR;
  }
  if (strcmp(name, "") == 0)
  {
    return E_INVALID_ARGUMENT;
  }
  Name = name;
  return E_OK;
}

SimulinkElementType SimulinkParameter::GetElementType() const
{
  return SimulinkElementType(SimulinkElementType::Type::Parameter);
}

IdType SimulinkParameter::GetElementId() const
{
  logger.SendLogMessage(
    { Logger::MessageType::LOG, Logger::LOG_WARN, SimulinkParameterLogApp, 0 },
    { "GetElementId called on unsupported element. Returning 0." });
  return (IdType)0;
}

bool SimulinkParameter::Contains(const IdType& id) const
{
  logger.SendLogMessage(
    { Logger::MessageType::LOG, Logger::LOG_WARN, SimulinkParameterLogApp, 0 },
    { "Contains called on unsupported element." });
  return false;
}

ReturnType SimulinkParameter::Erase(
  const std::shared_ptr<SimulinkElementBase>& element)
{
  logger.SendLogMessage(
    { Logger::MessageType::LOG, Logger::LOG_ERROR, SimulinkParameterLogApp, 0 },
    { "Erase is not supported." });
  return E_NOT_IMPLEMENTED;
}

ReturnType SimulinkParameter::Insert(
  const std::shared_ptr<SimulinkElementBase>& element)
{
  logger.SendLogMessage(
    { Logger::MessageType::LOG, Logger::LOG_ERROR, SimulinkParameterLogApp, 0 },
    { "Insert is not supported." });
  return E_NOT_IMPLEMENTED;
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
};
