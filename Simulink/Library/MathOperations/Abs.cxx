#include "Abs.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Abs::Abs() {}

Abs::~Abs() {}

const std::string& Abs::GetZerocross() const
{
  return m_Zerocross;
}

void Abs::SetZerocross(const std::string& value)
{
  m_Zerocross = value;
}

const std::string& Abs::GetSampletime() const
{
  return m_Sampletime;
}

void Abs::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& Abs::GetOutmin() const
{
  return m_Outmin;
}

void Abs::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& Abs::GetOutmax() const
{
  return m_Outmax;
}

void Abs::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& Abs::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void Abs::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& Abs::GetLockscale() const
{
  return m_Lockscale;
}

void Abs::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& Abs::GetRndmeth() const
{
  return m_Rndmeth;
}

void Abs::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& Abs::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void Abs::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
