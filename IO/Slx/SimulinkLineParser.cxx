#include "SimulinkLineParser.h"
#include "SimulinkParameterParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkLineParser::SimulinkLineParser() : dataObject(nullptr) {
  this->ptr_ = std::make_shared<SimulinkLine>();
}

ErrorCode SimulinkLineParser::setInputData(const xmlNodePtr data) {

  if (!data) {
    //    slog_fatal("SimulinkLineParser::build failed: null node pointer
    //    received");
    return ErrorCode::SLX_ENULLPTR;
  }
  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkLine> SimulinkLineParser::getOutputData() const {
  return ptr_;
}

ErrorCode SimulinkLineParser::parse() { return ErrorCode::SLX_OK; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
