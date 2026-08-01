#include "Gain.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Gain::Gain() {}

Float32 Gain::GetGainValue() const
{
  return GainValue;
}

void Gain::SetGainValue(Float32 value)
{
  GainValue = value;
}

Gain::~Gain() {}

SLXIO_ABI_NAMESPACE_END
};
