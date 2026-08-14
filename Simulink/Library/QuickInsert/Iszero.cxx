#include "Iszero.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Iszero::Iszero() {}

Iszero::~Iszero() {}

const std::string& Iszero::GetRelop() const
{
  return m_Relop;
}

void Iszero::SetRelop(const std::string& value)
{
  m_Relop = value;
}

const std::string& Iszero::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void Iszero::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& Iszero::GetZerocross() const
{
  return m_Zerocross;
}

void Iszero::SetZerocross(const std::string& value)
{
  m_Zerocross = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
