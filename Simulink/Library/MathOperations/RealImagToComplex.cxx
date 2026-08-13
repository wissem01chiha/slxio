#include "RealImagToComplex.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

RealImagToComplex::RealImagToComplex() {}

RealImagToComplex::~RealImagToComplex() {}

const std::string& RealImagToComplex::GetInput() const
{
    return m_Input;
}

void RealImagToComplex::SetInput(const std::string& value)
{
    m_Input = value;
}

const std::string& RealImagToComplex::GetConstantpart() const
{
    return m_Constantpart;
}

void RealImagToComplex::SetConstantpart(const std::string& value)
{
    m_Constantpart = value;
}

const std::string& RealImagToComplex::GetSampletime() const
{
    return m_Sampletime;
}

void RealImagToComplex::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
