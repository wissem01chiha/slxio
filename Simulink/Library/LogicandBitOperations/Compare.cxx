#include "Compare.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Compare::Compare() {}

Compare::~Compare() {}

const std::string& Compare::GetOperator() const
{
    return m_Operator;
}

void Compare::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& Compare::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Compare::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Compare::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Compare::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Compare::GetZerocross() const
{
    return m_Zerocross;
}

void Compare::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Compare::GetSampletime() const
{
    return m_Sampletime;
}

void Compare::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Compare::GetRndmeth() const
{
    return m_Rndmeth;
}

void Compare::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
