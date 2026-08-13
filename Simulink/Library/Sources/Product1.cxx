#include "Product1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Product1::Product1() {}

Product1::~Product1() {}

const std::string& Product1::GetInputs() const
{
    return m_Inputs;
}

void Product1::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& Product1::GetMultiplication() const
{
    return m_Multiplication;
}

void Product1::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& Product1::GetCollapsemode() const
{
    return m_Collapsemode;
}

void Product1::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& Product1::GetCollapsedim() const
{
    return m_Collapsedim;
}

void Product1::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& Product1::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Product1::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Product1::GetOutmin() const
{
    return m_Outmin;
}

void Product1::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Product1::GetOutmax() const
{
    return m_Outmax;
}

void Product1::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Product1::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Product1::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Product1::GetLockscale() const
{
    return m_Lockscale;
}

void Product1::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Product1::GetRndmeth() const
{
    return m_Rndmeth;
}

void Product1::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Product1::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Product1::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Product1::GetSampletime() const
{
    return m_Sampletime;
}

void Product1::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
