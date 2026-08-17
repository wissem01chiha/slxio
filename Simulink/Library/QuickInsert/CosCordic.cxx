#include "CosCordic.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

CosCordic::CosCordic() {}

CosCordic::~CosCordic() {}

const std::string& CosCordic::GetOperator() const { return m_Operator; }

void CosCordic::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& CosCordic::GetApproximationmethod() const
{
    return m_Approximationmethod;
}

void CosCordic::SetApproximationmethod(const std::string& value)
{
    m_Approximationmethod = value;
}

const std::string& CosCordic::GetNumberofiterations() const
{
    return m_Numberofiterations;
}

void CosCordic::SetNumberofiterations(const std::string& value)
{
    m_Numberofiterations = value;
}

const std::string& CosCordic::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void CosCordic::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& CosCordic::GetInterpmethod() const { return m_Interpmethod; }

void CosCordic::SetInterpmethod(const std::string& value)
{
    m_Interpmethod = value;
}

const std::string& CosCordic::GetAngleunit() const { return m_Angleunit; }

void CosCordic::SetAngleunit(const std::string& value) { m_Angleunit = value; }

const std::string& CosCordic::GetNumberofdatapoints() const
{
    return m_Numberofdatapoints;
}

void CosCordic::SetNumberofdatapoints(const std::string& value)
{
    m_Numberofdatapoints = value;
}

const std::string& CosCordic::GetTabledatatypestr() const
{
    return m_Tabledatatypestr;
}

void CosCordic::SetTabledatatypestr(const std::string& value)
{
    m_Tabledatatypestr = value;
}

const std::string& CosCordic::GetRemoveprotectionagainstoutofrangeinput() const
{
    return m_Removeprotectionagainstoutofrangeinput;
}

void CosCordic::SetRemoveprotectionagainstoutofrangeinput(
    const std::string& value)
{
    m_Removeprotectionagainstoutofrangeinput = value;
}

const std::string& CosCordic::GetSampletime() const { return m_Sampletime; }

void CosCordic::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
