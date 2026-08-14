#include "Difference.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Difference::Difference() {}

Difference::~Difference() {}

const std::string& Difference::GetIcprevinput() const
{
  return m_Icprevinput;
}

void Difference::SetIcprevinput(const std::string& value)
{
  m_Icprevinput = value;
}

const std::string& Difference::GetInputprocessing() const
{
  return m_Inputprocessing;
}

void Difference::SetInputprocessing(const std::string& value)
{
  m_Inputprocessing = value;
}

const std::string& Difference::GetOutmin() const
{
  return m_Outmin;
}

void Difference::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& Difference::GetOutmax() const
{
  return m_Outmax;
}

void Difference::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& Difference::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void Difference::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& Difference::GetLockscale() const
{
  return m_Lockscale;
}

void Difference::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& Difference::GetRndmeth() const
{
  return m_Rndmeth;
}

void Difference::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& Difference::GetDosatur() const
{
  return m_Dosatur;
}

void Difference::SetDosatur(const std::string& value)
{
  m_Dosatur = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
