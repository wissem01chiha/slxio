#include "SFunction.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SFunction::SFunction() {}

SFunction::~SFunction() {}

const std::string& SFunction::GetFunctionname() const
{
  return m_Functionname;
}

void SFunction::SetFunctionname(const std::string& value)
{
  m_Functionname = value;
}

const std::string& SFunction::GetParameters() const
{
  return m_Parameters;
}

void SFunction::SetParameters(const std::string& value)
{
  m_Parameters = value;
}

const std::string& SFunction::GetSfunctionmodules() const
{
  return m_Sfunctionmodules;
}

void SFunction::SetSfunctionmodules(const std::string& value)
{
  m_Sfunctionmodules = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
