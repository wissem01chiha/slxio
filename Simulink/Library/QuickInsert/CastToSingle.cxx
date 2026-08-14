#include "CastToSingle.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

CastToSingle::CastToSingle() {}

CastToSingle::~CastToSingle() {}

const std::string& CastToSingle::GetOutmin() const
{
  return m_Outmin;
}

void CastToSingle::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& CastToSingle::GetOutmax() const
{
  return m_Outmax;
}

void CastToSingle::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& CastToSingle::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void CastToSingle::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& CastToSingle::GetLockscale() const
{
  return m_Lockscale;
}

void CastToSingle::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& CastToSingle::GetConvertrealworld() const
{
  return m_Convertrealworld;
}

void CastToSingle::SetConvertrealworld(const std::string& value)
{
  m_Convertrealworld = value;
}

const std::string& CastToSingle::GetRndmeth() const
{
  return m_Rndmeth;
}

void CastToSingle::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& CastToSingle::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void CastToSingle::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

const std::string& CastToSingle::GetSampletime() const
{
  return m_Sampletime;
}

void CastToSingle::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
