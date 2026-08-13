#include "Sum3.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Sum3::Sum3() {}

Sum3::~Sum3() {}

const std::string& Sum3::GetIconshape() const
{
    return m_Iconshape;
}

void Sum3::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& Sum3::GetInputs() const
{
    return m_Inputs;
}

void Sum3::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& Sum3::GetCollapsemode() const
{
    return m_Collapsemode;
}

void Sum3::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& Sum3::GetCollapsedim() const
{
    return m_Collapsedim;
}

void Sum3::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& Sum3::GetOutmin() const
{
    return m_Outmin;
}

void Sum3::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Sum3::GetOutmax() const
{
    return m_Outmax;
}

void Sum3::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Sum3::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Sum3::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Sum3::GetAccumdatatypestr() const
{
    return m_Accumdatatypestr;
}

void Sum3::SetAccumdatatypestr(const std::string& value)
{
    m_Accumdatatypestr = value;
}

const std::string& Sum3::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Sum3::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Sum3::GetLockscale() const
{
    return m_Lockscale;
}

void Sum3::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Sum3::GetRndmeth() const
{
    return m_Rndmeth;
}

void Sum3::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Sum3::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Sum3::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Sum3::GetSampletime() const
{
    return m_Sampletime;
}

void Sum3::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
