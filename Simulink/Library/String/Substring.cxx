#include "Substring.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Substring::Substring() {}

Substring::~Substring() {}

const std::string& Substring::GetInheritmaximumlength() const
{
    return m_Inheritmaximumlength;
}

void Substring::SetInheritmaximumlength(const std::string& value)
{
    m_Inheritmaximumlength = value;
}

const std::string& Substring::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Substring::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Substring::GetStringfromidxtoend() const
{
    return m_Stringfromidxtoend;
}

void Substring::SetStringfromidxtoend(const std::string& value)
{
    m_Stringfromidxtoend = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
