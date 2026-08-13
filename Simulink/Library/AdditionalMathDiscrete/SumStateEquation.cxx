#include "SumStateEquation.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SumStateEquation::SumStateEquation() {}

SumStateEquation::~SumStateEquation() {}

const std::string& SumStateEquation::GetIconshape() const
{
    return m_Iconshape;
}

void SumStateEquation::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& SumStateEquation::GetInputs() const
{
    return m_Inputs;
}

void SumStateEquation::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& SumStateEquation::GetCollapsemode() const
{
    return m_Collapsemode;
}

void SumStateEquation::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& SumStateEquation::GetCollapsedim() const
{
    return m_Collapsedim;
}

void SumStateEquation::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& SumStateEquation::GetOutmin() const
{
    return m_Outmin;
}

void SumStateEquation::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& SumStateEquation::GetOutmax() const
{
    return m_Outmax;
}

void SumStateEquation::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& SumStateEquation::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void SumStateEquation::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& SumStateEquation::GetAccumdatatypestr() const
{
    return m_Accumdatatypestr;
}

void SumStateEquation::SetAccumdatatypestr(const std::string& value)
{
    m_Accumdatatypestr = value;
}

const std::string& SumStateEquation::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void SumStateEquation::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& SumStateEquation::GetLockscale() const
{
    return m_Lockscale;
}

void SumStateEquation::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& SumStateEquation::GetRndmeth() const
{
    return m_Rndmeth;
}

void SumStateEquation::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& SumStateEquation::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void SumStateEquation::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& SumStateEquation::GetSampletime() const
{
    return m_Sampletime;
}

void SumStateEquation::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
