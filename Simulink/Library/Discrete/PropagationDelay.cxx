#include "PropagationDelay.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

PropagationDelay::PropagationDelay() {}

PropagationDelay::~PropagationDelay() {}

const std::string& PropagationDelay::GetInitialoutput() const
{
  return m_Initialoutput;
}

void PropagationDelay::SetInitialoutput(const std::string& value)
{
  m_Initialoutput = value;
}

const std::string& PropagationDelay::GetRunatfixedtimeintervals() const
{
  return m_Runatfixedtimeintervals;
}

void PropagationDelay::SetRunatfixedtimeintervals(const std::string& value)
{
  m_Runatfixedtimeintervals = value;
}

const std::string& PropagationDelay::GetSampletime() const
{
  return m_Sampletime;
}

void PropagationDelay::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
