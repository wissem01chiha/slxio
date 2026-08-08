#include "SimulinkAtomicSubsystem.h"

#include "ErrorCode.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkAtomicSubsystem* SimulinkAtomicSubsystem::New() const
{
  return new SimulinkAtomicSubsystem();
}

SimulinkElementType SimulinkAtomicSubsystem::GetType() const
{
  return SimulinkElementType(SimulinkElementType::Type::Subsystem);
}

SId SimulinkAtomicSubsystem::GetId() const
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

HError SimulinkAtomicSubsystem::SetParameter(
  std::string name,
  std::shared_ptr<SimulinkParameterBase> parameter)
{
  return E_OK;
}

HError SimulinkAtomicSubsystem::AddParameter(
  std::shared_ptr<SimulinkParameterBase> parameter)
{
  return E_OK;
}

bool SimulinkAtomicSubsystem::Contains(const SId& id) const
{
  return false;
}

void SimulinkAtomicSubsystem::Clear() {}

HError SimulinkAtomicSubsystem::Insert(
  const std::shared_ptr<SimulinkElementBase>& element)
{
  return E_OK;
}

HError SimulinkAtomicSubsystem::Erase(const SId& id)
{
  return HError();
}

HError SimulinkAtomicSubsystem::Erase(
  const std::shared_ptr<SimulinkElementBase>& element)
{
  return HError();
}

std::shared_ptr<SimulinkElementBase> SimulinkAtomicSubsystem::at(SId index)
{
  return std::shared_ptr<SimulinkElementBase>();
}

SLXIO_ABI_NAMESPACE_END

}; // namespace slxio