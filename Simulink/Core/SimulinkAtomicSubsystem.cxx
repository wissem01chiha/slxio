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

bool SimulinkAtomicSubsystem::Contains(const IdType& id) const
{
  return false;
}

SLXIO_ABI_NAMESPACE_END

};