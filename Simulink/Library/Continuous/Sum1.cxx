#include "Sum1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Sum1::Sum1() {}

Sum1::~Sum1() {}

const std::string& Sum1::GetIconshape() const
{
    return m_Iconshape;
}

void Sum1::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& Sum1::GetInputs() const
{
    return m_Inputs;
}

void Sum1::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& Sum1::GetCollapsemode() const
{
    return m_Collapsemode;
}

void Sum1::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& Sum1::GetCollapsedim() const
{
    return m_Collapsedim;
}

void Sum1::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& Sum1::GetOutmin() const
{
    return m_Outmin;
}

void Sum1::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Sum1::GetOutmax() const
{
    return m_Outmax;
}

void Sum1::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Sum1::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Sum1::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Sum1::GetAccumdatatypestr() const
{
    return m_Accumdatatypestr;
}

void Sum1::SetAccumdatatypestr(const std::string& value)
{
    m_Accumdatatypestr = value;
}

const std::string& Sum1::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Sum1::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Sum1::GetLockscale() const
{
    return m_Lockscale;
}

void Sum1::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Sum1::GetRndmeth() const
{
    return m_Rndmeth;
}

void Sum1::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Sum1::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Sum1::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Sum1::GetSampletime() const
{
    return m_Sampletime;
}

void Sum1::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
