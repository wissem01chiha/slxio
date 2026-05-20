#include "StateSpace.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

StateSpace::StateSpace() {}

Float32 StateSpace::GetStateValue() const
{
  return StateValue;
}

void StateSpace::SetStateValue(Float32 value)
{
  StateValue = value;
}

StateSpace::~StateSpace()
{
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
