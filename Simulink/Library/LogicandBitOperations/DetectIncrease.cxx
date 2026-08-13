#include "DetectIncrease.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DetectIncrease::DetectIncrease() {}

DetectIncrease::~DetectIncrease() {}

const std::string& DetectIncrease::GetVinit() const
{
    return m_Vinit;
}

void DetectIncrease::SetVinit(const std::string& value)
{
    m_Vinit = value;
}

const std::string& DetectIncrease::GetInputprocessing() const
{
    return m_Inputprocessing;
}

void DetectIncrease::SetInputprocessing(const std::string& value)
{
    m_Inputprocessing = value;
}

const std::string& DetectIncrease::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DetectIncrease::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
