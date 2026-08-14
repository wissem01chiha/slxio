#include "UnaryMinus.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

UnaryMinus::UnaryMinus() {}

UnaryMinus::~UnaryMinus() {}

const std::string& UnaryMinus::GetSampletime() const
{
  return m_Sampletime;
}

void UnaryMinus::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& UnaryMinus::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void UnaryMinus::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
