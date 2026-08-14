#include "ComplexToMagnitudeAngle.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ComplexToMagnitudeAngle::ComplexToMagnitudeAngle() {}

ComplexToMagnitudeAngle::~ComplexToMagnitudeAngle() {}

const std::string& ComplexToMagnitudeAngle::GetOutput() const
{
  return m_Output;
}

void ComplexToMagnitudeAngle::SetOutput(const std::string& value)
{
  m_Output = value;
}

const std::string& ComplexToMagnitudeAngle::GetApproximationmethod() const
{
  return m_Approximationmethod;
}

void ComplexToMagnitudeAngle::SetApproximationmethod(const std::string& value)
{
  m_Approximationmethod = value;
}

const std::string& ComplexToMagnitudeAngle::GetNumberofiterations() const
{
  return m_Numberofiterations;
}

void ComplexToMagnitudeAngle::SetNumberofiterations(const std::string& value)
{
  m_Numberofiterations = value;
}

const std::string& ComplexToMagnitudeAngle::GetSampletime() const
{
  return m_Sampletime;
}

void ComplexToMagnitudeAngle::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
