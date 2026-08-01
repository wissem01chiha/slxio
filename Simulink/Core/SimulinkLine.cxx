#include "SimulinkLine.h"
#include "ErrorCode.h"
#include "Logger.h"
#include "SimulinkParameter.h"
#include <sstream>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkLine* SimulinkLine::New() const
{
  return new SimulinkLine();
}

SimulinkLine::SimulinkLine(std::shared_ptr<SimulinkPort> pOut, std::shared_ptr<SimulinkPort> pIn)
  : DestPort(pIn)
  , SourcePort(pOut)
  , logger(Logger::GetInstance())
{
}

SimulinkLine::SimulinkLine(SimulinkPort sourcePort, SimulinkPort destPort)
  : logger(Logger::GetInstance())
{
}

std::shared_ptr<SimulinkElementBase> SimulinkLine::at(IdType index)
{
  return std::shared_ptr<SimulinkElementBase>();
}

std::shared_ptr<SimulinkElementBase> SimulinkLine::operator[](IdType index)
{
  return std::shared_ptr<SimulinkElementBase>();
}

UInt32 SimulinkLine::Size() const
{
  return UInt32();
}

bool SimulinkLine::Empty() const
{
  return false;
}

void SimulinkLine::Clear() {}

ReturnType SimulinkLine::Insert(const std::shared_ptr<SimulinkElementBase>& element)
{
  return ReturnType();
}

ReturnType SimulinkLine::Erase(const IdType& id)
{
  return ReturnType();
}

ReturnType SimulinkLine::Erase(const std::shared_ptr<SimulinkElementBase>& element)
{
  return ReturnType();
}

SimulinkElementType SimulinkLine::GetType() const
{
  return SimulinkElementType(SimulinkElementType::Type::Line);
}

// ReturnType SimulinkLine::RemoveElement(std::shared_ptr<SimulinkElementBase> element)
// {

//   if (element == nullptr)
//   {
//     // l.log(Logger::V_WARNING, "Cannot remove a null Simulink element.");
//     return E_PARAMETER_NULL_PTR;
//   }

//   if (SourcePort != nullptr)
//   {
//     SourcePort->RemoveElement(std::make_shared<SimulinkLine>(*this));
//     SourcePort = nullptr;
//   }

//   if (DestPort != nullptr)
//   {
//     DestPort->RemoveElement(std::make_shared<SimulinkLine>(*this));
//     DestPort = nullptr;
//   }
//   return E_OK;
// }

// ReturnType SimulinkLine::AddElement(std::shared_ptr<SimulinkElementBase> element)
// {

//   if (element == nullptr)
//   {
//     // l.log(Logger::V_WARNING, "Cannot add a null Simulink element.");
//     return E_PARAMETER_NULL_PTR;
//   }

//   if (SourcePort != nullptr)
//   {
//     SourcePort->AddElement(std::make_shared<SimulinkLine>(*this));
//     SourcePort = nullptr;
//   }

//   if (DestPort != nullptr)
//   {
//     DestPort->AddElement(std::make_shared<SimulinkLine>(*this));
//     DestPort = nullptr;
//   }
//   return E_OK;
// }

IdType SimulinkLine::GetId() const
{
  return LineId;
}

bool SimulinkLine::Contains(const IdType& Id) const
{
  return LineId == Id;
}

bool SimulinkLine::IsConnected()
{
  return (SourcePort != nullptr && DestPort != nullptr);
}

Logger& SimulinkLine::GetLogger()
{
  return logger;
}

std::string SimulinkLine::ToString() const
{

  std::ostringstream oss;
  oss << "SimulinkLine[ID=" << LineId;
  oss << ", Source=  " << SourcePort->ToString();
  oss << ", Destination=  " << DestPort->ToString();
  oss << "]";
  return oss.str();
}

std::string SimulinkLine::GetName()
{
  return std::string();
}

SLXIO_ABI_NAMESPACE_END
};
