#include "SumOfElements.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SumOfElements::SumOfElements() {}

SumOfElements::~SumOfElements() {}

const std::string& SumOfElements::GetIconshape() const
{
    return m_Iconshape;
}

void SumOfElements::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& SumOfElements::GetInputs() const
{
    return m_Inputs;
}

void SumOfElements::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& SumOfElements::GetCollapsemode() const
{
    return m_Collapsemode;
}

void SumOfElements::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& SumOfElements::GetCollapsedim() const
{
    return m_Collapsedim;
}

void SumOfElements::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& SumOfElements::GetOutmin() const
{
    return m_Outmin;
}

void SumOfElements::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& SumOfElements::GetOutmax() const
{
    return m_Outmax;
}

void SumOfElements::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& SumOfElements::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void SumOfElements::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& SumOfElements::GetAccumdatatypestr() const
{
    return m_Accumdatatypestr;
}

void SumOfElements::SetAccumdatatypestr(const std::string& value)
{
    m_Accumdatatypestr = value;
}

const std::string& SumOfElements::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void SumOfElements::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& SumOfElements::GetLockscale() const
{
    return m_Lockscale;
}

void SumOfElements::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& SumOfElements::GetRndmeth() const
{
    return m_Rndmeth;
}

void SumOfElements::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& SumOfElements::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void SumOfElements::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& SumOfElements::GetSampletime() const
{
    return m_Sampletime;
}

void SumOfElements::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
