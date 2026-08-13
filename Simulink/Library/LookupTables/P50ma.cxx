#include "P50ma.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

P50ma::P50ma() {}

P50ma::~P50ma() {}

const std::string& P50ma::GetIconshape() const
{
    return m_Iconshape;
}

void P50ma::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& P50ma::GetInputs() const
{
    return m_Inputs;
}

void P50ma::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& P50ma::GetCollapsemode() const
{
    return m_Collapsemode;
}

void P50ma::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& P50ma::GetCollapsedim() const
{
    return m_Collapsedim;
}

void P50ma::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& P50ma::GetOutmin() const
{
    return m_Outmin;
}

void P50ma::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& P50ma::GetOutmax() const
{
    return m_Outmax;
}

void P50ma::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& P50ma::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void P50ma::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& P50ma::GetAccumdatatypestr() const
{
    return m_Accumdatatypestr;
}

void P50ma::SetAccumdatatypestr(const std::string& value)
{
    m_Accumdatatypestr = value;
}

const std::string& P50ma::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void P50ma::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& P50ma::GetLockscale() const
{
    return m_Lockscale;
}

void P50ma::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& P50ma::GetRndmeth() const
{
    return m_Rndmeth;
}

void P50ma::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& P50ma::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void P50ma::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& P50ma::GetSampletime() const
{
    return m_Sampletime;
}

void P50ma::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
