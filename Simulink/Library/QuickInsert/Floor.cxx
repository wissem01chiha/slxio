#include "Floor.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Floor::Floor() {}

Floor::~Floor() {}

const std::string& Floor::GetOperator() const
{
  return m_Operator;
}

void Floor::SetOperator(const std::string& value)
{
  m_Operator = value;
}

const std::string& Floor::GetSampletime() const
{
  return m_Sampletime;
}

void Floor::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
