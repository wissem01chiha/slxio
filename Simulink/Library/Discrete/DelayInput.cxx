#include "DelayInput.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DelayInput::DelayInput() {}

DelayInput::~DelayInput() {}

const std::string& DelayInput::GetInitialcondition() const
{
    return m_Initialcondition;
}

void DelayInput::SetInitialcondition(const std::string& value)
{
    m_Initialcondition = value;
}

const std::string& DelayInput::GetInputprocessing() const
{
    return m_Inputprocessing;
}

void DelayInput::SetInputprocessing(const std::string& value)
{
    m_Inputprocessing = value;
}

const std::string& DelayInput::GetSampletime() const
{
    return m_Sampletime;
}

void DelayInput::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& DelayInput::GetStatename() const
{
    return m_Statename;
}

void DelayInput::SetStatename(const std::string& value)
{
    m_Statename = value;
}

const std::string& DelayInput::GetStatemustresolvetosignalobject() const
{
    return m_Statemustresolvetosignalobject;
}

void DelayInput::SetStatemustresolvetosignalobject(const std::string& value)
{
    m_Statemustresolvetosignalobject = value;
}

const std::string& DelayInput::GetStatesignalobject() const
{
    return m_Statesignalobject;
}

void DelayInput::SetStatesignalobject(const std::string& value)
{
    m_Statesignalobject = value;
}

const std::string& DelayInput::GetStatestorageclass() const
{
    return m_Statestorageclass;
}

void DelayInput::SetStatestorageclass(const std::string& value)
{
    m_Statestorageclass = value;
}

const std::string& DelayInput::GetCodegenstatestoragetypequalifier() const
{
    return m_Codegenstatestoragetypequalifier;
}

void DelayInput::SetCodegenstatestoragetypequalifier(const std::string& value)
{
    m_Codegenstatestoragetypequalifier = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
