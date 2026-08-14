#include "IndexVector.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

IndexVector::IndexVector() {}

IndexVector::~IndexVector() {}

const std::string& IndexVector::GetDataportorder() const
{
  return m_Dataportorder;
}

void IndexVector::SetDataportorder(const std::string& value)
{
  m_Dataportorder = value;
}

const std::string& IndexVector::GetInputs() const
{
  return m_Inputs;
}

void IndexVector::SetInputs(const std::string& value)
{
  m_Inputs = value;
}

const std::string& IndexVector::GetDataportindices() const
{
  return m_Dataportindices;
}

void IndexVector::SetDataportindices(const std::string& value)
{
  m_Dataportindices = value;
}

const std::string& IndexVector::GetDataportfordefault() const
{
  return m_Dataportfordefault;
}

void IndexVector::SetDataportfordefault(const std::string& value)
{
  m_Dataportfordefault = value;
}

const std::string& IndexVector::GetDiagnosticfordefault() const
{
  return m_Diagnosticfordefault;
}

void IndexVector::SetDiagnosticfordefault(const std::string& value)
{
  m_Diagnosticfordefault = value;
}

const std::string& IndexVector::GetInputsamedt() const
{
  return m_Inputsamedt;
}

void IndexVector::SetInputsamedt(const std::string& value)
{
  m_Inputsamedt = value;
}

const std::string& IndexVector::GetOutmin() const
{
  return m_Outmin;
}

void IndexVector::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& IndexVector::GetOutmax() const
{
  return m_Outmax;
}

void IndexVector::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& IndexVector::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void IndexVector::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& IndexVector::GetLockscale() const
{
  return m_Lockscale;
}

void IndexVector::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& IndexVector::GetRndmeth() const
{
  return m_Rndmeth;
}

void IndexVector::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& IndexVector::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void IndexVector::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

const std::string& IndexVector::GetSampletime() const
{
  return m_Sampletime;
}

void IndexVector::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& IndexVector::GetAllowdiffinputsizes() const
{
  return m_Allowdiffinputsizes;
}

void IndexVector::SetAllowdiffinputsizes(const std::string& value)
{
  m_Allowdiffinputsizes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
