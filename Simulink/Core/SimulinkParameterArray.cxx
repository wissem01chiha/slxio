#include "SimulinkParameterArray.h"
#include "CoderInfo.h"
#include "ErrorCode.h"
#include "SimulinkDataType.h"
#include <sstream>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

std::string slxio::SimulinkParameterArray::GetName()
{
  return Name;
}

std::vector<UInt16> SimulinkParameterArray::GetDimensions()
{
  return Dimensions;
}

std::string SimulinkParameterArray::ToString() const
{
  return std::string();
}

HError SimulinkParameterArray::FromString(const char* value)
{
  Data.clear();
  if (!value)
  {
    return E_PARAMETER_NULL_PTR;
  }
  if (value[0] != '[')
  {
    return E_OK;
  }

  std::string s(value);
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
    Data.push_back(static_cast<Float32>(parsed));
  }
  return E_OK;
}

std::shared_ptr<CoderInfo> SimulinkParameterArray::GetCoderInfo()
{
  return Coder;
}

Float32 SimulinkParameterArray::GetMin()
{
  return Float32();
}

Float32 SimulinkParameterArray::GetMax()
{
  return Float32();
}

SimulinkDataType SimulinkParameterArray::GetDataType()
{
  return DataType;
}

SLXIO_ABI_NAMESPACE_END
};
