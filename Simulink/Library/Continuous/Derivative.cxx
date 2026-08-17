#include "Derivative.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Derivative::Derivative() {}

Derivative::~Derivative() {}

const std::string& Derivative::GetCoefficientintfapproximation() const
{
    return m_Coefficientintfapproximation;
}

void Derivative::SetCoefficientintfapproximation(const std::string& value)
{
    m_Coefficientintfapproximation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
