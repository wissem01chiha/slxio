#include "Sincos.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Sincos::Sincos() {}

Sincos::~Sincos() {}

const std::string& Sincos::GetOperator() const { return m_Operator; }

void Sincos::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& Sincos::GetApproximationmethod() const
{
    return m_Approximationmethod;
}

void Sincos::SetApproximationmethod(const std::string& value)
{
    m_Approximationmethod = value;
}

const std::string& Sincos::GetNumberofiterations() const
{
    return m_Numberofiterations;
}

void Sincos::SetNumberofiterations(const std::string& value)
{
    m_Numberofiterations = value;
}

const std::string& Sincos::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void Sincos::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& Sincos::GetInterpmethod() const { return m_Interpmethod; }

void Sincos::SetInterpmethod(const std::string& value)
{
    m_Interpmethod = value;
}

const std::string& Sincos::GetAngleunit() const { return m_Angleunit; }

void Sincos::SetAngleunit(const std::string& value) { m_Angleunit = value; }

const std::string& Sincos::GetNumberofdatapoints() const
{
    return m_Numberofdatapoints;
}

void Sincos::SetNumberofdatapoints(const std::string& value)
{
    m_Numberofdatapoints = value;
}

const std::string& Sincos::GetTabledatatypestr() const
{
    return m_Tabledatatypestr;
}

void Sincos::SetTabledatatypestr(const std::string& value)
{
    m_Tabledatatypestr = value;
}

const std::string& Sincos::GetRemoveprotectionagainstoutofrangeinput() const
{
    return m_Removeprotectionagainstoutofrangeinput;
}

void Sincos::SetRemoveprotectionagainstoutofrangeinput(const std::string& value)
{
    m_Removeprotectionagainstoutofrangeinput = value;
}

const std::string& Sincos::GetSampletime() const { return m_Sampletime; }

void Sincos::SetSampletime(const std::string& value) { m_Sampletime = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
