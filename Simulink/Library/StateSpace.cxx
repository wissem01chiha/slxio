#include "StateSpace.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

StateSpace::StateSpace() {}

Float32 StateSpace::GetStateValue() const { return StateValue; }

void StateSpace::SetStateValue(Float32 value) { StateValue = value; }

StateSpace::~StateSpace() {}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
