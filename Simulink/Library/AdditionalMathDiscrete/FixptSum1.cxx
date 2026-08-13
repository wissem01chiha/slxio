#include "FixptSum1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FixptSum1::FixptSum1() {}

FixptSum1::~FixptSum1() {}

const std::string& FixptSum1::GetIconshape() const
{
    return m_Iconshape;
}

void FixptSum1::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& FixptSum1::GetInputs() const
{
    return m_Inputs;
}

void FixptSum1::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& FixptSum1::GetCollapsemode() const
{
    return m_Collapsemode;
}

void FixptSum1::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& FixptSum1::GetCollapsedim() const
{
    return m_Collapsedim;
}

void FixptSum1::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& FixptSum1::GetOutmin() const
{
    return m_Outmin;
}

void FixptSum1::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& FixptSum1::GetOutmax() const
{
    return m_Outmax;
}

void FixptSum1::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& FixptSum1::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void FixptSum1::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& FixptSum1::GetAccumdatatypestr() const
{
    return m_Accumdatatypestr;
}

void FixptSum1::SetAccumdatatypestr(const std::string& value)
{
    m_Accumdatatypestr = value;
}

const std::string& FixptSum1::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void FixptSum1::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& FixptSum1::GetLockscale() const
{
    return m_Lockscale;
}

void FixptSum1::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& FixptSum1::GetRndmeth() const
{
    return m_Rndmeth;
}

void FixptSum1::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& FixptSum1::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void FixptSum1::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& FixptSum1::GetSampletime() const
{
    return m_Sampletime;
}

void FixptSum1::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
