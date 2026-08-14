#include "HitCrossing.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

HitCrossing::HitCrossing() {}

HitCrossing::~HitCrossing() {}

const std::string& HitCrossing::GetHitcrossingoffset() const
{
  return m_Hitcrossingoffset;
}

void HitCrossing::SetHitcrossingoffset(const std::string& value)
{
  m_Hitcrossingoffset = value;
}

const std::string& HitCrossing::GetHitcrossingdirection() const
{
  return m_Hitcrossingdirection;
}

void HitCrossing::SetHitcrossingdirection(const std::string& value)
{
  m_Hitcrossingdirection = value;
}

const std::string& HitCrossing::GetShowoutputport() const
{
  return m_Showoutputport;
}

void HitCrossing::SetShowoutputport(const std::string& value)
{
  m_Showoutputport = value;
}

const std::string& HitCrossing::GetHitcrossingoutputtype() const
{
  return m_Hitcrossingoutputtype;
}

void HitCrossing::SetHitcrossingoutputtype(const std::string& value)
{
  m_Hitcrossingoutputtype = value;
}

const std::string& HitCrossing::GetZerocross() const
{
  return m_Zerocross;
}

void HitCrossing::SetZerocross(const std::string& value)
{
  m_Zerocross = value;
}

const std::string& HitCrossing::GetSampletime() const
{
  return m_Sampletime;
}

void HitCrossing::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
