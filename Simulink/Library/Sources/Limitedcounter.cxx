#include "Limitedcounter.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Limitedcounter::Limitedcounter() {}

Limitedcounter::~Limitedcounter() {}

const std::string& Limitedcounter::GetUplimit() const
{
    return m_Uplimit;
}

void Limitedcounter::SetUplimit(const std::string& value)
{
    m_Uplimit = value;
}

const std::string& Limitedcounter::GetTsamp() const
{
    return m_Tsamp;
}

void Limitedcounter::SetTsamp(const std::string& value)
{
    m_Tsamp = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
