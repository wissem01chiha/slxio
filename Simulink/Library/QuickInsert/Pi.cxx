#include "Pi.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Pi::Pi() {}

Pi::~Pi() {}

const std::string& Pi::GetValue() const
{
  return m_Value;
}

void Pi::SetValue(const std::string& value)
{
  m_Value = value;
}

const std::string& Pi::GetVectorparams1d() const
{
  return m_Vectorparams1d;
}

void Pi::SetVectorparams1d(const std::string& value)
{
  m_Vectorparams1d = value;
}

const std::string& Pi::GetOutmin() const
{
  return m_Outmin;
}

void Pi::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& Pi::GetOutmax() const
{
  return m_Outmax;
}

void Pi::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& Pi::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void Pi::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& Pi::GetLockscale() const
{
  return m_Lockscale;
}

void Pi::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& Pi::GetSampletime() const
{
  return m_Sampletime;
}

void Pi::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& Pi::GetFrameperiod() const
{
  return m_Frameperiod;
}

void Pi::SetFrameperiod(const std::string& value)
{
  m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
