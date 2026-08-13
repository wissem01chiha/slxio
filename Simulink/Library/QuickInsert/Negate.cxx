#include "Negate.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Negate::Negate() {}

Negate::~Negate() {}

const std::string& Negate::GetSampletime() const
{
    return m_Sampletime;
}

void Negate::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Negate::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Negate::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
