#include "DetectDecrease.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DetectDecrease::DetectDecrease() {}

DetectDecrease::~DetectDecrease() {}

const std::string& DetectDecrease::GetVinit() const
{
    return m_Vinit;
}

void DetectDecrease::SetVinit(const std::string& value)
{
    m_Vinit = value;
}

const std::string& DetectDecrease::GetInputprocessing() const
{
    return m_Inputprocessing;
}

void DetectDecrease::SetInputprocessing(const std::string& value)
{
    m_Inputprocessing = value;
}

const std::string& DetectDecrease::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DetectDecrease::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
