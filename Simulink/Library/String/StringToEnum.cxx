#include "StringToEnum.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

StringToEnum::StringToEnum() {}

StringToEnum::~StringToEnum() {}

const std::string& StringToEnum::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void StringToEnum::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
