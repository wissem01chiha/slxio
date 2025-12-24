#include "SimulinkPort.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkPort::SimulinkPort(const SimulinkPort &other) {
  this->portBlockId = other.portBlockId;
  this->portBlock = other.portBlock;
  this->portType = other.portType;
}

SimulinkPort::SimulinkPort(std::shared_ptr<SimulinkBlock> block,
                           SimulinkPortType pType) {}

SimulinkPortType SimulinkPort::getPortType() { return portType; }

SimulinkElementType SimulinkPort::getType() const {
  return SimulinkElementType::Port;
}

std::string SimulinkPort::toString() const {
  // return idx + "@" + blk.getId();
  return std::string("OK");
}

ErrorCode SimulinkPort::remove(std::shared_ptr<SimulinkElementBase> elment) {
  return ErrorCode::Ok;
}

ErrorCode SimulinkPort::add(std::shared_ptr<SimulinkElementBase> elment) {
  return ErrorCode::Ok;
}

bool SimulinkPort::isConnected() { return true; }

Index SimulinkPort::getID() const { return portBlockId; }

bool SimulinkPort::contains(const Index &id) const { return true; }

std::shared_ptr<SimulinkBlock> SimulinkPort::getBlock() { return portBlock; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END