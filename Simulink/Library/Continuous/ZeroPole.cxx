#include "ZeroPole.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ZeroPole::ZeroPole() {}

ZeroPole::~ZeroPole() {}

const std::string& ZeroPole::GetZeros() const
{
  return m_Zeros;
}

void ZeroPole::SetZeros(const std::string& value)
{
  m_Zeros = value;
}

const std::string& ZeroPole::GetPoles() const
{
  return m_Poles;
}

void ZeroPole::SetPoles(const std::string& value)
{
  m_Poles = value;
}

const std::string& ZeroPole::GetGain() const
{
  return m_Gain;
}

void ZeroPole::SetGain(const std::string& value)
{
  m_Gain = value;
}

const std::string& ZeroPole::GetParametertunability() const
{
  return m_Parametertunability;
}

void ZeroPole::SetParametertunability(const std::string& value)
{
  m_Parametertunability = value;
}

const std::string& ZeroPole::GetAbsolutetolerance() const
{
  return m_Absolutetolerance;
}

void ZeroPole::SetAbsolutetolerance(const std::string& value)
{
  m_Absolutetolerance = value;
}

const std::string& ZeroPole::GetContinuousstateattributes() const
{
  return m_Continuousstateattributes;
}

void ZeroPole::SetContinuousstateattributes(const std::string& value)
{
  m_Continuousstateattributes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
