#include "Isnegative.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Isnegative::Isnegative() {}

Isnegative::~Isnegative() {}

const std::string& Isnegative::GetRelop() const { return m_Relop; }

void Isnegative::SetRelop(const std::string& value) { m_Relop = value; }

const std::string& Isnegative::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Isnegative::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Isnegative::GetZerocross() const { return m_Zerocross; }

void Isnegative::SetZerocross(const std::string& value) { m_Zerocross = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
