#include "SimulinkPortParser.h"
#include "Logger.h"
#include "SlxParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkPortParser::SimulinkPortParser() {
  ptr_ = std::make_shared<SimulinkPort>();
}

ErrorCode SimulinkPortParser::setInputData(const xmlNodePtr data) {
  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkPort> SimulinkPortParser::getDataObject() const {
  return ptr_;
}

ErrorCode SimulinkPortParser::parse() { return ErrorCode::SLX_OK; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END


