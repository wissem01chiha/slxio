#include "SimulinkPort.h"
#include "Logger.h"
#include "SimulinkBlock.h"
#include "SimulinkLine.h"
#include <sstream>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkPort::SimulinkPort(
  std::shared_ptr<SimulinkBlock> PortBlock, SimulinkPortType pType)
  : PortType(pType)
  , PortBlock(PortBlock)
  , logger(Logger::GetInstance())
{
}

SimulinkPort::SimulinkPort()
  : logger(Logger::GetInstance())
{
}

SimulinkPort* SimulinkPort::New() const
{
  return new SimulinkPort();
}

SimulinkPortType SimulinkPort::GetPortType()
{
  return PortType;
}

SimulinkElementType SimulinkPort::GetType() const
{
  return SimulinkElementType(SimulinkElementType::Type::Port);
}

std::string SimulinkPort::ToString() const
{
  std::ostringstream oss;
  oss << "SimulinkPort[ID=" << BlockId;
  oss << ", Type=  " << PortType.ToString();
  if (PortBlock)
  {
    oss << ", Block=" << PortBlock->ToString();
  }
  oss << "]";
  return oss.str();
}

SimulinkBlockType SimulinkPort::GetBlockType()
{
  return SimulinkBlockType();
}

// SResult SimulinkPort::RemoveElement(std::shared_ptr<SimulinkElementBase> element)
// {
//   if (element == nullptr)
//   {
//     // l.log(Logger::V_WARNING,
//     //   "SimulinkPort::Cannot remove a null Simulink element.");
//     return E_PARAMETER_NULL_PTR;
//   }

//   if (!(element->GetType().isA(SimulinkElementType::Line)))
//   {
//     // l.log(Logger::V_ERROR,
//     //   "Cannot remove a Simulink element of a different "
//     //"PortType than Line from a SimulinkPort");
//     return E_OK;
//   }

//   if (element->GetType().isA(SimulinkElementType::Line))
//   {

//     std::shared_ptr<SimulinkLine> linePtr =
//     std::dynamic_pointer_cast<SimulinkLine>(element);

//     // portLines.push_back(linePtr);
//     // l.log(Logger::VERBOSITY_0, "Removed line from port");
//   }
//   return E_OK;
// }

// SResult SimulinkPort::AddElement(std::shared_ptr<SimulinkElementBase> element)
// {
//   if (element == nullptr)
//   {
//     // l.log(
//     //   Logger::V_WARNING, "SimulinkPort::Cannot add a null Simulink
//     //   element.");
//     return E_PARAMETER_NULL_PTR;
//   }

//   if (!(element->GetType().isA(SimulinkElementType::Line)))
//   {
//     // l.log(Logger::V_ERROR,
//     //  "Cannot add a Simulink element of a different "
//     //  "PortType than Line to a SimulinkPort");
//     return E_OK;
//   }
//   if (element->GetType().isA(SimulinkElementType::Line))
//   {

//     std::shared_ptr<SimulinkLine> linePtr =
//     std::dynamic_pointer_cast<SimulinkLine>(element);

//     lines.push_back(linePtr);
//     // l.log(Logger::VERBOSITY_0, "Added line to port");
//   }
//   return E_OK;
// }

IdType SimulinkPort::GetId() const
{
  return BlockId;
}

std::shared_ptr<SimulinkElementBase> SimulinkPort::operator[](IdType index)
{
  return std::shared_ptr<SimulinkElementBase>();
}

UInt32 SimulinkPort::Size() const
{
  return UInt32();
}

bool SimulinkPort::Empty() const
{
  return false;
}

void SimulinkPort::Clear() {}

SResult SimulinkPort::Insert(const std::shared_ptr<SimulinkElementBase>& element)
{
  return SResult();
}

SResult SimulinkPort::Erase(const IdType& id)
{
  return SResult();
}

SResult SimulinkPort::Erase(const std::shared_ptr<SimulinkElementBase>& element)
{
  return SResult();
}

bool SimulinkPort::Contains(const IdType& id) const
{
  return BlockId == id;
}

std::string SimulinkPort::GetName()
{
  return std::string();
}

std::string SimulinkPort::GetDimension()
{
  return std::string();
}

std::shared_ptr<SimulinkBlock> SimulinkPort::GetBlockParent()
{
  return std::shared_ptr<SimulinkBlock>();
}

std::shared_ptr<SimulinkParameterBase> SimulinkPort::GetParameter(std::string name)
{
  return std::shared_ptr<SimulinkParameterBase>();
}

SResult SimulinkPort::SetParameter(
  std::string name, std::shared_ptr<SimulinkParameterBase> parameter)
{
  return SResult();
}

SResult SimulinkPort::AddParameter(std::shared_ptr<SimulinkParameterBase> parameter)
{
  return SResult();
}

std::shared_ptr<SimulinkBlock> SimulinkPort::GetBlock()
{
  return PortBlock;
}

std::vector<std::shared_ptr<SimulinkLine>> SimulinkPort::GetLines()
{
  return PortLines;
}

std::shared_ptr<SimulinkLine> SimulinkPort::GetLine(const IdType& lineId)
{
  for (const auto& line : PortLines)
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
