#include "StringEndsWith.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

StringEndsWith::StringEndsWith() {}

StringEndsWith::~StringEndsWith() {}

const std::string& StringEndsWith::GetCasesensitive() const
{
    return m_Casesensitive;
}

void StringEndsWith::SetCasesensitive(const std::string& value)
{
    m_Casesensitive = value;
}

const std::string& StringEndsWith::GetFunction() const { return m_Function; }

void StringEndsWith::SetFunction(const std::string& value)
{
    m_Function = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
