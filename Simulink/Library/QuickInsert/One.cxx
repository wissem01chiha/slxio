#include "One.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

One::One() {}

One::~One() {}

const std::string& One::GetValue() const
{
  return m_Value;
}

void One::SetValue(const std::string& value)
{
  m_Value = value;
}

const std::string& One::GetVectorparams1d() const
{
  return m_Vectorparams1d;
}

void One::SetVectorparams1d(const std::string& value)
{
  m_Vectorparams1d = value;
}

const std::string& One::GetOutmin() const
{
  return m_Outmin;
}

void One::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& One::GetOutmax() const
{
  return m_Outmax;
}

void One::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& One::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void One::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& One::GetLockscale() const
{
  return m_Lockscale;
}

void One::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& One::GetSampletime() const
{
  return m_Sampletime;
}

void One::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& One::GetFrameperiod() const
{
  return m_Frameperiod;
}

void One::SetFrameperiod(const std::string& value)
{
  m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
