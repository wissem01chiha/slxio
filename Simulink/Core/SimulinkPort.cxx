#include "SimulinkPort.h"
#include "SimulinkLine.h"
#include <sstream>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkPort::SimulinkPort(const SimulinkPort& other)
  : logger(Logger::GetInstance())
{
  this->blockId = other.blockId;
  this->block = other.block;
  this->type = other.type;
}

SimulinkPort::SimulinkPort(std::shared_ptr<SimulinkBlock> block, SimulinkPortType pType)
  : type(pType)
  , block(block)
  , logger(Logger::GetInstance())
{
}

SimulinkPortType SimulinkPort::getPortType()
{
  return type;
}

SimulinkElementType SimulinkPort::GetType() const
{
  return SimulinkElementType(SimulinkElementType::Type::Port);
}

std::string SimulinkPort::ToString() const
{
  std::ostringstream oss;
  oss << "SimulinkPort[ID=" << blockId;
  oss << ", Type=  " << type.ToString();
  if (block)
  {
    oss << ", Block=" << block->ToString();
  }
  oss << "]";
  return oss.str();
}

ReturnType SimulinkPort::RemoveElement(std::shared_ptr<SimulinkElementBase> element)
{
  if (element == nullptr)
  {
    // l.log(Logger::V_WARNING,
    //   "SimulinkPort::Cannot remove a null Simulink element.");
    return E_PARAMETER_NULL_PTR;
  }

  if (!(element->GetType().isA(SimulinkElementType::Line)))
  {
    // l.log(Logger::V_ERROR,
    //   "Cannot remove a Simulink element of a different "
    //"type than Line from a SimulinkPort");
    return E_OK;
  }

  if (element->GetType().isA(SimulinkElementType::Line))
  {

    std::shared_ptr<SimulinkLine> linePtr = std::dynamic_pointer_cast<SimulinkLine>(element);

    // portLines.push_back(linePtr);
    // l.log(Logger::VERBOSITY_0, "Removed line from port");
  }
  return E_OK;
}

ReturnType SimulinkPort::AddElement(std::shared_ptr<SimulinkElementBase> element)
{
  if (element == nullptr)
  {
    // l.log(
    //   Logger::V_WARNING, "SimulinkPort::Cannot add a null Simulink
    //   element.");
    return E_PARAMETER_NULL_PTR;
  }

  if (!(element->GetType().isA(SimulinkElementType::Line)))
  {
    // l.log(Logger::V_ERROR,
    //  "Cannot add a Simulink element of a different "
    //  "type than Line to a SimulinkPort");
    return E_OK;
  }
  if (element->GetType().isA(SimulinkElementType::Line))
  {

    std::shared_ptr<SimulinkLine> linePtr = std::dynamic_pointer_cast<SimulinkLine>(element);

    lines.push_back(linePtr);
    // l.log(Logger::VERBOSITY_0, "Added line to port");
  }
  return E_OK;
}

IdType SimulinkPort::GetId() const
{
  return blockId;
}

bool SimulinkPort::Contains(const IdType& id) const
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

std::shared_ptr<SimulinkLine> SimulinkPort::getLine(const IdType& lineId)
{
  for (const auto& line : lines)
  {
    if (line->GetId() == lineId)
    {
      return line;
    }
  }
  return std::shared_ptr<SimulinkLine>();
}

Logger& SimulinkPort::GetLogger()
{
  return logger;
}

SLXIO_ABI_NAMESPACE_END
};
