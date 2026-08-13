#include "TrigonometricFunction.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

TrigonometricFunction::TrigonometricFunction() {}

TrigonometricFunction::~TrigonometricFunction() {}

const std::string& TrigonometricFunction::GetOperator() const
{
    return m_Operator;
}

void TrigonometricFunction::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& TrigonometricFunction::GetApproximationmethod() const
{
    return m_Approximationmethod;
}

void TrigonometricFunction::SetApproximationmethod(const std::string& value)
{
    m_Approximationmethod = value;
}

const std::string& TrigonometricFunction::GetNumberofiterations() const
{
    return m_Numberofiterations;
}

void TrigonometricFunction::SetNumberofiterations(const std::string& value)
{
    m_Numberofiterations = value;
}

const std::string& TrigonometricFunction::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void TrigonometricFunction::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& TrigonometricFunction::GetInterpmethod() const
{
    return m_Interpmethod;
}

void TrigonometricFunction::SetInterpmethod(const std::string& value)
{
    m_Interpmethod = value;
}

const std::string& TrigonometricFunction::GetAngleunit() const
{
    return m_Angleunit;
}

void TrigonometricFunction::SetAngleunit(const std::string& value)
{
    m_Angleunit = value;
}

const std::string& TrigonometricFunction::GetNumberofdatapoints() const
{
    return m_Numberofdatapoints;
}

void TrigonometricFunction::SetNumberofdatapoints(const std::string& value)
{
    m_Numberofdatapoints = value;
}

const std::string& TrigonometricFunction::GetTabledatatypestr() const
{
    return m_Tabledatatypestr;
}

void TrigonometricFunction::SetTabledatatypestr(const std::string& value)
{
    m_Tabledatatypestr = value;
}

const std::string& TrigonometricFunction::GetRemoveprotectionagainstoutofrangeinput() const
{
    return m_Removeprotectionagainstoutofrangeinput;
}

void TrigonometricFunction::SetRemoveprotectionagainstoutofrangeinput(const std::string& value)
{
    m_Removeprotectionagainstoutofrangeinput = value;
}

const std::string& TrigonometricFunction::GetSampletime() const
{
    return m_Sampletime;
}

void TrigonometricFunction::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
