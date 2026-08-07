#include "SimulinkEnabledSubsystem.h"
#include "ErrorCode.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkEnabledSubsystem *SimulinkEnabledSubsystem::New() const {
  return nullptr;
}

UInt32 SimulinkEnabledSubsystem::Size() const { return UInt32(); }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio