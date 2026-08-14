#include "PermuteDimensions.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

PermuteDimensions::PermuteDimensions() {}

PermuteDimensions::~PermuteDimensions() {}

const std::string& PermuteDimensions::GetOrder() const
{
  return m_Order;
}

void PermuteDimensions::SetOrder(const std::string& value)
{
  m_Order = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
