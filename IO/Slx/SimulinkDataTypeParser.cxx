#include "SimulinkDataTypeParser.h"
#include <unordered_map>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkDataTypeParser::SimulinkDataTypeParser() {

  ptr_ = std::make_shared<SimulinkDataType>();
  dataObject =std::string("");
}


ErrorCode SimulinkDataTypeParser::setInputData(const std::string data) {

  if (data.empty()) {
    buffer_.push_back(ErrorCode::SLX_EINVAR);
    return ErrorCode::SLX_EINVAR;
  }
  dataObject = data;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkDataTypeParser::setInputData(const char *data) {
  dataObject = std::string(data);
  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkDataType>
SimulinkDataTypeParser::getDataObject() const {
  return ptr_;
}

ErrorCode SimulinkDataTypeParser::parse() {

  static const std::unordered_map<std::string, SimulinkDataType> sldtMap = {
#define XX(enumVal, str) {str, enumVal},
      SIMULINKDATATYPE_MAP(XX)
#undef XX
  };

  auto it = sldtMap.find(dataObject);
  if (it != sldtMap.end()) {
    ptr_ = std::make_shared<SimulinkDataType>(it->second);
    return ErrorCode::SLX_OK;
  }

  ptr_ = std::make_shared<SimulinkDataType>(SimulinkDataType::Auto);
  buffer_.push_back(ErrorCode::SLX_EINVAR);
  return ErrorCode::SLX_EINVAR;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
