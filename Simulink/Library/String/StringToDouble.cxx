#include "StringToDouble.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

StringToDouble::StringToDouble() {}

StringToDouble::~StringToDouble() {}

const std::string& StringToDouble::GetFormat() const
{
  return m_Format;
}

void StringToDouble::SetFormat(const std::string& value)
{
  m_Format = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
