#include "DiscreteZeroPole.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

DiscreteZeroPole::DiscreteZeroPole() {}

DiscreteZeroPole::~DiscreteZeroPole() {}

const std::string& DiscreteZeroPole::GetZeros() const { return m_Zeros; }

void DiscreteZeroPole::SetZeros(const std::string& value) { m_Zeros = value; }

const std::string& DiscreteZeroPole::GetPoles() const { return m_Poles; }

void DiscreteZeroPole::SetPoles(const std::string& value) { m_Poles = value; }

const std::string& DiscreteZeroPole::GetGain() const { return m_Gain; }

void DiscreteZeroPole::SetGain(const std::string& value) { m_Gain = value; }

const std::string& DiscreteZeroPole::GetSampletime() const
{
    return m_Sampletime;
}

void DiscreteZeroPole::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& DiscreteZeroPole::GetStatename() const
{
    return m_Statename;
}

void DiscreteZeroPole::SetStatename(const std::string& value)
{
    m_Statename = value;
}

const std::string& DiscreteZeroPole::GetStatemustresolvetosignalobject() const
{
    return m_Statemustresolvetosignalobject;
}

void DiscreteZeroPole::SetStatemustresolvetosignalobject(
    const std::string& value)
{
    m_Statemustresolvetosignalobject = value;
}

const std::string& DiscreteZeroPole::GetStatesignalobject() const
{
    return m_Statesignalobject;
}

void DiscreteZeroPole::SetStatesignalobject(const std::string& value)
{
    m_Statesignalobject = value;
}

const std::string& DiscreteZeroPole::GetStatestorageclass() const
{
    return m_Statestorageclass;
}

void DiscreteZeroPole::SetStatestorageclass(const std::string& value)
{
    m_Statestorageclass = value;
}

const std::string& DiscreteZeroPole::GetRtwstatestoragetypequalifier() const
{
    return m_Rtwstatestoragetypequalifier;
}

void DiscreteZeroPole::SetRtwstatestoragetypequalifier(const std::string& value)
{
    m_Rtwstatestoragetypequalifier = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
