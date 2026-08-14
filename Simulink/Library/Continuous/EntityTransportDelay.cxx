#include "EntityTransportDelay.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

EntityTransportDelay::EntityTransportDelay() {}

EntityTransportDelay::~EntityTransportDelay() {}

const std::string& EntityTransportDelay::GetCapacity() const
{
  return m_Capacity;
}

void EntityTransportDelay::SetCapacity(const std::string& value)
{
  m_Capacity = value;
}

const std::string& EntityTransportDelay::GetShownumberentitiesinblock() const
{
  return m_Shownumberentitiesinblock;
}

void EntityTransportDelay::SetShownumberentitiesinblock(
  const std::string& value)
{
  m_Shownumberentitiesinblock = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
