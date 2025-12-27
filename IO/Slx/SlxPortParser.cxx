#include "SLXPortParser.h"

SimulinkErrorType SimulinkPortParser::build(xmlNodePtr nodePtr) {
  return SimulinkErrorType::SLX_OK;
}

std::shared_ptr<SimulinkPort> SimulinkPortParser::get() {
  return std::shared_ptr<SimulinkPort>(std::move(p_));
}
