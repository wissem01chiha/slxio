#include "Isnonzero.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Isnonzero::Isnonzero() {}

Isnonzero::~Isnonzero() {}

const std::string& Isnonzero::GetRelop() const
{
  return m_Relop;
}

void Isnonzero::SetRelop(const std::string& value)
{
  m_Relop = value;
}

const std::string& Isnonzero::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void Isnonzero::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& Isnonzero::GetZerocross() const
{
  return m_Zerocross;
}

void Isnonzero::SetZerocross(const std::string& value)
{
  m_Zerocross = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
