#include "SimulinkModelParser.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkModelParser::SimulinkModelParser() {
  ptr_ = std::make_shared<SimulinkModel>();
  dataObject = nullptr;
}

ErrorCode SimulinkModelParser::setInputData(const xmlNodePtr data) {

  Logger &l = Logger::getInstance();
  if (data == nullptr) {
    l.log(Logger::V_ERROR, "SimulinkModelParser:: null pointer received");
    return ErrorCode::SLX_EINVAR;
  }
  dataObject = data;
  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkModel> SimulinkModelParser::getOutputData() const {
  return ptr_;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END