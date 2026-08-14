#include "Sin.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Sin::Sin() {}

Sin::~Sin() {}

const std::string& Sin::GetOperator() const { return m_Operator; }

void Sin::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& Sin::GetApproximationmethod() const
{
    return m_Approximationmethod;
}

void Sin::SetApproximationmethod(const std::string& value)
{
    m_Approximationmethod = value;
}

const std::string& Sin::GetNumberofiterations() const
{
    return m_Numberofiterations;
}

void Sin::SetNumberofiterations(const std::string& value)
{
    m_Numberofiterations = value;
}

const std::string& Sin::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void Sin::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& Sin::GetInterpmethod() const { return m_Interpmethod; }

void Sin::SetInterpmethod(const std::string& value) { m_Interpmethod = value; }

const std::string& Sin::GetAngleunit() const { return m_Angleunit; }

void Sin::SetAngleunit(const std::string& value) { m_Angleunit = value; }

const std::string& Sin::GetNumberofdatapoints() const
{
    return m_Numberofdatapoints;
}

void Sin::SetNumberofdatapoints(const std::string& value)
{
    m_Numberofdatapoints = value;
}

const std::string& Sin::GetTabledatatypestr() const
{
    return m_Tabledatatypestr;
}

void Sin::SetTabledatatypestr(const std::string& value)
{
    m_Tabledatatypestr = value;
}

const std::string& Sin::GetRemoveprotectionagainstoutofrangeinput() const
{
    return m_Removeprotectionagainstoutofrangeinput;
}

void Sin::SetRemoveprotectionagainstoutofrangeinput(const std::string& value)
{
    m_Removeprotectionagainstoutofrangeinput = value;
}

const std::string& Sin::GetSampletime() const { return m_Sampletime; }

void Sin::SetSampletime(const std::string& value) { m_Sampletime = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
