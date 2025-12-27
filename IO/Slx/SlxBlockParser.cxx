#include "SimulinkBlockParser.h"
#include <slog.h>

namespace slxio {

SimulinkBlockParser::SimulinkBlockParser() {
  this->p_ = std::make_unique<SimulinkBlock>();
}

SimulinkErrorType SimulinkBlockParser::build(xmlNodePtr nodePtr) {

  if (nodePtr == nullptr) {
    slog_fatal("SimulinkBlockParser::build failed: null node pointer received");
    return SimulinkErrorType::SLX_ENULLPTR;
  }
  for (xmlAttrPtr attr = nodePtr->properties; attr; attr = attr->next) {
  }
  return SimulinkErrorType::SLX_OK;
}

std::shared_ptr<SimulinkBlock> SimulinkBlockParser::get() {
  return std::shared_ptr<SimulinkBlock>(std::move(p_));
}
}; // namespace slxio