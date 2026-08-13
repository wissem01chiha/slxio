#include "Vector.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Vector::Vector() {}

Vector::~Vector() {}

const std::string& Vector::GetValue() const
{
    return m_Value;
}

void Vector::SetValue(const std::string& value)
{
    m_Value = value;
}

const std::string& Vector::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void Vector::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& Vector::GetOutmin() const
{
    return m_Outmin;
}

void Vector::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Vector::GetOutmax() const
{
    return m_Outmax;
}

void Vector::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Vector::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Vector::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Vector::GetLockscale() const
{
    return m_Lockscale;
}

void Vector::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Vector::GetSampletime() const
{
    return m_Sampletime;
}

void Vector::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Vector::GetFrameperiod() const
{
    return m_Frameperiod;
}

void Vector::SetFrameperiod(const std::string& value)
{
    m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
