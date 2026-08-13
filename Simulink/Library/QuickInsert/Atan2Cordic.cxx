#include "Atan2Cordic.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Atan2Cordic::Atan2Cordic() {}

Atan2Cordic::~Atan2Cordic() {}

const std::string& Atan2Cordic::GetOperator() const
{
    return m_Operator;
}

void Atan2Cordic::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& Atan2Cordic::GetApproximationmethod() const
{
    return m_Approximationmethod;
}

void Atan2Cordic::SetApproximationmethod(const std::string& value)
{
    m_Approximationmethod = value;
}

const std::string& Atan2Cordic::GetNumberofiterations() const
{
    return m_Numberofiterations;
}

void Atan2Cordic::SetNumberofiterations(const std::string& value)
{
    m_Numberofiterations = value;
}

const std::string& Atan2Cordic::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void Atan2Cordic::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& Atan2Cordic::GetInterpmethod() const
{
    return m_Interpmethod;
}

void Atan2Cordic::SetInterpmethod(const std::string& value)
{
    m_Interpmethod = value;
}

const std::string& Atan2Cordic::GetAngleunit() const
{
    return m_Angleunit;
}

void Atan2Cordic::SetAngleunit(const std::string& value)
{
    m_Angleunit = value;
}

const std::string& Atan2Cordic::GetNumberofdatapoints() const
{
    return m_Numberofdatapoints;
}

void Atan2Cordic::SetNumberofdatapoints(const std::string& value)
{
    m_Numberofdatapoints = value;
}

const std::string& Atan2Cordic::GetTabledatatypestr() const
{
    return m_Tabledatatypestr;
}

void Atan2Cordic::SetTabledatatypestr(const std::string& value)
{
    m_Tabledatatypestr = value;
}

const std::string& Atan2Cordic::GetRemoveprotectionagainstoutofrangeinput() const
{
    return m_Removeprotectionagainstoutofrangeinput;
}

void Atan2Cordic::SetRemoveprotectionagainstoutofrangeinput(const std::string& value)
{
    m_Removeprotectionagainstoutofrangeinput = value;
}

const std::string& Atan2Cordic::GetSampletime() const
{
    return m_Sampletime;
}

void Atan2Cordic::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
