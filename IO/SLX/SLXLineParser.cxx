#include "SimulinkLineBuilder.h"
#include <slog.h>

namespace slxio {

SimulinkLineBuilder::SimulinkLineBuilder() {
  this->p_ = std::make_unique<SimulinkLine>();
}

SimulinkErrorType SimulinkLineBuilder::build(xmlNodePtr nodePtr) {

  if (nodePtr == nullptr) {
    slog_fatal("SimulinkLineBuilder::build failed: null node pointer received");
    return SimulinkErrorType::SLX_ERR_NULL_PTR;
  }
  return SimulinkErrorType::SLX_OK;
}

std::shared_ptr<SimulinkLine> SimulinkLineBuilder::get() {
  return std::shared_ptr<SimulinkLine>(std::move(p_));
}

}; // namespace slxio