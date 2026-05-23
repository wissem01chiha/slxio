#include "Subsystem.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

Subsystem::Subsystem() {}

bool Subsystem::GetEnabled() const
{
  return Enabled;
}

void Subsystem::SetEnabled(bool value)
{
  Enabled = value;
}

Subsystem::~Subsystem() {}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
