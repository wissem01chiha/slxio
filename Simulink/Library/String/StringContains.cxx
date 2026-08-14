#include "StringContains.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

StringContains::StringContains() {}

StringContains::~StringContains() {}

const std::string& StringContains::GetCasesensitive() const
{
  return m_Casesensitive;
}

void StringContains::SetCasesensitive(const std::string& value)
{
  m_Casesensitive = value;
}

const std::string& StringContains::GetFunction() const
{
  return m_Function;
}

void StringContains::SetFunction(const std::string& value)
{
  m_Function = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
