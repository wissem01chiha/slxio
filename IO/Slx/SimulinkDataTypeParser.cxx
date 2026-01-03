#include "SimulinkDataTypeParser.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ErrorCode SimulinkDataTypeParser::setInputData(const std::string data) {
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkDataTypeParser::setInputData(const char *data) {
  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkDataType>
SimulinkDataTypeParser::getDataObject() const {
  return ptr_;
}

ErrorCode SimulinkDataTypeParser::parse() { return ErrorCode::SLX_OK; }


SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

