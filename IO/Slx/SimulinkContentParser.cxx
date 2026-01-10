#include "SimulinkContentParser.h"
#include "LibXML2.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkContentParser::SimulinkContentParser() {
  ptr_ = std::make_shared<SimulinkContent>();
}

ErrorCode SimulinkContentParser::setInputData(const File fs) {
  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkContent> SimulinkContentParser::getDataObject() const {
  return ptr_;
}

ErrorCode SimulinkContentParser::parse() { return ErrorCode::SLX_OK; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END


