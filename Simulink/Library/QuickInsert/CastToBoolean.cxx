#include "CastToBoolean.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

CastToBoolean::CastToBoolean() {}

CastToBoolean::~CastToBoolean() {}

const std::string& CastToBoolean::GetOutmin() const
{
  return m_Outmin;
}

void CastToBoolean::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& CastToBoolean::GetOutmax() const
{
  return m_Outmax;
}

void CastToBoolean::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& CastToBoolean::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void CastToBoolean::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& CastToBoolean::GetLockscale() const
{
  return m_Lockscale;
}

void CastToBoolean::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& CastToBoolean::GetConvertrealworld() const
{
  return m_Convertrealworld;
}

void CastToBoolean::SetConvertrealworld(const std::string& value)
{
  m_Convertrealworld = value;
}

const std::string& CastToBoolean::GetRndmeth() const
{
  return m_Rndmeth;
}

void CastToBoolean::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& CastToBoolean::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void CastToBoolean::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

const std::string& CastToBoolean::GetSampletime() const
{
  return m_Sampletime;
}

void CastToBoolean::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
