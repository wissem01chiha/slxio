#include "FixptSampleTimeMath.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FixptSampleTimeMath::FixptSampleTimeMath() {}

FixptSampleTimeMath::~FixptSampleTimeMath() {}

const std::string& FixptSampleTimeMath::GetTsampmathop() const
{
    return m_Tsampmathop;
}

void FixptSampleTimeMath::SetTsampmathop(const std::string& value)
{
    m_Tsampmathop = value;
}

const std::string& FixptSampleTimeMath::GetWeightvalue() const
{
    return m_Weightvalue;
}

void FixptSampleTimeMath::SetWeightvalue(const std::string& value)
{
    m_Weightvalue = value;
}

const std::string& FixptSampleTimeMath::GetTsampmathimp() const
{
    return m_Tsampmathimp;
}

void FixptSampleTimeMath::SetTsampmathimp(const std::string& value)
{
    m_Tsampmathimp = value;
}

const std::string& FixptSampleTimeMath::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void FixptSampleTimeMath::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& FixptSampleTimeMath::GetRndmeth() const
{
    return m_Rndmeth;
}

void FixptSampleTimeMath::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& FixptSampleTimeMath::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void FixptSampleTimeMath::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
