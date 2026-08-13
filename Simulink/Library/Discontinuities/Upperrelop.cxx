#include "Upperrelop.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Upperrelop::Upperrelop() {}

Upperrelop::~Upperrelop() {}

const std::string& Upperrelop::GetOperator() const
{
    return m_Operator;
}

void Upperrelop::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& Upperrelop::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Upperrelop::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Upperrelop::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Upperrelop::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Upperrelop::GetZerocross() const
{
    return m_Zerocross;
}

void Upperrelop::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Upperrelop::GetSampletime() const
{
    return m_Sampletime;
}

void Upperrelop::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Upperrelop::GetRndmeth() const
{
    return m_Rndmeth;
}

void Upperrelop::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
