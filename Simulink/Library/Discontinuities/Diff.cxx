#include "Diff.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Diff::Diff() {}

Diff::~Diff() {}

const std::string& Diff::GetIconshape() const
{
    return m_Iconshape;
}

void Diff::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& Diff::GetInputs() const
{
    return m_Inputs;
}

void Diff::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& Diff::GetCollapsemode() const
{
    return m_Collapsemode;
}

void Diff::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& Diff::GetCollapsedim() const
{
    return m_Collapsedim;
}

void Diff::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& Diff::GetOutmin() const
{
    return m_Outmin;
}

void Diff::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Diff::GetOutmax() const
{
    return m_Outmax;
}

void Diff::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Diff::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Diff::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Diff::GetAccumdatatypestr() const
{
    return m_Accumdatatypestr;
}

void Diff::SetAccumdatatypestr(const std::string& value)
{
    m_Accumdatatypestr = value;
}

const std::string& Diff::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Diff::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Diff::GetLockscale() const
{
    return m_Lockscale;
}

void Diff::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Diff::GetRndmeth() const
{
    return m_Rndmeth;
}

void Diff::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Diff::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Diff::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Diff::GetSampletime() const
{
    return m_Sampletime;
}

void Diff::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
