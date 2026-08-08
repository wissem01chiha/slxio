#include "BitClear.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

BitClear::BitClear() {}

Float32 BitClear::GetBitPosition() const
{
  return BitPosition;
}

void BitClear::SetBitPosition(Float32 value)
{
  BitPosition = value;
}

BitClear::~BitClear() {}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
