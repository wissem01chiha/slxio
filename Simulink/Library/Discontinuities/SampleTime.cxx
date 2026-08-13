#include "SampleTime.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SampleTime::SampleTime() {}

SampleTime::~SampleTime() {}

const std::string& SampleTime::GetTsampmathop() const
{
    return m_Tsampmathop;
}

void SampleTime::SetTsampmathop(const std::string& value)
{
    m_Tsampmathop = value;
}

const std::string& SampleTime::GetWeightvalue() const
{
    return m_Weightvalue;
}

void SampleTime::SetWeightvalue(const std::string& value)
{
    m_Weightvalue = value;
}

const std::string& SampleTime::GetTsampmathimp() const
{
    return m_Tsampmathimp;
}

void SampleTime::SetTsampmathimp(const std::string& value)
{
    m_Tsampmathimp = value;
}

const std::string& SampleTime::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void SampleTime::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& SampleTime::GetRndmeth() const
{
    return m_Rndmeth;
}

void SampleTime::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& SampleTime::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void SampleTime::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
