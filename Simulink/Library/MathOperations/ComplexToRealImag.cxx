#include "ComplexToRealImag.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ComplexToRealImag::ComplexToRealImag() {}

ComplexToRealImag::~ComplexToRealImag() {}

const std::string& ComplexToRealImag::GetOutput() const
{
    return m_Output;
}

void ComplexToRealImag::SetOutput(const std::string& value)
{
    m_Output = value;
}

const std::string& ComplexToRealImag::GetSampletime() const
{
    return m_Sampletime;
}

void ComplexToRealImag::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
