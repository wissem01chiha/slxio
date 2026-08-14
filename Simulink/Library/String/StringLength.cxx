#include "StringLength.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

StringLength::StringLength() {}

StringLength::~StringLength() {}

const std::string& StringLength::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void StringLength::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
