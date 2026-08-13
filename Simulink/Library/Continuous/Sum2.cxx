#include "Sum2.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Sum2::Sum2() {}

Sum2::~Sum2() {}

const std::string& Sum2::GetIconshape() const
{
    return m_Iconshape;
}

void Sum2::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& Sum2::GetInputs() const
{
    return m_Inputs;
}

void Sum2::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& Sum2::GetCollapsemode() const
{
    return m_Collapsemode;
}

void Sum2::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& Sum2::GetCollapsedim() const
{
    return m_Collapsedim;
}

void Sum2::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& Sum2::GetOutmin() const
{
    return m_Outmin;
}

void Sum2::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Sum2::GetOutmax() const
{
    return m_Outmax;
}

void Sum2::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Sum2::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Sum2::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Sum2::GetAccumdatatypestr() const
{
    return m_Accumdatatypestr;
}

void Sum2::SetAccumdatatypestr(const std::string& value)
{
    m_Accumdatatypestr = value;
}

const std::string& Sum2::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Sum2::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Sum2::GetLockscale() const
{
    return m_Lockscale;
}

void Sum2::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Sum2::GetRndmeth() const
{
    return m_Rndmeth;
}

void Sum2::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Sum2::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Sum2::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Sum2::GetSampletime() const
{
    return m_Sampletime;
}

void Sum2::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
