#include "AddConstant.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

AddConstant::AddConstant() {}

AddConstant::~AddConstant() {}

const std::string& AddConstant::GetBias() const
{
  return m_Bias;
}

void AddConstant::SetBias(const std::string& value)
{
  m_Bias = value;
}

const std::string& AddConstant::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void AddConstant::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
