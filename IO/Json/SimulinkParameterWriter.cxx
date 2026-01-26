#include "SimulinkParameterWriter.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkParameterWriter::SimulinkParameterWriter() {
  ptr_ = std::make_shared<SimulinkParameter>();
}

ErrorCode SimulinkParameterWriter::Write() { return ErrorCode::SLX_OK; }

ErrorCode SimulinkParameterWriter::setInputData(const SimulinkParameter data) {
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkParameterWriter::setOutputData(json_object *data) {
  return ErrorCode::SLX_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
