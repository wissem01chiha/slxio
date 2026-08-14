#include "Enable.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Enable::Enable() {}

Enable::~Enable() {}

const std::string& Enable::GetStateswhenenabling() const
{
  return m_Stateswhenenabling;
}

void Enable::SetStateswhenenabling(const std::string& value)
{
  m_Stateswhenenabling = value;
}

const std::string& Enable::GetPropagatevarsize() const
{
  return m_Propagatevarsize;
}

void Enable::SetPropagatevarsize(const std::string& value)
{
  m_Propagatevarsize = value;
}

const std::string& Enable::GetShowoutputport() const
{
  return m_Showoutputport;
}

void Enable::SetShowoutputport(const std::string& value)
{
  m_Showoutputport = value;
}

const std::string& Enable::GetZerocross() const
{
  return m_Zerocross;
}

void Enable::SetZerocross(const std::string& value)
{
  m_Zerocross = value;
}

const std::string& Enable::GetPortdimensions() const
{
  return m_Portdimensions;
}

void Enable::SetPortdimensions(const std::string& value)
{
  m_Portdimensions = value;
}

const std::string& Enable::GetSampletime() const
{
  return m_Sampletime;
}

void Enable::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& Enable::GetOutmin() const
{
  return m_Outmin;
}

void Enable::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& Enable::GetOutmax() const
{
  return m_Outmax;
}

void Enable::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& Enable::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void Enable::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& Enable::GetInterpolate() const
{
  return m_Interpolate;
}

void Enable::SetInterpolate(const std::string& value)
{
  m_Interpolate = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
