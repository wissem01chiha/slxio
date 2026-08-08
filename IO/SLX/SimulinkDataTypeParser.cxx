#include "SimulinkDataTypeParser.h"

#include <cstring>
#include <unordered_map>

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

HError SimulinkDataTypeParser::setInputData(const std::string data)
{
  if (data.empty()) {
    // l.log(Logger::V_ERROR, "SimulinkDataTypeParser:: empty data string");
    return E_INVALID_ARGUMENT;
  }
  dataObject = data;
  return E_OK;
}

HError SimulinkDataTypeParser::setInputData(const char* data)
{

  if (data == nullptr || strlen(data) == 0) {
    // l.log(Logger::V_ERROR,
      "SimulinkDataTypeParser:: null or empty input data received");
      return E_INVALID_ARGUMENT;
  }
  dataObject = std::string(data);
  return E_OK;
}

HError SimulinkDataTypeParser::parse()
{

  static const std::unordered_map<std::string, SimulinkDataType> sldtMap = {
#define XX(enumVal, str) { str, enumVal },
    SIMULINKDATATYPE_MAP(XX)
#undef XX
  };

  auto it = sldtMap.find(dataObject);
  if (it != sldtMap.end()) {
    ptr = std::make_shared<SimulinkDataType>(it->second);
    return E_OK;
  }
  // l.log(Logger::V_ERROR,
    "SimulinkDataTypeParser:: unrecognized data type string: " + dataObject);
    ptr = std::make_shared<SimulinkDataType>(SimulinkDataType::Auto);
    return E_INVALID_ARGUMENT;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
