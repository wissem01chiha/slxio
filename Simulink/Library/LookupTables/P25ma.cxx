#include "P25ma.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

P25ma::P25ma() {}

P25ma::~P25ma() {}

const std::string& P25ma::GetIconshape() const
{
    return m_Iconshape;
}

void P25ma::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& P25ma::GetInputs() const
{
    return m_Inputs;
}

void P25ma::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& P25ma::GetCollapsemode() const
{
    return m_Collapsemode;
}

void P25ma::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& P25ma::GetCollapsedim() const
{
    return m_Collapsedim;
}

void P25ma::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& P25ma::GetOutmin() const
{
    return m_Outmin;
}

void P25ma::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& P25ma::GetOutmax() const
{
    return m_Outmax;
}

void P25ma::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& P25ma::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void P25ma::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& P25ma::GetAccumdatatypestr() const
{
    return m_Accumdatatypestr;
}

void P25ma::SetAccumdatatypestr(const std::string& value)
{
    m_Accumdatatypestr = value;
}

const std::string& P25ma::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void P25ma::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& P25ma::GetLockscale() const
{
    return m_Lockscale;
}

void P25ma::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& P25ma::GetRndmeth() const
{
    return m_Rndmeth;
}

void P25ma::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& P25ma::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void P25ma::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& P25ma::GetSampletime() const
{
    return m_Sampletime;
}

void P25ma::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
