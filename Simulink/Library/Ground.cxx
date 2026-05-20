#include "Ground.h"

SLXIO_NAMESPACE_BEGIN
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

Ground::~Ground()
{
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
