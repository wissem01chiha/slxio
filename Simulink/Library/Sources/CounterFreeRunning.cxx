#include "CounterFreeRunning.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

CounterFreeRunning::CounterFreeRunning() {}

CounterFreeRunning::~CounterFreeRunning() {}

const std::string& CounterFreeRunning::GetNumbits() const
{
  return m_Numbits;
}

void CounterFreeRunning::SetNumbits(const std::string& value)
{
  m_Numbits = value;
}

const std::string& CounterFreeRunning::GetTsamp() const
{
  return m_Tsamp;
}

void CounterFreeRunning::SetTsamp(const std::string& value)
{
  m_Tsamp = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
