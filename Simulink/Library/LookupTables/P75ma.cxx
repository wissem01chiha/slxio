#include "P75ma.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

P75ma::P75ma() {}

P75ma::~P75ma() {}

const std::string& P75ma::GetIconshape() const
{
    return m_Iconshape;
}

void P75ma::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& P75ma::GetInputs() const
{
    return m_Inputs;
}

void P75ma::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& P75ma::GetCollapsemode() const
{
    return m_Collapsemode;
}

void P75ma::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& P75ma::GetCollapsedim() const
{
    return m_Collapsedim;
}

void P75ma::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& P75ma::GetOutmin() const
{
    return m_Outmin;
}

void P75ma::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& P75ma::GetOutmax() const
{
    return m_Outmax;
}

void P75ma::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& P75ma::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void P75ma::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& P75ma::GetAccumdatatypestr() const
{
    return m_Accumdatatypestr;
}

void P75ma::SetAccumdatatypestr(const std::string& value)
{
    m_Accumdatatypestr = value;
}

const std::string& P75ma::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void P75ma::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& P75ma::GetLockscale() const
{
    return m_Lockscale;
}

void P75ma::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& P75ma::GetRndmeth() const
{
    return m_Rndmeth;
}

void P75ma::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& P75ma::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void P75ma::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& P75ma::GetSampletime() const
{
    return m_Sampletime;
}

void P75ma::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
