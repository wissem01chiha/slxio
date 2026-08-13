#include "Positive.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Positive::Positive() {}

Positive::~Positive() {}

const std::string& Positive::GetRelop() const
{
    return m_Relop;
}

void Positive::SetRelop(const std::string& value)
{
    m_Relop = value;
}

const std::string& Positive::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Positive::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Positive::GetZerocross() const
{
    return m_Zerocross;
}

void Positive::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
