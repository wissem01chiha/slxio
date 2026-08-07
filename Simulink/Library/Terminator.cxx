#include "Terminator.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Terminator::Terminator() {}

bool Terminator::GetTerminated() const { return Terminated; }

void Terminator::SetTerminated(bool value) { Terminated = value; }

Terminator::~Terminator() {}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
