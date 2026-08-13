#include "HitCrossingProbe.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

HitCrossingProbe::HitCrossingProbe() {}

HitCrossingProbe::~HitCrossingProbe() {}

const std::string& HitCrossingProbe::GetHitcrossingoffset() const
{
    return m_Hitcrossingoffset;
}

void HitCrossingProbe::SetHitcrossingoffset(const std::string& value)
{
    m_Hitcrossingoffset = value;
}

const std::string& HitCrossingProbe::GetHitcrossingdirection() const
{
    return m_Hitcrossingdirection;
}

void HitCrossingProbe::SetHitcrossingdirection(const std::string& value)
{
    m_Hitcrossingdirection = value;
}

const std::string& HitCrossingProbe::GetShowoutputport() const
{
    return m_Showoutputport;
}

void HitCrossingProbe::SetShowoutputport(const std::string& value)
{
    m_Showoutputport = value;
}

const std::string& HitCrossingProbe::GetHitcrossingoutputtype() const
{
    return m_Hitcrossingoutputtype;
}

void HitCrossingProbe::SetHitcrossingoutputtype(const std::string& value)
{
    m_Hitcrossingoutputtype = value;
}

const std::string& HitCrossingProbe::GetZerocross() const
{
    return m_Zerocross;
}

void HitCrossingProbe::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& HitCrossingProbe::GetSampletime() const
{
    return m_Sampletime;
}

void HitCrossingProbe::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
