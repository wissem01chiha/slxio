#include "Acosh.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Acosh::Acosh() {}

Acosh::~Acosh() {}

const std::string& Acosh::GetOperator() const { return m_Operator; }

void Acosh::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& Acosh::GetApproximationmethod() const
{
    return m_Approximationmethod;
}

void Acosh::SetApproximationmethod(const std::string& value)
{
    m_Approximationmethod = value;
}

const std::string& Acosh::GetNumberofiterations() const
{
    return m_Numberofiterations;
}

void Acosh::SetNumberofiterations(const std::string& value)
{
    m_Numberofiterations = value;
}

const std::string& Acosh::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void Acosh::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& Acosh::GetInterpmethod() const { return m_Interpmethod; }

void Acosh::SetInterpmethod(const std::string& value)
{
    m_Interpmethod = value;
}

const std::string& Acosh::GetAngleunit() const { return m_Angleunit; }

void Acosh::SetAngleunit(const std::string& value) { m_Angleunit = value; }

const std::string& Acosh::GetNumberofdatapoints() const
{
    return m_Numberofdatapoints;
}

void Acosh::SetNumberofdatapoints(const std::string& value)
{
    m_Numberofdatapoints = value;
}

const std::string& Acosh::GetTabledatatypestr() const
{
    return m_Tabledatatypestr;
}

void Acosh::SetTabledatatypestr(const std::string& value)
{
    m_Tabledatatypestr = value;
}

const std::string& Acosh::GetRemoveprotectionagainstoutofrangeinput() const
{
    return m_Removeprotectionagainstoutofrangeinput;
}

void Acosh::SetRemoveprotectionagainstoutofrangeinput(const std::string& value)
{
    m_Removeprotectionagainstoutofrangeinput = value;
}

const std::string& Acosh::GetSampletime() const { return m_Sampletime; }

void Acosh::SetSampletime(const std::string& value) { m_Sampletime = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
