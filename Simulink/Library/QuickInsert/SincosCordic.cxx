#include "SincosCordic.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SincosCordic::SincosCordic() {}

SincosCordic::~SincosCordic() {}

const std::string& SincosCordic::GetOperator() const
{
    return m_Operator;
}

void SincosCordic::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& SincosCordic::GetApproximationmethod() const
{
    return m_Approximationmethod;
}

void SincosCordic::SetApproximationmethod(const std::string& value)
{
    m_Approximationmethod = value;
}

const std::string& SincosCordic::GetNumberofiterations() const
{
    return m_Numberofiterations;
}

void SincosCordic::SetNumberofiterations(const std::string& value)
{
    m_Numberofiterations = value;
}

const std::string& SincosCordic::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void SincosCordic::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& SincosCordic::GetInterpmethod() const
{
    return m_Interpmethod;
}

void SincosCordic::SetInterpmethod(const std::string& value)
{
    m_Interpmethod = value;
}

const std::string& SincosCordic::GetAngleunit() const
{
    return m_Angleunit;
}

void SincosCordic::SetAngleunit(const std::string& value)
{
    m_Angleunit = value;
}

const std::string& SincosCordic::GetNumberofdatapoints() const
{
    return m_Numberofdatapoints;
}

void SincosCordic::SetNumberofdatapoints(const std::string& value)
{
    m_Numberofdatapoints = value;
}

const std::string& SincosCordic::GetTabledatatypestr() const
{
    return m_Tabledatatypestr;
}

void SincosCordic::SetTabledatatypestr(const std::string& value)
{
    m_Tabledatatypestr = value;
}

const std::string& SincosCordic::GetRemoveprotectionagainstoutofrangeinput() const
{
    return m_Removeprotectionagainstoutofrangeinput;
}

void SincosCordic::SetRemoveprotectionagainstoutofrangeinput(const std::string& value)
{
    m_Removeprotectionagainstoutofrangeinput = value;
}

const std::string& SincosCordic::GetSampletime() const
{
    return m_Sampletime;
}

void SincosCordic::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
