#include "Tsamp.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Tsamp::Tsamp() {}

Tsamp::~Tsamp() {}

const std::string& Tsamp::GetTsampmathop() const
{
    return m_Tsampmathop;
}

void Tsamp::SetTsampmathop(const std::string& value)
{
    m_Tsampmathop = value;
}

const std::string& Tsamp::GetWeightvalue() const
{
    return m_Weightvalue;
}

void Tsamp::SetWeightvalue(const std::string& value)
{
    m_Weightvalue = value;
}

const std::string& Tsamp::GetTsampmathimp() const
{
    return m_Tsampmathimp;
}

void Tsamp::SetTsampmathimp(const std::string& value)
{
    m_Tsampmathimp = value;
}

const std::string& Tsamp::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Tsamp::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Tsamp::GetRndmeth() const
{
    return m_Rndmeth;
}

void Tsamp::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Tsamp::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Tsamp::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
