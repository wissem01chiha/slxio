#include "Istriangular.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Istriangular::Istriangular() {}

Istriangular::~Istriangular() {}

const std::string& Istriangular::GetMode() const
{
  return m_Mode;
}

void Istriangular::SetMode(const std::string& value)
{
  m_Mode = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
