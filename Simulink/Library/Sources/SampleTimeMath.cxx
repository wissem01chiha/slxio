#include "SampleTimeMath.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SampleTimeMath::SampleTimeMath() {}

SampleTimeMath::~SampleTimeMath() {}

const std::string& SampleTimeMath::GetTsampmathop() const
{
    return m_Tsampmathop;
}

void SampleTimeMath::SetTsampmathop(const std::string& value)
{
    m_Tsampmathop = value;
}

const std::string& SampleTimeMath::GetWeightvalue() const
{
    return m_Weightvalue;
}

void SampleTimeMath::SetWeightvalue(const std::string& value)
{
    m_Weightvalue = value;
}

const std::string& SampleTimeMath::GetTsampmathimp() const
{
    return m_Tsampmathimp;
}

void SampleTimeMath::SetTsampmathimp(const std::string& value)
{
    m_Tsampmathimp = value;
}

const std::string& SampleTimeMath::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void SampleTimeMath::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& SampleTimeMath::GetRndmeth() const
{
    return m_Rndmeth;
}

void SampleTimeMath::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& SampleTimeMath::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void SampleTimeMath::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
