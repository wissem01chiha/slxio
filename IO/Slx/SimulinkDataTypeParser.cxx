#include "SimulinkDataTypeParser.h"
#include <cstring>
#include <unordered_map>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ErrorCode SimulinkDataTypeParser::setInputData(const std::string data)
{
  if (data.empty())
  {
    l.log(Logger::V_ERROR, "SimulinkDataTypeParser:: empty data string");
    return ErrorCode::SLX_EINVAR;
  }
  dataObject = data;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkDataTypeParser::setInputData(const char* data)
{

  if (data == nullptr || strlen(data) == 0)
  {
    l.log(Logger::V_ERROR,
      "SimulinkDataTypeParser:: null or empty input data received");
    return ErrorCode::SLX_EINVAR;
  }
  dataObject = std::string(data);
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkDataTypeParser::parse()
{

  static const std::unordered_map<std::string, SimulinkDataType> sldtMap = {
#define XX(enumVal, str) { str, enumVal },
    SIMULINKDATATYPE_MAP(XX)
#undef XX
  };

  auto it = sldtMap.find(dataObject);
  if (it != sldtMap.end())
  {
    ptr = std::make_shared<SimulinkDataType>(it->second);
    return ErrorCode::SLX_OK;
  }
  l.log(Logger::V_ERROR,
    "SimulinkDataTypeParser:: unrecognized data type string: " + dataObject);
  ptr = std::make_shared<SimulinkDataType>(SimulinkDataType::Auto);
  return ErrorCode::SLX_EINVAR;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
