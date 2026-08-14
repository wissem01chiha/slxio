#include "Ramp.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Ramp::Ramp() {}

Ramp::~Ramp() {}

const std::string& Ramp::GetSlope() const
{
  return m_Slope;
}

void Ramp::SetSlope(const std::string& value)
{
  m_Slope = value;
}

const std::string& Ramp::GetStart() const
{
  return m_Start;
}

void Ramp::SetStart(const std::string& value)
{
  m_Start = value;
}

const std::string& Ramp::GetInitialoutput() const
{
  return m_Initialoutput;
}

void Ramp::SetInitialoutput(const std::string& value)
{
  m_Initialoutput = value;
}

const std::string& Ramp::GetVectorparams1d() const
{
  return m_Vectorparams1d;
}

void Ramp::SetVectorparams1d(const std::string& value)
{
  m_Vectorparams1d = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
