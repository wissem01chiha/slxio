#include "SaturationDynamic.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SaturationDynamic::SaturationDynamic() {}

SaturationDynamic::~SaturationDynamic() {}

const std::string& SaturationDynamic::GetOutmin() const
{
    return m_Outmin;
}

void SaturationDynamic::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& SaturationDynamic::GetOutmax() const
{
    return m_Outmax;
}

void SaturationDynamic::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& SaturationDynamic::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void SaturationDynamic::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& SaturationDynamic::GetLockscale() const
{
    return m_Lockscale;
}

void SaturationDynamic::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& SaturationDynamic::GetRndmeth() const
{
    return m_Rndmeth;
}

void SaturationDynamic::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& SaturationDynamic::GetDosatur() const
{
    return m_Dosatur;
}

void SaturationDynamic::SetDosatur(const std::string& value)
{
    m_Dosatur = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
