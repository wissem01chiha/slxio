#include "Sumd.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Sumd::Sumd() {}

Sumd::~Sumd() {}

const std::string& Sumd::GetIconshape() const
{
    return m_Iconshape;
}

void Sumd::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& Sumd::GetInputs() const
{
    return m_Inputs;
}

void Sumd::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& Sumd::GetCollapsemode() const
{
    return m_Collapsemode;
}

void Sumd::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& Sumd::GetCollapsedim() const
{
    return m_Collapsedim;
}

void Sumd::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& Sumd::GetOutmin() const
{
    return m_Outmin;
}

void Sumd::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Sumd::GetOutmax() const
{
    return m_Outmax;
}

void Sumd::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Sumd::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Sumd::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Sumd::GetAccumdatatypestr() const
{
    return m_Accumdatatypestr;
}

void Sumd::SetAccumdatatypestr(const std::string& value)
{
    m_Accumdatatypestr = value;
}

const std::string& Sumd::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Sumd::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Sumd::GetLockscale() const
{
    return m_Lockscale;
}

void Sumd::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Sumd::GetRndmeth() const
{
    return m_Rndmeth;
}

void Sumd::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Sumd::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Sumd::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Sumd::GetSampletime() const
{
    return m_Sampletime;
}

void Sumd::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
