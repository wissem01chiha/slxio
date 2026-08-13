#include "BitSet.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

BitSet::BitSet() {}

BitSet::~BitSet() {}

const std::string& BitSet::GetIbit() const
{
    return m_Ibit;
}

void BitSet::SetIbit(const std::string& value)
{
    m_Ibit = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
