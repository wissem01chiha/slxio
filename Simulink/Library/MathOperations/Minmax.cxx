#include "Minmax.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Minmax::Minmax() {}

Minmax::~Minmax() {}

const std::string& Minmax::GetFunction() const
{
    return m_Function;
}

void Minmax::SetFunction(const std::string& value)
{
    m_Function = value;
}

const std::string& Minmax::GetInputs() const
{
    return m_Inputs;
}

void Minmax::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& Minmax::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Minmax::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Minmax::GetCollapsemode() const
{
    return m_Collapsemode;
}

void Minmax::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& Minmax::GetCollapsedim() const
{
    return m_Collapsedim;
}

void Minmax::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& Minmax::GetOutmin() const
{
    return m_Outmin;
}

void Minmax::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Minmax::GetOutmax() const
{
    return m_Outmax;
}

void Minmax::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Minmax::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Minmax::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Minmax::GetLockscale() const
{
    return m_Lockscale;
}

void Minmax::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Minmax::GetRndmeth() const
{
    return m_Rndmeth;
}

void Minmax::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Minmax::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Minmax::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Minmax::GetZerocross() const
{
    return m_Zerocross;
}

void Minmax::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Minmax::GetSampletime() const
{
    return m_Sampletime;
}

void Minmax::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
