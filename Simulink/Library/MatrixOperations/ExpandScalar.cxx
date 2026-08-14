#include "ExpandScalar.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ExpandScalar::ExpandScalar() {}

ExpandScalar::~ExpandScalar() {}

const std::string& ExpandScalar::GetElementvalue() const
{
  return m_Elementvalue;
}

void ExpandScalar::SetElementvalue(const std::string& value)
{
  m_Elementvalue = value;
}

const std::string& ExpandScalar::GetOutputdimensions() const
{
  return m_Outputdimensions;
}

void ExpandScalar::SetOutputdimensions(const std::string& value)
{
  m_Outputdimensions = value;
}

const std::string& ExpandScalar::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void ExpandScalar::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& ExpandScalar::GetSampletime() const
{
  return m_Sampletime;
}

void ExpandScalar::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
