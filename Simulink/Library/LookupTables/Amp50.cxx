#include "Amp50.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Amp50::Amp50() {}

Amp50::~Amp50() {}

const std::string& Amp50::GetIconshape() const
{
    return m_Iconshape;
}

void Amp50::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& Amp50::GetInputs() const
{
    return m_Inputs;
}

void Amp50::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& Amp50::GetCollapsemode() const
{
    return m_Collapsemode;
}

void Amp50::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& Amp50::GetCollapsedim() const
{
    return m_Collapsedim;
}

void Amp50::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& Amp50::GetOutmin() const
{
    return m_Outmin;
}

void Amp50::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Amp50::GetOutmax() const
{
    return m_Outmax;
}

void Amp50::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Amp50::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Amp50::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Amp50::GetAccumdatatypestr() const
{
    return m_Accumdatatypestr;
}

void Amp50::SetAccumdatatypestr(const std::string& value)
{
    m_Accumdatatypestr = value;
}

const std::string& Amp50::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Amp50::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Amp50::GetLockscale() const
{
    return m_Lockscale;
}

void Amp50::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Amp50::GetRndmeth() const
{
    return m_Rndmeth;
}

void Amp50::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Amp50::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Amp50::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Amp50::GetSampletime() const
{
    return m_Sampletime;
}

void Amp50::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
