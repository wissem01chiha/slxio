#include "HitScheduler.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

HitScheduler::HitScheduler() {}

HitScheduler::~HitScheduler() {}

const std::string& HitScheduler::GetHitscheduleroutputtype() const
{
  return m_Hitscheduleroutputtype;
}

void HitScheduler::SetHitscheduleroutputtype(const std::string& value)
{
  m_Hitscheduleroutputtype = value;
}

const std::string& HitScheduler::GetInitialbuffersize() const
{
  return m_Initialbuffersize;
}

void HitScheduler::SetInitialbuffersize(const std::string& value)
{
  m_Initialbuffersize = value;
}

const std::string& HitScheduler::GetFixedbuffer() const
{
  return m_Fixedbuffer;
}

void HitScheduler::SetFixedbuffer(const std::string& value)
{
  m_Fixedbuffer = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
