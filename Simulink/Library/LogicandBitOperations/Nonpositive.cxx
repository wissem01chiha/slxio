#include "Nonpositive.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Nonpositive::Nonpositive() {}

Nonpositive::~Nonpositive() {}

const std::string& Nonpositive::GetRelop() const
{
    return m_Relop;
}

void Nonpositive::SetRelop(const std::string& value)
{
    m_Relop = value;
}

const std::string& Nonpositive::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Nonpositive::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Nonpositive::GetZerocross() const
{
    return m_Zerocross;
}

void Nonpositive::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
