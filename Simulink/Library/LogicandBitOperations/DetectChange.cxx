#include "DetectChange.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DetectChange::DetectChange() {}

DetectChange::~DetectChange() {}

const std::string& DetectChange::GetVinit() const
{
    return m_Vinit;
}

void DetectChange::SetVinit(const std::string& value)
{
    m_Vinit = value;
}

const std::string& DetectChange::GetInputprocessing() const
{
    return m_Inputprocessing;
}

void DetectChange::SetInputprocessing(const std::string& value)
{
    m_Inputprocessing = value;
}

const std::string& DetectChange::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DetectChange::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
