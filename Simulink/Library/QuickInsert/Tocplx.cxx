#include "Tocplx.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Tocplx::Tocplx() {}

Tocplx::~Tocplx() {}

const std::string& Tocplx::GetInput() const
{
    return m_Input;
}

void Tocplx::SetInput(const std::string& value)
{
    m_Input = value;
}

const std::string& Tocplx::GetConstantpart() const
{
    return m_Constantpart;
}

void Tocplx::SetConstantpart(const std::string& value)
{
    m_Constantpart = value;
}

const std::string& Tocplx::GetSampletime() const
{
    return m_Sampletime;
}

void Tocplx::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
