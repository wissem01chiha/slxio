#include "SimulinkLine.h"
#include <sstream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkLine::SimulinkLine()
  : destPort(nullptr)
  , sourcePort(nullptr)
  , l(Logger::getInstance())
{
}

SimulinkLine::SimulinkLine(const SimulinkLine& other)
  : l(Logger::getInstance())
{
  this->destPort = other.destPort;
  this->sourcePort = other.sourcePort;
}

SimulinkLine::SimulinkLine(
  std::shared_ptr<SimulinkPort> pOut, std::shared_ptr<SimulinkPort> pIn)
  : destPort(pIn)
  , sourcePort(pOut)
  , l(Logger::getInstance())
{
}

SimulinkLine::SimulinkLine(SimulinkPort sourcePort_, SimulinkPort destPort_)
  : l(Logger::getInstance())
{

  sourcePort = std::make_shared<SimulinkPort>(sourcePort_);
  destPort = std::make_shared<SimulinkPort>(destPort_);
}

SimulinkElementType SimulinkLine::getType() const
{
  return SimulinkElementType(SimulinkElementType::Type::Line);
}

ErrorCode SimulinkLine::remove(std::shared_ptr<SimulinkElementBase> element)
{

  if (element == nullptr)
  {
    l.log(Logger::V_WARNING, "Cannot remove a null Simulink element.");
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
    l.log(Logger::V_WARNING, "Cannot add a null Simulink element.");
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
  return id;
}

bool SimulinkLine::contains(const Index& id) const
{
  return this->id == id;
}

bool SimulinkLine::isConnected()
{
  return (sourcePort != nullptr && destPort != nullptr);
}

std::string SimulinkLine::toString() const
{

  std::ostringstream oss;
  oss << "SimulinkLine[ID=" << id;
  oss << ", Source=  " << sourcePort->toString();
  oss << ", Destination=  " << destPort->toString();
  oss << "]";
  return oss.str();
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END