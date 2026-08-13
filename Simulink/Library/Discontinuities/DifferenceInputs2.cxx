#include "DifferenceInputs2.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DifferenceInputs2::DifferenceInputs2() {}

DifferenceInputs2::~DifferenceInputs2() {}

const std::string& DifferenceInputs2::GetIconshape() const
{
    return m_Iconshape;
}

void DifferenceInputs2::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& DifferenceInputs2::GetInputs() const
{
    return m_Inputs;
}

void DifferenceInputs2::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& DifferenceInputs2::GetCollapsemode() const
{
    return m_Collapsemode;
}

void DifferenceInputs2::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& DifferenceInputs2::GetCollapsedim() const
{
    return m_Collapsedim;
}

void DifferenceInputs2::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& DifferenceInputs2::GetOutmin() const
{
    return m_Outmin;
}

void DifferenceInputs2::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& DifferenceInputs2::GetOutmax() const
{
    return m_Outmax;
}

void DifferenceInputs2::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& DifferenceInputs2::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DifferenceInputs2::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& DifferenceInputs2::GetAccumdatatypestr() const
{
    return m_Accumdatatypestr;
}

void DifferenceInputs2::SetAccumdatatypestr(const std::string& value)
{
    m_Accumdatatypestr = value;
}

const std::string& DifferenceInputs2::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void DifferenceInputs2::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& DifferenceInputs2::GetLockscale() const
{
    return m_Lockscale;
}

void DifferenceInputs2::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& DifferenceInputs2::GetRndmeth() const
{
    return m_Rndmeth;
}

void DifferenceInputs2::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& DifferenceInputs2::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void DifferenceInputs2::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& DifferenceInputs2::GetSampletime() const
{
    return m_Sampletime;
}

void DifferenceInputs2::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
