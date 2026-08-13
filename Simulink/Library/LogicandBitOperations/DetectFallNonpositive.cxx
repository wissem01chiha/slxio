#include "DetectFallNonpositive.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DetectFallNonpositive::DetectFallNonpositive() {}

DetectFallNonpositive::~DetectFallNonpositive() {}

const std::string& DetectFallNonpositive::GetVinit() const
{
    return m_Vinit;
}

void DetectFallNonpositive::SetVinit(const std::string& value)
{
    m_Vinit = value;
}

const std::string& DetectFallNonpositive::GetInputprocessing() const
{
    return m_Inputprocessing;
}

void DetectFallNonpositive::SetInputprocessing(const std::string& value)
{
    m_Inputprocessing = value;
}

const std::string& DetectFallNonpositive::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DetectFallNonpositive::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
