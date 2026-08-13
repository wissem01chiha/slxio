#include "Memory.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Memory::Memory() {}

Memory::~Memory() {}

const std::string& Memory::GetInitialcondition() const
{
    return m_Initialcondition;
}

void Memory::SetInitialcondition(const std::string& value)
{
    m_Initialcondition = value;
}

const std::string& Memory::GetInheritsampletime() const
{
    return m_Inheritsampletime;
}

void Memory::SetInheritsampletime(const std::string& value)
{
    m_Inheritsampletime = value;
}

const std::string& Memory::GetLinearizememory() const
{
    return m_Linearizememory;
}

void Memory::SetLinearizememory(const std::string& value)
{
    m_Linearizememory = value;
}

const std::string& Memory::GetLinearizeasdelay() const
{
    return m_Linearizeasdelay;
}

void Memory::SetLinearizeasdelay(const std::string& value)
{
    m_Linearizeasdelay = value;
}

const std::string& Memory::GetStatename() const
{
    return m_Statename;
}

void Memory::SetStatename(const std::string& value)
{
    m_Statename = value;
}

const std::string& Memory::GetStatemustresolvetosignalobject() const
{
    return m_Statemustresolvetosignalobject;
}

void Memory::SetStatemustresolvetosignalobject(const std::string& value)
{
    m_Statemustresolvetosignalobject = value;
}

const std::string& Memory::GetStatesignalobject() const
{
    return m_Statesignalobject;
}

void Memory::SetStatesignalobject(const std::string& value)
{
    m_Statesignalobject = value;
}

const std::string& Memory::GetStatestorageclass() const
{
    return m_Statestorageclass;
}

void Memory::SetStatestorageclass(const std::string& value)
{
    m_Statestorageclass = value;
}

const std::string& Memory::GetRtwstatestoragetypequalifier() const
{
    return m_Rtwstatestoragetypequalifier;
}

void Memory::SetRtwstatestoragetypequalifier(const std::string& value)
{
    m_Rtwstatestoragetypequalifier = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
