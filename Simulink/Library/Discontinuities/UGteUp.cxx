#include "UGteUp.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

UGteUp::UGteUp() {}

UGteUp::~UGteUp() {}

const std::string& UGteUp::GetOperator() const
{
    return m_Operator;
}

void UGteUp::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& UGteUp::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void UGteUp::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& UGteUp::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void UGteUp::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& UGteUp::GetZerocross() const
{
    return m_Zerocross;
}

void UGteUp::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& UGteUp::GetSampletime() const
{
    return m_Sampletime;
}

void UGteUp::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& UGteUp::GetRndmeth() const
{
    return m_Rndmeth;
}

void UGteUp::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
