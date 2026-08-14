#include "Clock.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Clock::Clock() {}

Clock::~Clock() {}

const std::string& Clock::GetDisplaytime() const
{
  return m_Displaytime;
}

void Clock::SetDisplaytime(const std::string& value)
{
  m_Displaytime = value;
}

const std::string& Clock::GetDecimation() const
{
  return m_Decimation;
}

void Clock::SetDecimation(const std::string& value)
{
  m_Decimation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
