#include "SimulinkLine.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkLine::SimulinkLine() {}

SimulinkLine::SimulinkLine(const SimulinkLine &other) {
  this->destPort = other.destPort;
  this->sourcePort = other.sourcePort;
}

SimulinkLine::SimulinkLine(std::shared_ptr<SimulinkPort> pOut,
                           std::shared_ptr<SimulinkPort> pIn)
    : destPort(pIn), sourcePort(pOut) {}

SimulinkLine::SimulinkLine(SimulinkPort sourcePort, SimulinkPort destPort) {

  this->sourcePort = std::make_shared<SimulinkPort>(sourcePort);
  this->sourcePort->add(std::make_shared<SimulinkLine>(*this));

  this->destPort = std::make_shared<SimulinkPort>(destPort);
  this->destPort->add(std::make_shared<SimulinkLine>(*this));
}

SimulinkElementType SimulinkLine::getType() const {
  return SimulinkElementType::Line;
}

SimulinkErrorType
SimulinkLine::remove(std::shared_ptr<SimulinkElementBase> element) {

  if (element == nullptr) {
    slog_warn("Cannot remove a null Simulink element.");
    return SimulinkErrorType::SLX_ERR_NULL_PTR;
  }

  if (sourcePort != nullptr) {
    sourcePort->remove(std::make_shared<SimulinkLine>(*this));
    sourcePort = nullptr;
  }

  if (destPort != nullptr) {
    destPort->remove(std::make_shared<SimulinkLine>(*this));
    destPort = nullptr;
  }
  return SimulinkErrorType::SLX_OK;
}

SimulinkErrorType
SimulinkLine::add(std::shared_ptr<SimulinkElementBase> element) {

  if (element == nullptr) {
    slog_warn("Cannot add a null Simulink element.");
    return SimulinkErrorType::SLX_ERR_NULL_PTR;
  }

  if (sourcePort != nullptr) {
    sourcePort->add(std::make_shared<SimulinkLine>(*this));
    sourcePort = nullptr;
  }

  if (destPort != nullptr) {
    destPort->add(std::make_shared<SimulinkLine>(*this));
    destPort = nullptr;
  }
  return SimulinkErrorType::SLX_OK;
}

uint32 SimulinkLine::getID() const { return lineId; }

bool SimulinkLine::contains(uint32 id) const { return bool(); }

std::string SimulinkLine::toString() const {
  return sourcePort->toString() + " -> " + destPort->toString();
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END