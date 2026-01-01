#include "SimulinkSignalParser.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkSignalParser::SimulinkSignalParser() : dataObject(nullptr) {
  ptr_ = std::make_shared<SimulinkSignal>();
}

ErrorCode SimulinkSignalParser::setInputData(const xmlNodePtr data) {
  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkSignal> SimulinkSignalParser::getDataObject() const {
  return ptr_;
}

ErrorCode SimulinkSignalParser::parse() { return ErrorCode::SLX_OK; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
