#include "Scope.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Scope::Scope() {}

UInt32 Scope::GetNumInputPorts() const
{
  return numInputPorts;
}

void Scope::SetNumInputPorts(UInt32 numPorts)
{
  numInputPorts = numPorts;
}

Scope::~Scope() {}

SLXIO_ABI_NAMESPACE_END
};
