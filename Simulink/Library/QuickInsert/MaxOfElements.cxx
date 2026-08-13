#include "MaxOfElements.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

MaxOfElements::MaxOfElements() {}

MaxOfElements::~MaxOfElements() {}

const std::string& MaxOfElements::GetFunction() const
{
    return m_Function;
}

void MaxOfElements::SetFunction(const std::string& value)
{
    m_Function = value;
}

const std::string& MaxOfElements::GetInputs() const
{
    return m_Inputs;
}

void MaxOfElements::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& MaxOfElements::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void MaxOfElements::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& MaxOfElements::GetCollapsemode() const
{
    return m_Collapsemode;
}

void MaxOfElements::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& MaxOfElements::GetCollapsedim() const
{
    return m_Collapsedim;
}

void MaxOfElements::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& MaxOfElements::GetOutmin() const
{
    return m_Outmin;
}

void MaxOfElements::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& MaxOfElements::GetOutmax() const
{
    return m_Outmax;
}

void MaxOfElements::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& MaxOfElements::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void MaxOfElements::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& MaxOfElements::GetLockscale() const
{
    return m_Lockscale;
}

void MaxOfElements::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& MaxOfElements::GetRndmeth() const
{
    return m_Rndmeth;
}

void MaxOfElements::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& MaxOfElements::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void MaxOfElements::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& MaxOfElements::GetZerocross() const
{
    return m_Zerocross;
}

void MaxOfElements::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& MaxOfElements::GetSampletime() const
{
    return m_Sampletime;
}

void MaxOfElements::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
