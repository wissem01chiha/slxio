#include "BitClear.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

BitClear::BitClear() {}

BitClear::~BitClear() {}

const std::string& BitClear::GetIbit() const
{
  return m_Ibit;
}

void BitClear::SetIbit(const std::string& value)
{
  m_Ibit = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
