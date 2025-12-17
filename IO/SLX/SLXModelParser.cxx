#include "SimulinkModelBuilder.h"

namespace slxio {

SimulinkModelBuilder::SimulinkModelBuilder() {
  this->p_ = std::make_unique<SimulinkModel>();
}

SimulinkModelBuilder::SimulinkModelBuilder(SimulinkFile *File) {
  this->File_ = std::make_shared<SimulinkFile>(*File);
  this->p_ = std::make_unique<SimulinkModel>();
}

SimulinkErrorType SimulinkModelBuilder::build() { return SimulinkErrorType(); }

std::shared_ptr<SimulinkModel> SimulinkModelBuilder::get() {
  return std::shared_ptr<SimulinkModel>(std::move(p_));
}

}; // namespace slxio