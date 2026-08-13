#include "DelayStateX.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DelayStateX::DelayStateX() {}

DelayStateX::~DelayStateX() {}

const std::string& DelayStateX::GetInitialcondition() const
{
    return m_Initialcondition;
}

void DelayStateX::SetInitialcondition(const std::string& value)
{
    m_Initialcondition = value;
}

const std::string& DelayStateX::GetInputprocessing() const
{
    return m_Inputprocessing;
}

void DelayStateX::SetInputprocessing(const std::string& value)
{
    m_Inputprocessing = value;
}

const std::string& DelayStateX::GetSampletime() const
{
    return m_Sampletime;
}

void DelayStateX::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& DelayStateX::GetStatename() const
{
    return m_Statename;
}

void DelayStateX::SetStatename(const std::string& value)
{
    m_Statename = value;
}

const std::string& DelayStateX::GetStatemustresolvetosignalobject() const
{
    return m_Statemustresolvetosignalobject;
}

void DelayStateX::SetStatemustresolvetosignalobject(const std::string& value)
{
    m_Statemustresolvetosignalobject = value;
}

const std::string& DelayStateX::GetStatesignalobject() const
{
    return m_Statesignalobject;
}

void DelayStateX::SetStatesignalobject(const std::string& value)
{
    m_Statesignalobject = value;
}

const std::string& DelayStateX::GetStatestorageclass() const
{
    return m_Statestorageclass;
}

void DelayStateX::SetStatestorageclass(const std::string& value)
{
    m_Statestorageclass = value;
}

const std::string& DelayStateX::GetCodegenstatestoragetypequalifier() const
{
    return m_Codegenstatestoragetypequalifier;
}

void DelayStateX::SetCodegenstatestoragetypequalifier(const std::string& value)
{
    m_Codegenstatestoragetypequalifier = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
