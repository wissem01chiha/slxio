#include "Reshape.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Reshape::Reshape() {}

Reshape::~Reshape() {}

const std::string& Reshape::GetOutputdimensionality() const
{
  return m_Outputdimensionality;
}

void Reshape::SetOutputdimensionality(const std::string& value)
{
  m_Outputdimensionality = value;
}

const std::string& Reshape::GetOutputdimensions() const
{
  return m_Outputdimensions;
}

void Reshape::SetOutputdimensions(const std::string& value)
{
  m_Outputdimensions = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
