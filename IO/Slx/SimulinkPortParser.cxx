#include "SimulinkPortParser.h"
#include "Logger.h"
#include "SlxParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN


SimulinkErrorType SimulinkPortParser::build(xmlNodePtr nodePtr) {
  return SimulinkErrorType::SLX_OK;
}

std::shared_ptr<SimulinkPort> SimulinkPortParser::get() {
  return std::shared_ptr<SimulinkPort>(std::move(p_));
}


SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END