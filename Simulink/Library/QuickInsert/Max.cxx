#include "Max.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Max::Max() {}

Max::~Max() {}

const std::string& Max::GetFunction() const
{
  return m_Function;
}

void Max::SetFunction(const std::string& value)
{
  m_Function = value;
}

const std::string& Max::GetInputs() const
{
  return m_Inputs;
}

void Max::SetInputs(const std::string& value)
{
  m_Inputs = value;
}

const std::string& Max::GetInputsamedt() const
{
  return m_Inputsamedt;
}

void Max::SetInputsamedt(const std::string& value)
{
  m_Inputsamedt = value;
}

const std::string& Max::GetCollapsemode() const
{
  return m_Collapsemode;
}

void Max::SetCollapsemode(const std::string& value)
{
  m_Collapsemode = value;
}

const std::string& Max::GetCollapsedim() const
{
  return m_Collapsedim;
}

void Max::SetCollapsedim(const std::string& value)
{
  m_Collapsedim = value;
}

const std::string& Max::GetOutmin() const
{
  return m_Outmin;
}

void Max::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& Max::GetOutmax() const
{
  return m_Outmax;
}

void Max::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& Max::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void Max::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& Max::GetLockscale() const
{
  return m_Lockscale;
}

void Max::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& Max::GetRndmeth() const
{
  return m_Rndmeth;
}

void Max::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& Max::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void Max::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

const std::string& Max::GetZerocross() const
{
  return m_Zerocross;
}

void Max::SetZerocross(const std::string& value)
{
  m_Zerocross = value;
}

const std::string& Max::GetSampletime() const
{
  return m_Sampletime;
}

void Max::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
