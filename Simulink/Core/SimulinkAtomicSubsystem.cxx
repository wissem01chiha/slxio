#include "SimulinkAtomicSubsystem.h"
#include "ErrorCode.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkAtomicSubsystem* SimulinkAtomicSubsystem::New() const
{
  return new SimulinkAtomicSubsystem();
}

SimulinkElementType SimulinkAtomicSubsystem::GetType() const
{
  return SimulinkElementType(SimulinkElementType::Type::Subsystem);
}

IdType SimulinkAtomicSubsystem::GetId() const
{
  return 0;
}

std::string SimulinkAtomicSubsystem::ToString() const
{
  return std::string();
}

std::string SimulinkAtomicSubsystem::GetName()
{
  return std::string();
}

std::string SimulinkAtomicSubsystem::GetDimension()
{
  return std::string();
}

ReturnType SimulinkAtomicSubsystem::SetParameter(
  std::string name, std::shared_ptr<SimulinkParameterBase> parameter)
{
  return E_OK;
}

ReturnType SimulinkAtomicSubsystem::AddParameter(std::shared_ptr<SimulinkParameterBase> parameter)
{
  return E_OK;
}

bool SimulinkAtomicSubsystem::Contains(const IdType& id) const
{
  return false;
}

void SimulinkAtomicSubsystem::Clear() {}

ReturnType SimulinkAtomicSubsystem::Insert(const std::shared_ptr<SimulinkElementBase>& element)
{
  return E_OK;
}

ReturnType SimulinkAtomicSubsystem::Erase(const IdType& id)
{
  return ReturnType();
}

ReturnType SimulinkAtomicSubsystem::Erase(const std::shared_ptr<SimulinkElementBase>& element)
{
  return ReturnType();
}

std::shared_ptr<SimulinkElementBase> SimulinkAtomicSubsystem::at(IdType index)
{
  return std::shared_ptr<SimulinkElementBase>();
}

SLXIO_ABI_NAMESPACE_END

};