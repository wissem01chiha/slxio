#include "Mux.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

Mux::Mux() {}

UInt32 Mux::GetNumInputs() const
{
  return NumInputs;
}

void Mux::SetNumInputs(UInt32 value)
{
  NumInputs = value;
}

Mux::~Mux()
{
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
