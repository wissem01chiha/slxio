#include "Acos.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Acos::Acos() {}

Acos::~Acos() {}

const std::string& Acos::GetOperator() const { return m_Operator; }

void Acos::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& Acos::GetApproximationmethod() const
{
    return m_Approximationmethod;
}

void Acos::SetApproximationmethod(const std::string& value)
{
    m_Approximationmethod = value;
}

const std::string& Acos::GetNumberofiterations() const
{
    return m_Numberofiterations;
}

void Acos::SetNumberofiterations(const std::string& value)
{
    m_Numberofiterations = value;
}

const std::string& Acos::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void Acos::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& Acos::GetInterpmethod() const { return m_Interpmethod; }

void Acos::SetInterpmethod(const std::string& value) { m_Interpmethod = value; }

const std::string& Acos::GetAngleunit() const { return m_Angleunit; }

void Acos::SetAngleunit(const std::string& value) { m_Angleunit = value; }

const std::string& Acos::GetNumberofdatapoints() const
{
    return m_Numberofdatapoints;
}

void Acos::SetNumberofdatapoints(const std::string& value)
{
    m_Numberofdatapoints = value;
}

const std::string& Acos::GetTabledatatypestr() const
{
    return m_Tabledatatypestr;
}

void Acos::SetTabledatatypestr(const std::string& value)
{
    m_Tabledatatypestr = value;
}

const std::string& Acos::GetRemoveprotectionagainstoutofrangeinput() const
{
    return m_Removeprotectionagainstoutofrangeinput;
}

void Acos::SetRemoveprotectionagainstoutofrangeinput(const std::string& value)
{
    m_Removeprotectionagainstoutofrangeinput = value;
}

const std::string& Acos::GetSampletime() const { return m_Sampletime; }

void Acos::SetSampletime(const std::string& value) { m_Sampletime = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
