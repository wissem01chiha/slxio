#include "Atanh.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Atanh::Atanh() {}

Atanh::~Atanh() {}

const std::string& Atanh::GetOperator() const
{
    return m_Operator;
}

void Atanh::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& Atanh::GetApproximationmethod() const
{
    return m_Approximationmethod;
}

void Atanh::SetApproximationmethod(const std::string& value)
{
    m_Approximationmethod = value;
}

const std::string& Atanh::GetNumberofiterations() const
{
    return m_Numberofiterations;
}

void Atanh::SetNumberofiterations(const std::string& value)
{
    m_Numberofiterations = value;
}

const std::string& Atanh::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void Atanh::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& Atanh::GetInterpmethod() const
{
    return m_Interpmethod;
}

void Atanh::SetInterpmethod(const std::string& value)
{
    m_Interpmethod = value;
}

const std::string& Atanh::GetAngleunit() const
{
    return m_Angleunit;
}

void Atanh::SetAngleunit(const std::string& value)
{
    m_Angleunit = value;
}

const std::string& Atanh::GetNumberofdatapoints() const
{
    return m_Numberofdatapoints;
}

void Atanh::SetNumberofdatapoints(const std::string& value)
{
    m_Numberofdatapoints = value;
}

const std::string& Atanh::GetTabledatatypestr() const
{
    return m_Tabledatatypestr;
}

void Atanh::SetTabledatatypestr(const std::string& value)
{
    m_Tabledatatypestr = value;
}

const std::string& Atanh::GetRemoveprotectionagainstoutofrangeinput() const
{
    return m_Removeprotectionagainstoutofrangeinput;
}

void Atanh::SetRemoveprotectionagainstoutofrangeinput(const std::string& value)
{
    m_Removeprotectionagainstoutofrangeinput = value;
}

const std::string& Atanh::GetSampletime() const
{
    return m_Sampletime;
}

void Atanh::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
