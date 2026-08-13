#include "DiscreteDerivative.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DiscreteDerivative::DiscreteDerivative() {}

DiscreteDerivative::~DiscreteDerivative() {}

const std::string& DiscreteDerivative::GetGainval() const
{
    return m_Gainval;
}

void DiscreteDerivative::SetGainval(const std::string& value)
{
    m_Gainval = value;
}

const std::string& DiscreteDerivative::GetIcprevscaledinput() const
{
    return m_Icprevscaledinput;
}

void DiscreteDerivative::SetIcprevscaledinput(const std::string& value)
{
    m_Icprevscaledinput = value;
}

const std::string& DiscreteDerivative::GetInputprocessing() const
{
    return m_Inputprocessing;
}

void DiscreteDerivative::SetInputprocessing(const std::string& value)
{
    m_Inputprocessing = value;
}

const std::string& DiscreteDerivative::GetOutmin() const
{
    return m_Outmin;
}

void DiscreteDerivative::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& DiscreteDerivative::GetOutmax() const
{
    return m_Outmax;
}

void DiscreteDerivative::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& DiscreteDerivative::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DiscreteDerivative::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& DiscreteDerivative::GetLockscale() const
{
    return m_Lockscale;
}

void DiscreteDerivative::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& DiscreteDerivative::GetRndmeth() const
{
    return m_Rndmeth;
}

void DiscreteDerivative::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& DiscreteDerivative::GetDosatur() const
{
    return m_Dosatur;
}

void DiscreteDerivative::SetDosatur(const std::string& value)
{
    m_Dosatur = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
