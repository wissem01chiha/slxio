#include "SimulinkHardwareParser.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkHardwareParser::SimulinkHardwareParser() {
  ptr_ = std::make_shared<SimulinkHardware>();
  dataObject = nullptr;
}

ErrorCode SimulinkHardwareParser::setInputData(const xmlNodePtr data) {

  Logger &l = Logger::getInstance();
  if (data == nullptr) {
    l.log(Logger::V_ERROR, "SimulinkHardwareParser:: null pointer received");
    return ErrorCode::SLX_EINVAR;
  }
  dataObject = data;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkHardwareParser::parse() { return ErrorCode::SLX_OK; }

std::shared_ptr<SimulinkHardware>
SimulinkHardwareParser::getOutputData() const {
  return ptr_;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END