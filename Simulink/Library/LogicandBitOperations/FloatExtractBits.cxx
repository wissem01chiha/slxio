#include "FloatExtractBits.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FloatExtractBits::FloatExtractBits() {}

FloatExtractBits::~FloatExtractBits() {}

const std::string& FloatExtractBits::GetOutputmode() const
{
    return m_Outputmode;
}

void FloatExtractBits::SetOutputmode(const std::string& value)
{
    m_Outputmode = value;
}

const std::string& FloatExtractBits::GetBitrange() const
{
    return m_Bitrange;
}

void FloatExtractBits::SetBitrange(const std::string& value)
{
    m_Bitrange = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
