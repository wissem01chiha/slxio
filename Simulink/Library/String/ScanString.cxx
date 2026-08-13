#include "ScanString.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ScanString::ScanString() {}

ScanString::~ScanString() {}

const std::string& ScanString::GetFormat() const
{
    return m_Format;
}

void ScanString::SetFormat(const std::string& value)
{
    m_Format = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
