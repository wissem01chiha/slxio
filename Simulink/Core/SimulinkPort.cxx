#include "SimulinkPort.h"
#include "SimulinkLine.h"
#include <sstream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkPort::SimulinkPort(const SimulinkPort& other)
  : l(Logger::getInstance())
{
  this->blockId = other.blockId;
  this->block = other.block;
  this->type = other.type;
}

SimulinkPort::SimulinkPort(
  std::shared_ptr<SimulinkBlock> block, SimulinkPortType pType)
  : type(pType)
  , block(block)
  , l(Logger::getInstance())
{
}

SimulinkPortType SimulinkPort::getPortType()
{
  return type;
}

SimulinkElementType SimulinkPort::getType() const
{
  return SimulinkElementType(SimulinkElementType::Type::Port);
}

std::string SimulinkPort::toString() const
{
  std::ostringstream oss;
  oss << "SimulinkPort[ID=" << blockId;
  oss << ", Type=  " << type.toString();
  if (block)
  {
    oss << ", Block=" << block->toString();
  }
  oss << "]";
  return oss.str();
}

ErrorCode SimulinkPort::remove(std::shared_ptr<SimulinkElementBase> element)
{

  Logger& l = Logger::getInstance();
  if (element == nullptr)
  {
    l.log(Logger::V_WARNING,
      "SimulinkPort::Cannot remove a null Simulink element.");
    return ErrorCode::SLX_ENULLPTR;
  }

  if (!(element->getType().isA(SimulinkElementType::Line)))
  {
    l.log(Logger::V_ERROR,
      "Cannot remove a Simulink element of a different "
      "type than Line from a SimulinkPort");
    return ErrorCode::SLX_ETYPEMISMATCH;
  }

  if (element->getType().isA(SimulinkElementType::Line))
  {

    std::shared_ptr<SimulinkLine> linePtr =
      std::dynamic_pointer_cast<SimulinkLine>(element);

    // portLines.push_back(linePtr);
    l.log(Logger::VERBOSITY_0, "Removed line from port");
  }
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkPort::add(std::shared_ptr<SimulinkElementBase> element)
{
  if (element == nullptr)
  {
    l.log(
      Logger::V_WARNING, "SimulinkPort::Cannot add a null Simulink element.");
    return ErrorCode::SLX_ENULLPTR;
  }

  if (!(element->getType().isA(SimulinkElementType::Line)))
  {
    l.log(Logger::V_ERROR,
      "Cannot add a Simulink element of a different "
      "type than Line to a SimulinkPort");
    return ErrorCode::SLX_ETYPEMISMATCH;
  }
  if (element->getType().isA(SimulinkElementType::Line))
  {

    std::shared_ptr<SimulinkLine> linePtr =
      std::dynamic_pointer_cast<SimulinkLine>(element);

    lines.push_back(linePtr);
    l.log(Logger::VERBOSITY_0, "Added line to port");
  }
  return ErrorCode::SLX_OK;
}

Index SimulinkPort::getID() const
{
  return blockId;
}

bool SimulinkPort::contains(const Index& id) const
{
  return blockId == id;
}

std::shared_ptr<SimulinkBlock> SimulinkPort::getBlock()
{
  return block;
}

std::vector<std::shared_ptr<SimulinkLine>> SimulinkPort::getLines()
{
  return lines;
}

std::shared_ptr<SimulinkLine> SimulinkPort::getLine(const Index& lineId)
{
  for (const auto& line : lines)
  {
    if (line->getID() == lineId)
    {
      return line;
    }
  }
  return std::shared_ptr<SimulinkLine>();
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END