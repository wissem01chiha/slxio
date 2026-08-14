#include "Sum.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Sum::Sum() {}

Sum::~Sum() {}

const std::string& Sum::GetIconshape() const
{
  return m_Iconshape;
}

void Sum::SetIconshape(const std::string& value)
{
  m_Iconshape = value;
}

const std::string& Sum::GetInputs() const
{
  return m_Inputs;
}

void Sum::SetInputs(const std::string& value)
{
  m_Inputs = value;
}

const std::string& Sum::GetCollapsemode() const
{
  return m_Collapsemode;
}

void Sum::SetCollapsemode(const std::string& value)
{
  m_Collapsemode = value;
}

const std::string& Sum::GetCollapsedim() const
{
  return m_Collapsedim;
}

void Sum::SetCollapsedim(const std::string& value)
{
  m_Collapsedim = value;
}

const std::string& Sum::GetOutmin() const
{
  return m_Outmin;
}

void Sum::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& Sum::GetOutmax() const
{
  return m_Outmax;
}

void Sum::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& Sum::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void Sum::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& Sum::GetAccumdatatypestr() const
{
  return m_Accumdatatypestr;
}

void Sum::SetAccumdatatypestr(const std::string& value)
{
  m_Accumdatatypestr = value;
}

const std::string& Sum::GetInputsamedt() const
{
  return m_Inputsamedt;
}

void Sum::SetInputsamedt(const std::string& value)
{
  m_Inputsamedt = value;
}

const std::string& Sum::GetLockscale() const
{
  return m_Lockscale;
}

void Sum::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& Sum::GetRndmeth() const
{
  return m_Rndmeth;
}

void Sum::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& Sum::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void Sum::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

const std::string& Sum::GetSampletime() const
{
  return m_Sampletime;
}

void Sum::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
