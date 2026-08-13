#include "Nonnegative.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Nonnegative::Nonnegative() {}

Nonnegative::~Nonnegative() {}

const std::string& Nonnegative::GetRelop() const
{
    return m_Relop;
}

void Nonnegative::SetRelop(const std::string& value)
{
    m_Relop = value;
}

const std::string& Nonnegative::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Nonnegative::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Nonnegative::GetZerocross() const
{
    return m_Zerocross;
}

void Nonnegative::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
