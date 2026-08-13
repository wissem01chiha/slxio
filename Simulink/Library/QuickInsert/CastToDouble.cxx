#include "CastToDouble.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

CastToDouble::CastToDouble() {}

CastToDouble::~CastToDouble() {}

const std::string& CastToDouble::GetOutmin() const
{
    return m_Outmin;
}

void CastToDouble::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& CastToDouble::GetOutmax() const
{
    return m_Outmax;
}

void CastToDouble::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& CastToDouble::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void CastToDouble::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& CastToDouble::GetLockscale() const
{
    return m_Lockscale;
}

void CastToDouble::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& CastToDouble::GetConvertrealworld() const
{
    return m_Convertrealworld;
}

void CastToDouble::SetConvertrealworld(const std::string& value)
{
    m_Convertrealworld = value;
}

const std::string& CastToDouble::GetRndmeth() const
{
    return m_Rndmeth;
}

void CastToDouble::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& CastToDouble::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void CastToDouble::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& CastToDouble::GetSampletime() const
{
    return m_Sampletime;
}

void CastToDouble::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
