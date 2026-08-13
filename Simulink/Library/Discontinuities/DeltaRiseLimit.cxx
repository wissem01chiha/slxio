#include "DeltaRiseLimit.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DeltaRiseLimit::DeltaRiseLimit() {}

DeltaRiseLimit::~DeltaRiseLimit() {}

const std::string& DeltaRiseLimit::GetInputs() const
{
    return m_Inputs;
}

void DeltaRiseLimit::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& DeltaRiseLimit::GetMultiplication() const
{
    return m_Multiplication;
}

void DeltaRiseLimit::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& DeltaRiseLimit::GetCollapsemode() const
{
    return m_Collapsemode;
}

void DeltaRiseLimit::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& DeltaRiseLimit::GetCollapsedim() const
{
    return m_Collapsedim;
}

void DeltaRiseLimit::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& DeltaRiseLimit::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void DeltaRiseLimit::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& DeltaRiseLimit::GetOutmin() const
{
    return m_Outmin;
}

void DeltaRiseLimit::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& DeltaRiseLimit::GetOutmax() const
{
    return m_Outmax;
}

void DeltaRiseLimit::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& DeltaRiseLimit::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DeltaRiseLimit::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& DeltaRiseLimit::GetLockscale() const
{
    return m_Lockscale;
}

void DeltaRiseLimit::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& DeltaRiseLimit::GetRndmeth() const
{
    return m_Rndmeth;
}

void DeltaRiseLimit::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& DeltaRiseLimit::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void DeltaRiseLimit::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& DeltaRiseLimit::GetSampletime() const
{
    return m_Sampletime;
}

void DeltaRiseLimit::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
