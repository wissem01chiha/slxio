#include "Tol.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Tol::Tol() {}

Tol::~Tol() {}

const std::string& Tol::GetValue() const
{
    return m_Value;
}

void Tol::SetValue(const std::string& value)
{
    m_Value = value;
}

const std::string& Tol::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void Tol::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& Tol::GetOutmin() const
{
    return m_Outmin;
}

void Tol::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Tol::GetOutmax() const
{
    return m_Outmax;
}

void Tol::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Tol::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Tol::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Tol::GetLockscale() const
{
    return m_Lockscale;
}

void Tol::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Tol::GetSampletime() const
{
    return m_Sampletime;
}

void Tol::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Tol::GetFrameperiod() const
{
    return m_Frameperiod;
}

void Tol::SetFrameperiod(const std::string& value)
{
    m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
