#include "Constant.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Constant::Constant() {}

Constant::~Constant() {}

const std::string& Constant::GetValue() const
{
  return m_Value;
}

void Constant::SetValue(const std::string& value)
{
  m_Value = value;
}

const std::string& Constant::GetVectorparams1d() const
{
  return m_Vectorparams1d;
}

void Constant::SetVectorparams1d(const std::string& value)
{
  m_Vectorparams1d = value;
}

const std::string& Constant::GetOutmin() const
{
  return m_Outmin;
}

void Constant::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& Constant::GetOutmax() const
{
  return m_Outmax;
}

void Constant::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& Constant::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void Constant::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& Constant::GetLockscale() const
{
  return m_Lockscale;
}

void Constant::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& Constant::GetSampletime() const
{
  return m_Sampletime;
}

void Constant::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& Constant::GetFrameperiod() const
{
  return m_Frameperiod;
}

void Constant::SetFrameperiod(const std::string& value)
{
  m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
