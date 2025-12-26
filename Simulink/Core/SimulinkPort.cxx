#include "SimulinkPort.h"
#include "Logger.h"
#include "SimulinkLine.h"
#include <sstream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkPort::SimulinkPort(const SimulinkPort &other) {
  this->portBlockId = other.portBlockId;
  this->portBlock = other.portBlock;
  this->portType = other.portType;
}

SimulinkPort::SimulinkPort(std::shared_ptr<SimulinkBlock> block,
                           SimulinkPortType pType)
    : portType(pType), portBlock(block) {}

SimulinkPortType SimulinkPort::getPortType() { return portType; }

SimulinkElementType SimulinkPort::getType() const {
  return SimulinkElementType::Port;
}

std::string SimulinkPort::toString() const {
  std::ostringstream oss;
  oss << "SimulinkPort[ID=" << portBlockId;
  oss << ", Type=  " << portType.toString();
  if (portBlock) {
    oss << ", Block=" << portBlock->toString();
  }
  oss << "]";
  return oss.str();
}

ErrorCode SimulinkPort::remove(std::shared_ptr<SimulinkElementBase> element) {

  Logger &l = Logger::getInstance();
  if (element == nullptr) {
    l.log(Logger::V_WARNING,
          "SimulinkPort::Cannot remove a null Simulink element.");
    return ErrorCode::SLX_ENULLPTR;
  }

  if (!(element->getType().isA(SimulinkElementType::Line))) {
    l.log(Logger::V_ERROR, "Cannot remove a Simulink element of a different "
                           "type than Line from a SimulinkPort");
    return ErrorCode::SLX_ETYPEMISMATCH;
  }

  if (element->getType() == SimulinkElementType::Line) {

    std::shared_ptr<SimulinkLine> linePtr =
        std::dynamic_pointer_cast<SimulinkLine>(element);

    // this->portLines.push_back(linePtr);
    l.log(Logger::VERBOSITY_0, "Removed line from port");
  }
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkPort::add(std::shared_ptr<SimulinkElementBase> element) {

  Logger &l = Logger::getInstance();
  if (element == nullptr) {
    l.log(Logger::V_WARNING,
          "SimulinkPort::Cannot add a null Simulink element.");
    return ErrorCode::SLX_ENULLPTR;
  }

  if (!(element->getType().isA(SimulinkElementType::Line))) {
    l.log(Logger::V_ERROR, "Cannot add a Simulink element of a different "
                           "type than Line to a SimulinkPort");
    return ErrorCode::SLX_ETYPEMISMATCH;
  }
  if (element->getType() == SimulinkElementType::Line) {

    std::shared_ptr<SimulinkLine> linePtr =
        std::dynamic_pointer_cast<SimulinkLine>(element);

    this->portLines.push_back(linePtr);
    l.log(Logger::VERBOSITY_0, "Added line to port");
  }
  return ErrorCode::SLX_OK;
}

Index SimulinkPort::getID() const { return portBlockId; }

bool SimulinkPort::contains(const Index &id) const { return portBlockId == id; }

std::shared_ptr<SimulinkBlock> SimulinkPort::getBlock() { return portBlock; }

std::vector<std::shared_ptr<SimulinkLine>> SimulinkPort::getLines() {
  return portLines;
}

std::shared_ptr<SimulinkLine> SimulinkPort::getLine(const Index &lineId_) {
  return std::shared_ptr<SimulinkLine>();
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END