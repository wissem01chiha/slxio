#include "MaxRelop.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

MaxRelop::MaxRelop() {}

MaxRelop::~MaxRelop() {}

const std::string& MaxRelop::GetOperator() const
{
    return m_Operator;
}

void MaxRelop::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& MaxRelop::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void MaxRelop::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& MaxRelop::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void MaxRelop::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& MaxRelop::GetZerocross() const
{
    return m_Zerocross;
}

void MaxRelop::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& MaxRelop::GetSampletime() const
{
    return m_Sampletime;
}

void MaxRelop::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& MaxRelop::GetRndmeth() const
{
    return m_Rndmeth;
}

void MaxRelop::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
