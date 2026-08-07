#include "Subsystem.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Subsystem::Subsystem() {}

bool Subsystem::GetEnabled() const { return Enabled; }

void Subsystem::SetEnabled(bool value) { Enabled = value; }

Subsystem::~Subsystem() {}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
