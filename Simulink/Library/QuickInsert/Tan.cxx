#include "Tan.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Tan::Tan() {}

Tan::~Tan() {}

const std::string& Tan::GetOperator() const { return m_Operator; }

void Tan::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& Tan::GetApproximationmethod() const
{
    return m_Approximationmethod;
}

void Tan::SetApproximationmethod(const std::string& value)
{
    m_Approximationmethod = value;
}

const std::string& Tan::GetNumberofiterations() const
{
    return m_Numberofiterations;
}

void Tan::SetNumberofiterations(const std::string& value)
{
    m_Numberofiterations = value;
}

const std::string& Tan::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void Tan::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& Tan::GetInterpmethod() const { return m_Interpmethod; }

void Tan::SetInterpmethod(const std::string& value) { m_Interpmethod = value; }

const std::string& Tan::GetAngleunit() const { return m_Angleunit; }

void Tan::SetAngleunit(const std::string& value) { m_Angleunit = value; }

const std::string& Tan::GetNumberofdatapoints() const
{
    return m_Numberofdatapoints;
}

void Tan::SetNumberofdatapoints(const std::string& value)
{
    m_Numberofdatapoints = value;
}

const std::string& Tan::GetTabledatatypestr() const
{
    return m_Tabledatatypestr;
}

void Tan::SetTabledatatypestr(const std::string& value)
{
    m_Tabledatatypestr = value;
}

const std::string& Tan::GetRemoveprotectionagainstoutofrangeinput() const
{
    return m_Removeprotectionagainstoutofrangeinput;
}

void Tan::SetRemoveprotectionagainstoutofrangeinput(const std::string& value)
{
    m_Removeprotectionagainstoutofrangeinput = value;
}

const std::string& Tan::GetSampletime() const { return m_Sampletime; }

void Tan::SetSampletime(const std::string& value) { m_Sampletime = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
