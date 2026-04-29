#include "SimulinkLine.h"
#include "ErrorTypes.h"
#include <sstream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkLine::SimulinkLine()
  : DestPort(nullptr)
  , SourcePort(nullptr)
  , logger(Logger::GetInstance())
{
}

SimulinkLine::SimulinkLine(const SimulinkLine& other)
  : logger(Logger::GetInstance())
{
  this->DestPort = other.DestPort;
  this->SourcePort = other.SourcePort;
}

SimulinkLine::SimulinkLine(
  std::shared_ptr<SimulinkPort> pOut, std::shared_ptr<SimulinkPort> pIn)
  : DestPort(pIn)
  , SourcePort(pOut)
  , logger(Logger::GetInstance())
{
}

SimulinkLine::SimulinkLine(SimulinkPort sourcePort, SimulinkPort destPort)
  :logger(Logger::GetInstance())
{

  SourcePort = std::make_shared<SimulinkPort>(sourcePort);
  DestPort = std::make_shared<SimulinkPort>(destPort);
}

SimulinkElementType SimulinkLine::GetElementType() const
{
  return SimulinkElementType(SimulinkElementType::Type::Line);
}

ReturnType SimulinkLine::RemoveElement(std::shared_ptr<SimulinkElementBase> element)
{

  if (element == nullptr)
  {
    //l.log(Logger::V_WARNING, "Cannot remove a null Simulink element.");
    return E_FUNC_PARAM_NULL_PTR;
  }

  if (SourcePort != nullptr)
  {
    SourcePort->RemoveElement(std::make_shared<SimulinkLine>(*this));
    SourcePort = nullptr;
  }

  if (DestPort != nullptr)
  {
    DestPort->RemoveElement(std::make_shared<SimulinkLine>(*this));
    DestPort = nullptr;
  }
  return E_OK;
}

ReturnType SimulinkLine::AddElement(std::shared_ptr<SimulinkElementBase> element)
{

  if (element == nullptr)
  {
    //l.log(Logger::V_WARNING, "Cannot add a null Simulink element.");
    return E_FUNC_PARAM_NULL_PTR;
  }

  if (SourcePort != nullptr)
  {
    SourcePort->AddElement(std::make_shared<SimulinkLine>(*this));
    SourcePort = nullptr;
  }

  if (DestPort != nullptr)
  {
    DestPort->AddElement(std::make_shared<SimulinkLine>(*this));
    DestPort = nullptr;
  }
  return E_OK;
}

IdType SimulinkLine::GetElementId() const
{
  return Id;
}

bool SimulinkLine::Contains(const IdType& Id) const
{
  return this->Id == Id;
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
  oss << "SimulinkLine[ID=" << Id;
  oss << ", Source=  " << SourcePort->ToString();
  oss << ", Destination=  " << DestPort->ToString();
  oss << "]";
  return oss.str();
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END