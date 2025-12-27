#include "SimulinkLineParser.h"
#include <slog.h>

namespace slxio {

SimulinkLineParser::SimulinkLineParser() {
  this->p_ = std::make_unique<SimulinkLine>();
}

SimulinkErrorType SimulinkLineParser::build(xmlNodePtr nodePtr) {

  if (nodePtr == nullptr) {
    slog_fatal("SimulinkLineParser::build failed: null node pointer received");
    return SimulinkErrorType::SLX_ENULLPTR;
  }
  return SimulinkErrorType::SLX_OK;
}

std::shared_ptr<SimulinkLine> SimulinkLineParser::get() {
  return std::shared_ptr<SimulinkLine>(std::move(p_));
}

}; // namespace slxio