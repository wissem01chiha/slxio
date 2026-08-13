#include "Asinh.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Asinh::Asinh() {}

Asinh::~Asinh() {}

const std::string& Asinh::GetOperator() const
{
    return m_Operator;
}

void Asinh::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& Asinh::GetApproximationmethod() const
{
    return m_Approximationmethod;
}

void Asinh::SetApproximationmethod(const std::string& value)
{
    m_Approximationmethod = value;
}

const std::string& Asinh::GetNumberofiterations() const
{
    return m_Numberofiterations;
}

void Asinh::SetNumberofiterations(const std::string& value)
{
    m_Numberofiterations = value;
}

const std::string& Asinh::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void Asinh::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& Asinh::GetInterpmethod() const
{
    return m_Interpmethod;
}

void Asinh::SetInterpmethod(const std::string& value)
{
    m_Interpmethod = value;
}

const std::string& Asinh::GetAngleunit() const
{
    return m_Angleunit;
}

void Asinh::SetAngleunit(const std::string& value)
{
    m_Angleunit = value;
}

const std::string& Asinh::GetNumberofdatapoints() const
{
    return m_Numberofdatapoints;
}

void Asinh::SetNumberofdatapoints(const std::string& value)
{
    m_Numberofdatapoints = value;
}

const std::string& Asinh::GetTabledatatypestr() const
{
    return m_Tabledatatypestr;
}

void Asinh::SetTabledatatypestr(const std::string& value)
{
    m_Tabledatatypestr = value;
}

const std::string& Asinh::GetRemoveprotectionagainstoutofrangeinput() const
{
    return m_Removeprotectionagainstoutofrangeinput;
}

void Asinh::SetRemoveprotectionagainstoutofrangeinput(const std::string& value)
{
    m_Removeprotectionagainstoutofrangeinput = value;
}

const std::string& Asinh::GetSampletime() const
{
    return m_Sampletime;
}

void Asinh::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
