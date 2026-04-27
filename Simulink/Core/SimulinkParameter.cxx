#include "SimulinkParameter.h"
#include "Logger.h"
#include <cstdlib>
#include <cstring>
#include <sstream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkParameter::SimulinkParameter()
  : Min(FloatMin)
  , Max(FloatMax)
{

  DataType = SimulinkDataType::Auto;
  Complexity = "real";
  Value = "";
  Name = nullptr;
  Description = "";
  Unit = "";
  Dimensions.clear();
}

SimulinkParameter::SimulinkParameter(const char* val)
  : Min(FloatMin)
  , Max(FloatMax)
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
    Dimensions = { static_cast<uint16>(count) };
  }
  DataType = toSimulinkDataType(val);
}

SimulinkDataType SimulinkParameter::getDataType()
{
  return DataType;
}

void SimulinkParameter::setDataType(SimulinkDataType DataType_)
{

  if (DataType_ == DataType)
  {
    Logger::getInstance().log(Logger::V_WARNING,
      "SimulinkParameter::setDataType called with same "
      "data type. No changes made.");
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

UInt32 SimulinkParameter::getValueAsDouble(Float& fval)
{
  if (!Value)
  {
    fval = 0.0;
    return SLX_ENULLPTR;
  }
  char* endptr = nullptr;
  fval = std::strtod(Value, &endptr);
  if (endptr == Value)
  {
    return SLX_ETYPEMISMATCH;
  }
  return E_OK;
}

UInt32 SimulinkParameter::getValueAsSingle(Float& sval)
{
  if (!Value)
  {
    sval = 0.0;
    return SLX_ENULLPTR;
  }
  char* endptr = nullptr;
  sval = std::strtof(Value, &endptr);
  if (endptr == Value)
  {
    return SLX_ETYPEMISMATCH;
  }
  return E_OK;
}

UInt32 SimulinkParameter::getValueAsUInt8(uint8& u8val)
{
  if (!Value)
  {
    u8val = 0;
    return SLX_ENULLPTR;
  }
  char* endptr = nullptr;
  long parsed = std::strtol(Value, &endptr, 10);
  if (endptr == Value)
  {
    u8val = 0;
    return SLX_ETYPEMISMATCH;
  }
  u8val = static_cast<uint8>(parsed);
  return E_OK;
}

UInt32 SimulinkParameter::getValueAsUInt16(uint16& u16val)
{

  if (!Value)
  {
    u16val = 0;
    return SLX_ENULLPTR;
  }
  char* endptr = nullptr;
  long parsed = std::strtol(Value, &endptr, 10);
  if (endptr == Value)
  {
    u16val = 0;
    return SLX_ETYPEMISMATCH;
  }
  u16val = static_cast<uint16>(parsed);
  return E_OK;
}

UInt32 SimulinkParameter::getValueAsString(std::string& strval)
{

  if (!Value)
  {
    strval.clear();
    return SLX_ENULLPTR;
  }
  strval = std::string(Value);
  return E_OK;
}

UInt32 SimulinkParameter::getValueAsArray(std::vector<Float>& vecval)
{

  vecval.clear();
  if (!Value)
  {
    return SLX_ENULLPTR;
  }
  if (Value[0] != '[')
  {
    return SLX_ETYPEMISMATCH;
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
      return SLX_ETYPEMISMATCH;
    }
    vecval.push_back(static_cast<Float>(parsed));
  }
  return E_OK;
}

CoderInfo SimulinkParameter::getCoderInfo()
{
  return coder;
}

std::vector<uint16> SimulinkParameter::getDimensions()
{
  return Dimensions;
}

std::string SimulinkParameter::toString() const
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
    return SLX_ENULLPTR;
  }
  if (strcmp(name, "") == 0)
  {
    return SLX_EINVAR;
  }
  Name = name;
  return E_OK;
}

SimulinkElementType SimulinkParameter::getType() const
{
  return SimulinkElementType(SimulinkElementType::Type::Parameter);
}

Index SimulinkParameter::getID() const
{
  Logger::getInstance().log(Logger::V_WARNING,
    "SimulinkParameter::getID called on unsupported element. "
    "Returning 0.");
  return (Index)0;
}

bool SimulinkParameter::contains(const Index& id) const
{
  Logger::getInstance().log(Logger::V_WARNING,
    "SimulinkParameter::contains called on unsupported element.");
  return false;
}

UInt32 SimulinkParameter::remove(
  const std::shared_ptr<SimulinkElementBase> element)
{
  Logger::getInstance().log(
    Logger::V_ERROR, "SimulinkParameter::remove is not supported.");
  return SLX_ENOTIMPL;
}

UInt32 SimulinkParameter::add(
  const std::shared_ptr<SimulinkElementBase> element)
{
  Logger::getInstance().log(
    Logger::V_ERROR, "SimulinkParameter::add is not supported.");
  return SLX_ENOTIMPL;
}

Float SimulinkParameter::getMin()
{
  return Min;
}

Float SimulinkParameter::getMax()
{
  return Max;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
