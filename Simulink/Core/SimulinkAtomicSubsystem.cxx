#include "SimulinkAtomicSubsystem.h"
#include "ErrorCode.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkAtomicSubsystem* SimulinkAtomicSubsystem::New() const
{
  return new SimulinkAtomicSubsystem();
}

SimulinkElementType SimulinkAtomicSubsystem::GetElementType() const
{
  return SimulinkElementType(SimulinkElementType::Type::Subsystem);
}

IdType SimulinkAtomicSubsystem::GetElementId() const
{
  return 0;
}

std::string SimulinkAtomicSubsystem::ToString() const
{
  return std::string();
}

bool SimulinkAtomicSubsystem::Contains(const IdType& id) const
{
  return false;
}

void SimulinkAtomicSubsystem::Clear() {}

std::shared_ptr<SimulinkElementBase> SimulinkAtomicSubsystem::at(IdType index)
{
  return std::shared_ptr<SimulinkElementBase>();
}

SLXIO_ABI_NAMESPACE_END

};