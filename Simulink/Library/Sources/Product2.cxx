#include "Product2.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Product2::Product2() {}

Product2::~Product2() {}

const std::string& Product2::GetInputs() const
{
    return m_Inputs;
}

void Product2::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& Product2::GetMultiplication() const
{
    return m_Multiplication;
}

void Product2::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& Product2::GetCollapsemode() const
{
    return m_Collapsemode;
}

void Product2::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& Product2::GetCollapsedim() const
{
    return m_Collapsedim;
}

void Product2::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& Product2::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Product2::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Product2::GetOutmin() const
{
    return m_Outmin;
}

void Product2::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Product2::GetOutmax() const
{
    return m_Outmax;
}

void Product2::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Product2::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Product2::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Product2::GetLockscale() const
{
    return m_Lockscale;
}

void Product2::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Product2::GetRndmeth() const
{
    return m_Rndmeth;
}

void Product2::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Product2::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Product2::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Product2::GetSampletime() const
{
    return m_Sampletime;
}

void Product2::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
