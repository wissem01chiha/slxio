#include "SimulinkPort.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkPort::SimulinkPort() {}

SimulinkPort::SimulinkPort(const SimulinkPort &other) {}

SimulinkPort::SimulinkPort(std::shared_ptr<SimulinkBlock> block,
                           SimulinkPortType pType) {}

SimulinkPortType SimulinkPort::getPortType() { return type; }

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

uint32 SimulinkPort::getID() const { return 1; }

bool SimulinkPort::contains(uint32 id) const { return true; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END