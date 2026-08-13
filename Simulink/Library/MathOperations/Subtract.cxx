#include "Subtract.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Subtract::Subtract() {}

Subtract::~Subtract() {}

const std::string& Subtract::GetIconshape() const
{
    return m_Iconshape;
}

void Subtract::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& Subtract::GetInputs() const
{
    return m_Inputs;
}

void Subtract::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& Subtract::GetCollapsemode() const
{
    return m_Collapsemode;
}

void Subtract::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& Subtract::GetCollapsedim() const
{
    return m_Collapsedim;
}

void Subtract::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& Subtract::GetOutmin() const
{
    return m_Outmin;
}

void Subtract::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Subtract::GetOutmax() const
{
    return m_Outmax;
}

void Subtract::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Subtract::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Subtract::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Subtract::GetAccumdatatypestr() const
{
    return m_Accumdatatypestr;
}

void Subtract::SetAccumdatatypestr(const std::string& value)
{
    m_Accumdatatypestr = value;
}

const std::string& Subtract::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Subtract::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Subtract::GetLockscale() const
{
    return m_Lockscale;
}

void Subtract::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Subtract::GetRndmeth() const
{
    return m_Rndmeth;
}

void Subtract::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Subtract::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Subtract::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Subtract::GetSampletime() const
{
    return m_Sampletime;
}

void Subtract::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
