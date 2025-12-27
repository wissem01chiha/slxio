#include "SimulinkModelParser.h"

namespace slxio {

SimulinkModelParser::SimulinkModelParser() {
  this->p_ = std::make_unique<SimulinkModel>();
}

SimulinkModelParser::SimulinkModelParser(SimulinkFile *File) {
  this->File_ = std::make_shared<SimulinkFile>(*File);
  this->p_ = std::make_unique<SimulinkModel>();
}

SimulinkErrorType SimulinkModelParser::build() { return SimulinkErrorType(); }

std::shared_ptr<SimulinkModel> SimulinkModelParser::get() {
  return std::shared_ptr<SimulinkModel>(std::move(p_));
}

}; // namespace slxio