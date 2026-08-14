#include "Ceil.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Ceil::Ceil() {}

Ceil::~Ceil() {}

const std::string& Ceil::GetOperator() const
{
  return m_Operator;
}

void Ceil::SetOperator(const std::string& value)
{
  m_Operator = value;
}

const std::string& Ceil::GetSampletime() const
{
  return m_Sampletime;
}

void Ceil::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
