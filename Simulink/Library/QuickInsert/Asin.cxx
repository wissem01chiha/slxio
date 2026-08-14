#include "Asin.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Asin::Asin() {}

Asin::~Asin() {}

const std::string& Asin::GetOperator() const { return m_Operator; }

void Asin::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& Asin::GetApproximationmethod() const
{
    return m_Approximationmethod;
}

void Asin::SetApproximationmethod(const std::string& value)
{
    m_Approximationmethod = value;
}

const std::string& Asin::GetNumberofiterations() const
{
    return m_Numberofiterations;
}

void Asin::SetNumberofiterations(const std::string& value)
{
    m_Numberofiterations = value;
}

const std::string& Asin::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void Asin::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& Asin::GetInterpmethod() const { return m_Interpmethod; }

void Asin::SetInterpmethod(const std::string& value) { m_Interpmethod = value; }

const std::string& Asin::GetAngleunit() const { return m_Angleunit; }

void Asin::SetAngleunit(const std::string& value) { m_Angleunit = value; }

const std::string& Asin::GetNumberofdatapoints() const
{
    return m_Numberofdatapoints;
}

void Asin::SetNumberofdatapoints(const std::string& value)
{
    m_Numberofdatapoints = value;
}

const std::string& Asin::GetTabledatatypestr() const
{
    return m_Tabledatatypestr;
}

void Asin::SetTabledatatypestr(const std::string& value)
{
    m_Tabledatatypestr = value;
}

const std::string& Asin::GetRemoveprotectionagainstoutofrangeinput() const
{
    return m_Removeprotectionagainstoutofrangeinput;
}

void Asin::SetRemoveprotectionagainstoutofrangeinput(const std::string& value)
{
    m_Removeprotectionagainstoutofrangeinput = value;
}

const std::string& Asin::GetSampletime() const { return m_Sampletime; }

void Asin::SetSampletime(const std::string& value) { m_Sampletime = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
