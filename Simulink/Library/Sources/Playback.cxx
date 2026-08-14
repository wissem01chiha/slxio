#include "Playback.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Playback::Playback() {}

Playback::~Playback() {}

const std::string& Playback::GetNumports() const
{
  return m_Numports;
}

void Playback::SetNumports(const std::string& value)
{
  m_Numports = value;
}

const std::string& Playback::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void Playback::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& Playback::GetPortunits() const
{
  return m_Portunits;
}

void Playback::SetPortunits(const std::string& value)
{
  m_Portunits = value;
}

const std::string& Playback::GetPortdimensions() const
{
  return m_Portdimensions;
}

void Playback::SetPortdimensions(const std::string& value)
{
  m_Portdimensions = value;
}

const std::string& Playback::GetPortdimsmodes() const
{
  return m_Portdimsmodes;
}

void Playback::SetPortdimsmodes(const std::string& value)
{
  m_Portdimsmodes = value;
}

const std::string& Playback::GetPortcomplexity() const
{
  return m_Portcomplexity;
}

void Playback::SetPortcomplexity(const std::string& value)
{
  m_Portcomplexity = value;
}

const std::string& Playback::GetPortsampletimes() const
{
  return m_Portsampletimes;
}

void Playback::SetPortsampletimes(const std::string& value)
{
  m_Portsampletimes = value;
}

const std::string& Playback::GetGroupby() const
{
  return m_Groupby;
}

void Playback::SetGroupby(const std::string& value)
{
  m_Groupby = value;
}

const std::string& Playback::GetExtrapolationbeforefirstdatapoint() const
{
  return m_Extrapolationbeforefirstdatapoint;
}

void Playback::SetExtrapolationbeforefirstdatapoint(const std::string& value)
{
  m_Extrapolationbeforefirstdatapoint = value;
}

const std::string& Playback::GetExtrapolationafterlastdatapoint() const
{
  return m_Extrapolationafterlastdatapoint;
}

void Playback::SetExtrapolationafterlastdatapoint(const std::string& value)
{
  m_Extrapolationafterlastdatapoint = value;
}

const std::string& Playback::GetZerocross() const
{
  return m_Zerocross;
}

void Playback::SetZerocross(const std::string& value)
{
  m_Zerocross = value;
}

const std::string& Playback::GetSignals() const
{
  return m_Signals;
}

void Playback::SetSignals(const std::string& value)
{
  m_Signals = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
