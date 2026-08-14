#include "Cast.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Cast::Cast() {}

Cast::~Cast() {}

const std::string& Cast::GetOutmin() const
{
  return m_Outmin;
}

void Cast::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& Cast::GetOutmax() const
{
  return m_Outmax;
}

void Cast::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& Cast::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void Cast::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& Cast::GetLockscale() const
{
  return m_Lockscale;
}

void Cast::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& Cast::GetConvertrealworld() const
{
  return m_Convertrealworld;
}

void Cast::SetConvertrealworld(const std::string& value)
{
  m_Convertrealworld = value;
}

const std::string& Cast::GetRndmeth() const
{
  return m_Rndmeth;
}

void Cast::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& Cast::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void Cast::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

const std::string& Cast::GetSampletime() const
{
  return m_Sampletime;
}

void Cast::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
