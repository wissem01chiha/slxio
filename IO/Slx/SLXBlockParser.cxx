#include "SimulinkBlockBuilder.h"
#include <slog.h>

namespace slxio {

SimulinkBlockBuilder::SimulinkBlockBuilder() {
  this->p_ = std::make_unique<SimulinkBlock>();
}

SimulinkErrorType SimulinkBlockBuilder::build(xmlNodePtr nodePtr) {

  if (nodePtr == nullptr) {
    slog_fatal(
        "SimulinkBlockBuilder::build failed: null node pointer received");
    return SimulinkErrorType::SLX_ENULLPTR;
  }
  for (xmlAttrPtr attr = nodePtr->properties; attr; attr = attr->next) {
  }
  return SimulinkErrorType::SLX_OK;
}

std::shared_ptr<SimulinkBlock> SimulinkBlockBuilder::get() {
  return std::shared_ptr<SimulinkBlock>(std::move(p_));
}
}; // namespace slxio