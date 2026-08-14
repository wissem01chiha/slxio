#include "Bias.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Bias::Bias() {}

Bias::~Bias() {}

const std::string& Bias::GetBias() const
{
  return m_Bias;
}

void Bias::SetBias(const std::string& value)
{
  m_Bias = value;
}

const std::string& Bias::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void Bias::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
