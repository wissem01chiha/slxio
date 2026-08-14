#include "FromWorkspace.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FromWorkspace::FromWorkspace() {}

FromWorkspace::~FromWorkspace() {}

const std::string& FromWorkspace::GetVariablename() const
{
  return m_Variablename;
}

void FromWorkspace::SetVariablename(const std::string& value)
{
  m_Variablename = value;
}

const std::string& FromWorkspace::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void FromWorkspace::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& FromWorkspace::GetSampletime() const
{
  return m_Sampletime;
}

void FromWorkspace::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& FromWorkspace::GetInterpolate() const
{
  return m_Interpolate;
}

void FromWorkspace::SetInterpolate(const std::string& value)
{
  m_Interpolate = value;
}

const std::string& FromWorkspace::GetZerocross() const
{
  return m_Zerocross;
}

void FromWorkspace::SetZerocross(const std::string& value)
{
  m_Zerocross = value;
}

const std::string& FromWorkspace::GetOutputafterfinalvalue() const
{
  return m_Outputafterfinalvalue;
}

void FromWorkspace::SetOutputafterfinalvalue(const std::string& value)
{
  m_Outputafterfinalvalue = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
