#include "DetectFallNegative.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

DetectFallNegative::DetectFallNegative() {}

DetectFallNegative::~DetectFallNegative() {}

const std::string& DetectFallNegative::GetVinit() const { return m_Vinit; }

void DetectFallNegative::SetVinit(const std::string& value) { m_Vinit = value; }

const std::string& DetectFallNegative::GetInputprocessing() const
{
    return m_Inputprocessing;
}

void DetectFallNegative::SetInputprocessing(const std::string& value)
{
    m_Inputprocessing = value;
}

const std::string& DetectFallNegative::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DetectFallNegative::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
