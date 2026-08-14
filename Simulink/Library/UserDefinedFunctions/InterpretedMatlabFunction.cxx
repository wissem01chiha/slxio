#include "InterpretedMatlabFunction.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

InterpretedMatlabFunction::InterpretedMatlabFunction() {}

InterpretedMatlabFunction::~InterpretedMatlabFunction() {}

const std::string& InterpretedMatlabFunction::GetMatlabfcn() const
{
  return m_Matlabfcn;
}

void InterpretedMatlabFunction::SetMatlabfcn(const std::string& value)
{
  m_Matlabfcn = value;
}

const std::string& InterpretedMatlabFunction::GetOutputdimensions() const
{
  return m_Outputdimensions;
}

void InterpretedMatlabFunction::SetOutputdimensions(const std::string& value)
{
  m_Outputdimensions = value;
}

const std::string& InterpretedMatlabFunction::GetOutputsignaltype() const
{
  return m_Outputsignaltype;
}

void InterpretedMatlabFunction::SetOutputsignaltype(const std::string& value)
{
  m_Outputsignaltype = value;
}

const std::string& InterpretedMatlabFunction::GetOutput1d() const
{
  return m_Output1d;
}

void InterpretedMatlabFunction::SetOutput1d(const std::string& value)
{
  m_Output1d = value;
}

const std::string& InterpretedMatlabFunction::GetSampletime() const
{
  return m_Sampletime;
}

void InterpretedMatlabFunction::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
