#include "Lt.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Lt::Lt() {}

Lt::~Lt() {}

const std::string& Lt::GetOperator() const
{
    return m_Operator;
}

void Lt::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& Lt::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Lt::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Lt::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Lt::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Lt::GetZerocross() const
{
    return m_Zerocross;
}

void Lt::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Lt::GetSampletime() const
{
    return m_Sampletime;
}

void Lt::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Lt::GetRndmeth() const
{
    return m_Rndmeth;
}

void Lt::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
