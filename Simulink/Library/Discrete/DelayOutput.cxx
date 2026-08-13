#include "DelayOutput.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DelayOutput::DelayOutput() {}

DelayOutput::~DelayOutput() {}

const std::string& DelayOutput::GetInitialcondition() const
{
    return m_Initialcondition;
}

void DelayOutput::SetInitialcondition(const std::string& value)
{
    m_Initialcondition = value;
}

const std::string& DelayOutput::GetInputprocessing() const
{
    return m_Inputprocessing;
}

void DelayOutput::SetInputprocessing(const std::string& value)
{
    m_Inputprocessing = value;
}

const std::string& DelayOutput::GetSampletime() const
{
    return m_Sampletime;
}

void DelayOutput::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& DelayOutput::GetStatename() const
{
    return m_Statename;
}

void DelayOutput::SetStatename(const std::string& value)
{
    m_Statename = value;
}

const std::string& DelayOutput::GetStatemustresolvetosignalobject() const
{
    return m_Statemustresolvetosignalobject;
}

void DelayOutput::SetStatemustresolvetosignalobject(const std::string& value)
{
    m_Statemustresolvetosignalobject = value;
}

const std::string& DelayOutput::GetStatesignalobject() const
{
    return m_Statesignalobject;
}

void DelayOutput::SetStatesignalobject(const std::string& value)
{
    m_Statesignalobject = value;
}

const std::string& DelayOutput::GetStatestorageclass() const
{
    return m_Statestorageclass;
}

void DelayOutput::SetStatestorageclass(const std::string& value)
{
    m_Statestorageclass = value;
}

const std::string& DelayOutput::GetCodegenstatestoragetypequalifier() const
{
    return m_Codegenstatestoragetypequalifier;
}

void DelayOutput::SetCodegenstatestoragetypequalifier(const std::string& value)
{
    m_Codegenstatestoragetypequalifier = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
