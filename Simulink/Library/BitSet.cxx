#include "BitSet.h"

namespace slxio
{
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
};
