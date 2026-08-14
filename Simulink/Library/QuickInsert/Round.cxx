#include "Round.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Round::Round() {}

Round::~Round() {}

const std::string& Round::GetOperator() const
{
  return m_Operator;
}

void Round::SetOperator(const std::string& value)
{
  m_Operator = value;
}

const std::string& Round::GetSampletime() const
{
  return m_Sampletime;
}

void Round::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
