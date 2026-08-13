#include "DifferenceInputs1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DifferenceInputs1::DifferenceInputs1() {}

DifferenceInputs1::~DifferenceInputs1() {}

const std::string& DifferenceInputs1::GetIconshape() const
{
    return m_Iconshape;
}

void DifferenceInputs1::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& DifferenceInputs1::GetInputs() const
{
    return m_Inputs;
}

void DifferenceInputs1::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& DifferenceInputs1::GetCollapsemode() const
{
    return m_Collapsemode;
}

void DifferenceInputs1::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& DifferenceInputs1::GetCollapsedim() const
{
    return m_Collapsedim;
}

void DifferenceInputs1::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& DifferenceInputs1::GetOutmin() const
{
    return m_Outmin;
}

void DifferenceInputs1::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& DifferenceInputs1::GetOutmax() const
{
    return m_Outmax;
}

void DifferenceInputs1::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& DifferenceInputs1::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DifferenceInputs1::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& DifferenceInputs1::GetAccumdatatypestr() const
{
    return m_Accumdatatypestr;
}

void DifferenceInputs1::SetAccumdatatypestr(const std::string& value)
{
    m_Accumdatatypestr = value;
}

const std::string& DifferenceInputs1::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void DifferenceInputs1::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& DifferenceInputs1::GetLockscale() const
{
    return m_Lockscale;
}

void DifferenceInputs1::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& DifferenceInputs1::GetRndmeth() const
{
    return m_Rndmeth;
}

void DifferenceInputs1::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& DifferenceInputs1::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void DifferenceInputs1::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& DifferenceInputs1::GetSampletime() const
{
    return m_Sampletime;
}

void DifferenceInputs1::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
