#include "Sinh.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Sinh::Sinh() {}

Sinh::~Sinh() {}

const std::string& Sinh::GetOperator() const { return m_Operator; }

void Sinh::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& Sinh::GetApproximationmethod() const
{
    return m_Approximationmethod;
}

void Sinh::SetApproximationmethod(const std::string& value)
{
    m_Approximationmethod = value;
}

const std::string& Sinh::GetNumberofiterations() const
{
    return m_Numberofiterations;
}

void Sinh::SetNumberofiterations(const std::string& value)
{
    m_Numberofiterations = value;
}

const std::string& Sinh::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void Sinh::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& Sinh::GetInterpmethod() const { return m_Interpmethod; }

void Sinh::SetInterpmethod(const std::string& value) { m_Interpmethod = value; }

const std::string& Sinh::GetAngleunit() const { return m_Angleunit; }

void Sinh::SetAngleunit(const std::string& value) { m_Angleunit = value; }

const std::string& Sinh::GetNumberofdatapoints() const
{
    return m_Numberofdatapoints;
}

void Sinh::SetNumberofdatapoints(const std::string& value)
{
    m_Numberofdatapoints = value;
}

const std::string& Sinh::GetTabledatatypestr() const
{
    return m_Tabledatatypestr;
}

void Sinh::SetTabledatatypestr(const std::string& value)
{
    m_Tabledatatypestr = value;
}

const std::string& Sinh::GetRemoveprotectionagainstoutofrangeinput() const
{
    return m_Removeprotectionagainstoutofrangeinput;
}

void Sinh::SetRemoveprotectionagainstoutofrangeinput(const std::string& value)
{
    m_Removeprotectionagainstoutofrangeinput = value;
}

const std::string& Sinh::GetSampletime() const { return m_Sampletime; }

void Sinh::SetSampletime(const std::string& value) { m_Sampletime = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
