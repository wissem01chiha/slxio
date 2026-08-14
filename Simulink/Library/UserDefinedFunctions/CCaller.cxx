#include "CCaller.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

CCaller::CCaller() {}

CCaller::~CCaller() {}

const std::string& CCaller::GetFunctionname() const
{
  return m_Functionname;
}

void CCaller::SetFunctionname(const std::string& value)
{
  m_Functionname = value;
}

const std::string& CCaller::GetFunctionportspecification() const
{
  return m_Functionportspecification;
}

void CCaller::SetFunctionportspecification(const std::string& value)
{
  m_Functionportspecification = value;
}

const std::string& CCaller::GetAvailablefunctions() const
{
  return m_Availablefunctions;
}

void CCaller::SetAvailablefunctions(const std::string& value)
{
  m_Availablefunctions = value;
}

const std::string& CCaller::GetSampletime() const
{
  return m_Sampletime;
}

void CCaller::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
