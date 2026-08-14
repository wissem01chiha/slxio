#include "Sign.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Sign::Sign() {}

Sign::~Sign() {}

const std::string& Sign::GetZerocross() const
{
  return m_Zerocross;
}

void Sign::SetZerocross(const std::string& value)
{
  m_Zerocross = value;
}

const std::string& Sign::GetSampletime() const
{
  return m_Sampletime;
}

void Sign::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
