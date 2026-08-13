#include "Point25.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Point25::Point25() {}

Point25::~Point25() {}

const std::string& Point25::GetValue() const
{
    return m_Value;
}

void Point25::SetValue(const std::string& value)
{
    m_Value = value;
}

const std::string& Point25::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void Point25::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& Point25::GetOutmin() const
{
    return m_Outmin;
}

void Point25::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Point25::GetOutmax() const
{
    return m_Outmax;
}

void Point25::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Point25::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Point25::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Point25::GetLockscale() const
{
    return m_Lockscale;
}

void Point25::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Point25::GetSampletime() const
{
    return m_Sampletime;
}

void Point25::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Point25::GetFrameperiod() const
{
    return m_Frameperiod;
}

void Point25::SetFrameperiod(const std::string& value)
{
    m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
