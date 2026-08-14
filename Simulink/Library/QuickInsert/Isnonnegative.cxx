#include "Isnonnegative.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Isnonnegative::Isnonnegative() {}

Isnonnegative::~Isnonnegative() {}

const std::string& Isnonnegative::GetRelop() const
{
  return m_Relop;
}

void Isnonnegative::SetRelop(const std::string& value)
{
  m_Relop = value;
}

const std::string& Isnonnegative::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void Isnonnegative::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& Isnonnegative::GetZerocross() const
{
  return m_Zerocross;
}

void Isnonnegative::SetZerocross(const std::string& value)
{
  m_Zerocross = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
