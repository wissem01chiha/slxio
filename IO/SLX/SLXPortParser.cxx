#include "SLXPortParser.h"

SimulinkErrorType SimulinkPortBuilder::build(xmlNodePtr nodePtr) {
  return SimulinkErrorType::SLX_OK;
}

std::shared_ptr<SimulinkPort> SimulinkPortBuilder::get() {
  return std::shared_ptr<SimulinkPort>(std::move(p_));
}
