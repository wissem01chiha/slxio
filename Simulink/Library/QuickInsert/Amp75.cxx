#include "Amp75.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Amp75::Amp75() {}

Amp75::~Amp75() {}

const std::string& Amp75::GetIconshape() const
{
    return m_Iconshape;
}

void Amp75::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& Amp75::GetInputs() const
{
    return m_Inputs;
}

void Amp75::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& Amp75::GetCollapsemode() const
{
    return m_Collapsemode;
}

void Amp75::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& Amp75::GetCollapsedim() const
{
    return m_Collapsedim;
}

void Amp75::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& Amp75::GetOutmin() const
{
    return m_Outmin;
}

void Amp75::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Amp75::GetOutmax() const
{
    return m_Outmax;
}

void Amp75::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Amp75::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Amp75::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Amp75::GetAccumdatatypestr() const
{
    return m_Accumdatatypestr;
}

void Amp75::SetAccumdatatypestr(const std::string& value)
{
    m_Accumdatatypestr = value;
}

const std::string& Amp75::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Amp75::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Amp75::GetLockscale() const
{
    return m_Lockscale;
}

void Amp75::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Amp75::GetRndmeth() const
{
    return m_Rndmeth;
}

void Amp75::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Amp75::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Amp75::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Amp75::GetSampletime() const
{
    return m_Sampletime;
}

void Amp75::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
