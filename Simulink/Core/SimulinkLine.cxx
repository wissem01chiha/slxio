#include "SimulinkLine.h"
#include "Logger.h"

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

SimulinkLine::SimulinkLine(SimulinkPort sourcePort_, SimulinkPort destPort_) {

  sourcePort = std::make_shared<SimulinkPort>(sourcePort_);
  destPort = std::make_shared<SimulinkPort>(destPort_);
}

SimulinkElementType SimulinkLine::getType() const {
  return SimulinkElementType::Line;
}

ErrorCode SimulinkLine::remove(std::shared_ptr<SimulinkElementBase> element) {

  if (element == nullptr) {
    Logger::getInstance().log(Logger::V_WARNING,
                              "Cannot remove a null Simulink element.");
    return ErrorCode::SLX_ERR_NULL_PTR;
  }

  if (sourcePort != nullptr) {
    sourcePort->remove(std::make_shared<SimulinkLine>(*this));
    sourcePort = nullptr;
  }

  if (destPort != nullptr) {
    destPort->remove(std::make_shared<SimulinkLine>(*this));
    destPort = nullptr;
  }
  return ErrorCode::Ok;
}

ErrorCode SimulinkLine::add(std::shared_ptr<SimulinkElementBase> element) {

  if (element == nullptr) {
    Logger::getInstance().log(Logger::V_WARNING,
                              "Cannot add a null Simulink element.");
    return ErrorCode::SLX_ERR_NULL_PTR;
  }

  if (sourcePort != nullptr) {
    sourcePort->add(std::make_shared<SimulinkLine>(*this));
    sourcePort = nullptr;
  }

  if (destPort != nullptr) {
    destPort->add(std::make_shared<SimulinkLine>(*this));
    destPort = nullptr;
  }
  return ErrorCode::Ok;
}

Index SimulinkLine::getID() const { return lineId; }

bool SimulinkLine::contains(const Index &id) const { return true; }

std::string SimulinkLine::toString() const {
  return sourcePort->toString() + " -> " + destPort->toString();
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END