#include "DeltaFallLimit.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DeltaFallLimit::DeltaFallLimit() {}

DeltaFallLimit::~DeltaFallLimit() {}

const std::string& DeltaFallLimit::GetInputs() const
{
    return m_Inputs;
}

void DeltaFallLimit::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& DeltaFallLimit::GetMultiplication() const
{
    return m_Multiplication;
}

void DeltaFallLimit::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& DeltaFallLimit::GetCollapsemode() const
{
    return m_Collapsemode;
}

void DeltaFallLimit::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& DeltaFallLimit::GetCollapsedim() const
{
    return m_Collapsedim;
}

void DeltaFallLimit::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& DeltaFallLimit::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void DeltaFallLimit::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& DeltaFallLimit::GetOutmin() const
{
    return m_Outmin;
}

void DeltaFallLimit::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& DeltaFallLimit::GetOutmax() const
{
    return m_Outmax;
}

void DeltaFallLimit::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& DeltaFallLimit::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DeltaFallLimit::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& DeltaFallLimit::GetLockscale() const
{
    return m_Lockscale;
}

void DeltaFallLimit::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& DeltaFallLimit::GetRndmeth() const
{
    return m_Rndmeth;
}

void DeltaFallLimit::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& DeltaFallLimit::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void DeltaFallLimit::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& DeltaFallLimit::GetSampletime() const
{
    return m_Sampletime;
}

void DeltaFallLimit::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
