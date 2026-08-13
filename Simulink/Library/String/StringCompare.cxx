#include "StringCompare.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

StringCompare::StringCompare() {}

StringCompare::~StringCompare() {}

const std::string& StringCompare::GetCasesensitive() const
{
    return m_Casesensitive;
}

void StringCompare::SetCasesensitive(const std::string& value)
{
    m_Casesensitive = value;
}

const std::string& StringCompare::GetCompareoption() const
{
    return m_Compareoption;
}

void StringCompare::SetCompareoption(const std::string& value)
{
    m_Compareoption = value;
}

const std::string& StringCompare::GetNumberofcharacters() const
{
    return m_Numberofcharacters;
}

void StringCompare::SetNumberofcharacters(const std::string& value)
{
    m_Numberofcharacters = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
