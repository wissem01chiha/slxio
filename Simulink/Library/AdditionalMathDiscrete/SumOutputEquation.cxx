#include "SumOutputEquation.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SumOutputEquation::SumOutputEquation() {}

SumOutputEquation::~SumOutputEquation() {}

const std::string& SumOutputEquation::GetIconshape() const
{
    return m_Iconshape;
}

void SumOutputEquation::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& SumOutputEquation::GetInputs() const
{
    return m_Inputs;
}

void SumOutputEquation::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& SumOutputEquation::GetCollapsemode() const
{
    return m_Collapsemode;
}

void SumOutputEquation::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& SumOutputEquation::GetCollapsedim() const
{
    return m_Collapsedim;
}

void SumOutputEquation::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& SumOutputEquation::GetOutmin() const
{
    return m_Outmin;
}

void SumOutputEquation::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& SumOutputEquation::GetOutmax() const
{
    return m_Outmax;
}

void SumOutputEquation::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& SumOutputEquation::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void SumOutputEquation::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& SumOutputEquation::GetAccumdatatypestr() const
{
    return m_Accumdatatypestr;
}

void SumOutputEquation::SetAccumdatatypestr(const std::string& value)
{
    m_Accumdatatypestr = value;
}

const std::string& SumOutputEquation::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void SumOutputEquation::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& SumOutputEquation::GetLockscale() const
{
    return m_Lockscale;
}

void SumOutputEquation::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& SumOutputEquation::GetRndmeth() const
{
    return m_Rndmeth;
}

void SumOutputEquation::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& SumOutputEquation::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void SumOutputEquation::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& SumOutputEquation::GetSampletime() const
{
    return m_Sampletime;
}

void SumOutputEquation::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
