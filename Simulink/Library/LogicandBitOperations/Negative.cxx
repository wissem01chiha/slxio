#include "Negative.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Negative::Negative() {}

Negative::~Negative() {}

const std::string& Negative::GetRelop() const
{
    return m_Relop;
}

void Negative::SetRelop(const std::string& value)
{
    m_Relop = value;
}

const std::string& Negative::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Negative::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Negative::GetZerocross() const
{
    return m_Zerocross;
}

void Negative::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
