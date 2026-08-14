#include "StringFind.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

StringFind::StringFind() {}

StringFind::~StringFind() {}

const std::string& StringFind::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void StringFind::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
