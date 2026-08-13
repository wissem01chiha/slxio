#include "StringConstant.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

StringConstant::StringConstant() {}

StringConstant::~StringConstant() {}

const std::string& StringConstant::GetString() const
{
    return m_String;
}

void StringConstant::SetString(const std::string& value)
{
    m_String = value;
}

const std::string& StringConstant::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void StringConstant::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
