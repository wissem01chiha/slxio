#include "SimulinkLine.h"
#include "Logger.h"
#include <sstream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkLine::SimulinkLine()
  : destPort(nullptr)
  , sourcePort(nullptr)
{
}

SimulinkLine::SimulinkLine(const SimulinkLine& other)
{
  this->destPort = other.destPort;
  this->sourcePort = other.sourcePort;
}

SimulinkLine::SimulinkLine(
  std::shared_ptr<SimulinkPort> pOut, std::shared_ptr<SimulinkPort> pIn)
  : destPort(pIn)
  , sourcePort(pOut)
{
}

SimulinkLine::SimulinkLine(SimulinkPort sourcePort_, SimulinkPort destPort_)
{

  sourcePort = std::make_shared<SimulinkPort>(sourcePort_);
  destPort = std::make_shared<SimulinkPort>(destPort_);
}

SimulinkElementType SimulinkLine::getType() const
{
  return SimulinkElementType::Line;
}

ErrorCode SimulinkLine::remove(std::shared_ptr<SimulinkElementBase> element)
{

  if (element == nullptr)
  {
    Logger::getInstance().log(
      Logger::V_WARNING, "Cannot remove a null Simulink element.");
    return ErrorCode::SLX_ENULLPTR;
  }

  if (sourcePort != nullptr)
  {
    sourcePort->remove(std::make_shared<SimulinkLine>(*this));
    sourcePort = nullptr;
  }

  if (destPort != nullptr)
  {
    destPort->remove(std::make_shared<SimulinkLine>(*this));
    destPort = nullptr;
  }
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkLine::add(std::shared_ptr<SimulinkElementBase> element)
{

  if (element == nullptr)
  {
    Logger::getInstance().log(
      Logger::V_WARNING, "Cannot add a null Simulink element.");
    return ErrorCode::SLX_ENULLPTR;
  }

  if (sourcePort != nullptr)
  {
    sourcePort->add(std::make_shared<SimulinkLine>(*this));
    sourcePort = nullptr;
  }

  if (destPort != nullptr)
  {
    destPort->add(std::make_shared<SimulinkLine>(*this));
    destPort = nullptr;
  }
  return ErrorCode::SLX_OK;
}

Index SimulinkLine::getID() const
{
  return lineId;
}

bool SimulinkLine::contains(const Index& id) const
{
  return lineId == id;
}

bool SimulinkLine::isConnected()
{
  return (sourcePort != nullptr && destPort != nullptr);
}

std::string SimulinkLine::toString() const
{

  std::ostringstream oss;
  oss << "SimulinkLine[ID=" << lineId;
  oss << ", Source=  " << sourcePort->toString();
  oss << ", Destination=  " << destPort->toString();
  oss << "]";
  return oss.str();
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END