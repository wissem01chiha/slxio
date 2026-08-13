#include "Amp25.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Amp25::Amp25() {}

Amp25::~Amp25() {}

const std::string& Amp25::GetIconshape() const
{
    return m_Iconshape;
}

void Amp25::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& Amp25::GetInputs() const
{
    return m_Inputs;
}

void Amp25::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& Amp25::GetCollapsemode() const
{
    return m_Collapsemode;
}

void Amp25::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& Amp25::GetCollapsedim() const
{
    return m_Collapsedim;
}

void Amp25::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& Amp25::GetOutmin() const
{
    return m_Outmin;
}

void Amp25::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Amp25::GetOutmax() const
{
    return m_Outmax;
}

void Amp25::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Amp25::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Amp25::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Amp25::GetAccumdatatypestr() const
{
    return m_Accumdatatypestr;
}

void Amp25::SetAccumdatatypestr(const std::string& value)
{
    m_Accumdatatypestr = value;
}

const std::string& Amp25::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Amp25::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Amp25::GetLockscale() const
{
    return m_Lockscale;
}

void Amp25::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Amp25::GetRndmeth() const
{
    return m_Rndmeth;
}

void Amp25::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Amp25::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Amp25::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Amp25::GetSampletime() const
{
    return m_Sampletime;
}

void Amp25::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
