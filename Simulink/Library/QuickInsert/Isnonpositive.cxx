#include "Isnonpositive.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Isnonpositive::Isnonpositive() {}

Isnonpositive::~Isnonpositive() {}

const std::string& Isnonpositive::GetRelop() const
{
    return m_Relop;
}

void Isnonpositive::SetRelop(const std::string& value)
{
    m_Relop = value;
}

const std::string& Isnonpositive::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Isnonpositive::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Isnonpositive::GetZerocross() const
{
    return m_Zerocross;
}

void Isnonpositive::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
