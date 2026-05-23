#include "BitSet.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

BitSet::BitSet() {}

Float32 BitSet::GetBitPosition() const
{
  return BitPosition;
}

void BitSet::SetBitPosition(Float32 value)
{
  BitPosition = value;
}

BitSet::~BitSet() {}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
