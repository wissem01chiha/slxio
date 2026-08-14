#include "MinOfElements.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

MinOfElements::MinOfElements() {}

MinOfElements::~MinOfElements() {}

const std::string& MinOfElements::GetFunction() const
{
  return m_Function;
}

void MinOfElements::SetFunction(const std::string& value)
{
  m_Function = value;
}

const std::string& MinOfElements::GetInputs() const
{
  return m_Inputs;
}

void MinOfElements::SetInputs(const std::string& value)
{
  m_Inputs = value;
}

const std::string& MinOfElements::GetInputsamedt() const
{
  return m_Inputsamedt;
}

void MinOfElements::SetInputsamedt(const std::string& value)
{
  m_Inputsamedt = value;
}

const std::string& MinOfElements::GetCollapsemode() const
{
  return m_Collapsemode;
}

void MinOfElements::SetCollapsemode(const std::string& value)
{
  m_Collapsemode = value;
}

const std::string& MinOfElements::GetCollapsedim() const
{
  return m_Collapsedim;
}

void MinOfElements::SetCollapsedim(const std::string& value)
{
  m_Collapsedim = value;
}

const std::string& MinOfElements::GetOutmin() const
{
  return m_Outmin;
}

void MinOfElements::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& MinOfElements::GetOutmax() const
{
  return m_Outmax;
}

void MinOfElements::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& MinOfElements::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void MinOfElements::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& MinOfElements::GetLockscale() const
{
  return m_Lockscale;
}

void MinOfElements::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& MinOfElements::GetRndmeth() const
{
  return m_Rndmeth;
}

void MinOfElements::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& MinOfElements::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void MinOfElements::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

const std::string& MinOfElements::GetZerocross() const
{
  return m_Zerocross;
}

void MinOfElements::SetZerocross(const std::string& value)
{
  m_Zerocross = value;
}

const std::string& MinOfElements::GetSampletime() const
{
  return m_Sampletime;
}

void MinOfElements::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
