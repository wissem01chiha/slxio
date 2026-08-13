#include "StringCount.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

StringCount::StringCount() {}

StringCount::~StringCount() {}

const std::string& StringCount::GetCasesensitive() const
{
    return m_Casesensitive;
}

void StringCount::SetCasesensitive(const std::string& value)
{
    m_Casesensitive = value;
}

const std::string& StringCount::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void StringCount::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
