#include "Nan.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Nan::Nan() {}

Nan::~Nan() {}

const std::string& Nan::GetValue() const
{
    return m_Value;
}

void Nan::SetValue(const std::string& value)
{
    m_Value = value;
}

const std::string& Nan::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void Nan::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& Nan::GetOutmin() const
{
    return m_Outmin;
}

void Nan::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Nan::GetOutmax() const
{
    return m_Outmax;
}

void Nan::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Nan::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Nan::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Nan::GetLockscale() const
{
    return m_Lockscale;
}

void Nan::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Nan::GetSampletime() const
{
    return m_Sampletime;
}

void Nan::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Nan::GetFrameperiod() const
{
    return m_Frameperiod;
}

void Nan::SetFrameperiod(const std::string& value)
{
    m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
