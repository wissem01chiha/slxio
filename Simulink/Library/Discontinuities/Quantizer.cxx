#include "Quantizer.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Quantizer::Quantizer() {}

Quantizer::~Quantizer() {}

const std::string& Quantizer::GetQuantizationinterval() const
{
    return m_Quantizationinterval;
}

void Quantizer::SetQuantizationinterval(const std::string& value)
{
    m_Quantizationinterval = value;
}

const std::string& Quantizer::GetLinearizeasgain() const
{
    return m_Linearizeasgain;
}

void Quantizer::SetLinearizeasgain(const std::string& value)
{
    m_Linearizeasgain = value;
}

const std::string& Quantizer::GetSampletime() const { return m_Sampletime; }

void Quantizer::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
