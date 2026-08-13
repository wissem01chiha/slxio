#include "Ispositive.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Ispositive::Ispositive() {}

Ispositive::~Ispositive() {}

const std::string& Ispositive::GetRelop() const
{
    return m_Relop;
}

void Ispositive::SetRelop(const std::string& value)
{
    m_Relop = value;
}

const std::string& Ispositive::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Ispositive::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Ispositive::GetZerocross() const
{
    return m_Zerocross;
}

void Ispositive::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
