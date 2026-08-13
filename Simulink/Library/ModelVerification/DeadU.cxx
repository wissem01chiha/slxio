#include "DeadU.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DeadU::DeadU() {}

DeadU::~DeadU() {}

const std::string& DeadU::GetValue() const
{
    return m_Value;
}

void DeadU::SetValue(const std::string& value)
{
    m_Value = value;
}

const std::string& DeadU::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void DeadU::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& DeadU::GetOutmin() const
{
    return m_Outmin;
}

void DeadU::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& DeadU::GetOutmax() const
{
    return m_Outmax;
}

void DeadU::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& DeadU::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DeadU::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& DeadU::GetLockscale() const
{
    return m_Lockscale;
}

void DeadU::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& DeadU::GetSampletime() const
{
    return m_Sampletime;
}

void DeadU::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& DeadU::GetFrameperiod() const
{
    return m_Frameperiod;
}

void DeadU::SetFrameperiod(const std::string& value)
{
    m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
