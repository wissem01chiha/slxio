#include "ComposeString.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

ComposeString::ComposeString() {}

ComposeString::~ComposeString() {}

const std::string& ComposeString::GetFormat() const { return m_Format; }

void ComposeString::SetFormat(const std::string& value) { m_Format = value; }

const std::string& ComposeString::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void ComposeString::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
