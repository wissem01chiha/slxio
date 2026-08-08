#include "Ground.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Ground::Ground() {}

bool Ground::GetGrounded() const
{
  return Grounded;
}

void Ground::SetGrounded(bool value)
{
  Grounded = value;
}

Ground::~Ground() {}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
