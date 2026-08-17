#include "WeightedSampleTimeMath.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

WeightedSampleTimeMath::WeightedSampleTimeMath() {}

WeightedSampleTimeMath::~WeightedSampleTimeMath() {}

const std::string& WeightedSampleTimeMath::GetTsampmathop() const
{
    return m_Tsampmathop;
}

void WeightedSampleTimeMath::SetTsampmathop(const std::string& value)
{
    m_Tsampmathop = value;
}

const std::string& WeightedSampleTimeMath::GetWeightvalue() const
{
    return m_Weightvalue;
}

void WeightedSampleTimeMath::SetWeightvalue(const std::string& value)
{
    m_Weightvalue = value;
}

const std::string& WeightedSampleTimeMath::GetTsampmathimp() const
{
    return m_Tsampmathimp;
}

void WeightedSampleTimeMath::SetTsampmathimp(const std::string& value)
{
    m_Tsampmathimp = value;
}

const std::string& WeightedSampleTimeMath::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void WeightedSampleTimeMath::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& WeightedSampleTimeMath::GetRndmeth() const
{
    return m_Rndmeth;
}

void WeightedSampleTimeMath::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& WeightedSampleTimeMath::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void WeightedSampleTimeMath::SetSaturateonintegeroverflow(
    const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
