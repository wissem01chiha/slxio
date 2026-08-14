#include "CompareToZero.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

CompareToZero::CompareToZero() {}

CompareToZero::~CompareToZero() {}

const std::string& CompareToZero::GetRelop() const
{
  return m_Relop;
}

void CompareToZero::SetRelop(const std::string& value)
{
  m_Relop = value;
}

const std::string& CompareToZero::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void CompareToZero::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& CompareToZero::GetZerocross() const
{
  return m_Zerocross;
}

void CompareToZero::SetZerocross(const std::string& value)
{
  m_Zerocross = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
