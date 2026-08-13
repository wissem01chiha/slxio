#include "Ud.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Ud::Ud() {}

Ud::~Ud() {}

const std::string& Ud::GetInitialcondition() const
{
    return m_Initialcondition;
}

void Ud::SetInitialcondition(const std::string& value)
{
    m_Initialcondition = value;
}

const std::string& Ud::GetInputprocessing() const
{
    return m_Inputprocessing;
}

void Ud::SetInputprocessing(const std::string& value)
{
    m_Inputprocessing = value;
}

const std::string& Ud::GetSampletime() const
{
    return m_Sampletime;
}

void Ud::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Ud::GetStatename() const
{
    return m_Statename;
}

void Ud::SetStatename(const std::string& value)
{
    m_Statename = value;
}

const std::string& Ud::GetStatemustresolvetosignalobject() const
{
    return m_Statemustresolvetosignalobject;
}

void Ud::SetStatemustresolvetosignalobject(const std::string& value)
{
    m_Statemustresolvetosignalobject = value;
}

const std::string& Ud::GetStatesignalobject() const
{
    return m_Statesignalobject;
}

void Ud::SetStatesignalobject(const std::string& value)
{
    m_Statesignalobject = value;
}

const std::string& Ud::GetStatestorageclass() const
{
    return m_Statestorageclass;
}

void Ud::SetStatestorageclass(const std::string& value)
{
    m_Statestorageclass = value;
}

const std::string& Ud::GetCodegenstatestoragetypequalifier() const
{
    return m_Codegenstatestoragetypequalifier;
}

void Ud::SetCodegenstatestoragetypequalifier(const std::string& value)
{
    m_Codegenstatestoragetypequalifier = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
