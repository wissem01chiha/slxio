#include "MagnitudeAngleToComplex.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

MagnitudeAngleToComplex::MagnitudeAngleToComplex() {}

MagnitudeAngleToComplex::~MagnitudeAngleToComplex() {}

const std::string& MagnitudeAngleToComplex::GetInput() const
{
    return m_Input;
}

void MagnitudeAngleToComplex::SetInput(const std::string& value)
{
    m_Input = value;
}

const std::string& MagnitudeAngleToComplex::GetConstantpart() const
{
    return m_Constantpart;
}

void MagnitudeAngleToComplex::SetConstantpart(const std::string& value)
{
    m_Constantpart = value;
}

const std::string& MagnitudeAngleToComplex::GetApproximationmethod() const
{
    return m_Approximationmethod;
}

void MagnitudeAngleToComplex::SetApproximationmethod(const std::string& value)
{
    m_Approximationmethod = value;
}

const std::string& MagnitudeAngleToComplex::GetNumberofiterations() const
{
    return m_Numberofiterations;
}

void MagnitudeAngleToComplex::SetNumberofiterations(const std::string& value)
{
    m_Numberofiterations = value;
}

const std::string& MagnitudeAngleToComplex::GetScalereciprocalgainfactor() const
{
    return m_Scalereciprocalgainfactor;
}

void MagnitudeAngleToComplex::SetScalereciprocalgainfactor(const std::string& value)
{
    m_Scalereciprocalgainfactor = value;
}

const std::string& MagnitudeAngleToComplex::GetSampletime() const
{
    return m_Sampletime;
}

void MagnitudeAngleToComplex::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
