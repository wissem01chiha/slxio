#include "Product.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Product::Product() {}

Product::~Product() {}

const std::string& Product::GetInputs() const
{
  return m_Inputs;
}

void Product::SetInputs(const std::string& value)
{
  m_Inputs = value;
}

const std::string& Product::GetMultiplication() const
{
  return m_Multiplication;
}

void Product::SetMultiplication(const std::string& value)
{
  m_Multiplication = value;
}

const std::string& Product::GetCollapsemode() const
{
  return m_Collapsemode;
}

void Product::SetCollapsemode(const std::string& value)
{
  m_Collapsemode = value;
}

const std::string& Product::GetCollapsedim() const
{
  return m_Collapsedim;
}

void Product::SetCollapsedim(const std::string& value)
{
  m_Collapsedim = value;
}

const std::string& Product::GetInputsamedt() const
{
  return m_Inputsamedt;
}

void Product::SetInputsamedt(const std::string& value)
{
  m_Inputsamedt = value;
}

const std::string& Product::GetOutmin() const
{
  return m_Outmin;
}

void Product::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& Product::GetOutmax() const
{
  return m_Outmax;
}

void Product::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& Product::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void Product::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& Product::GetLockscale() const
{
  return m_Lockscale;
}

void Product::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& Product::GetRndmeth() const
{
  return m_Rndmeth;
}

void Product::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& Product::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void Product::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

const std::string& Product::GetSampletime() const
{
  return m_Sampletime;
}

void Product::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
