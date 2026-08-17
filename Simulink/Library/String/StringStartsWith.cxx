#include "StringStartsWith.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

StringStartsWith::StringStartsWith() {}

StringStartsWith::~StringStartsWith() {}

const std::string& StringStartsWith::GetCasesensitive() const
{
    return m_Casesensitive;
}

void StringStartsWith::SetCasesensitive(const std::string& value)
{
    m_Casesensitive = value;
}

const std::string& StringStartsWith::GetFunction() const { return m_Function; }

void StringStartsWith::SetFunction(const std::string& value)
{
    m_Function = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
