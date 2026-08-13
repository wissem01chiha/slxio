#include "ElementProduct.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ElementProduct::ElementProduct() {}

ElementProduct::~ElementProduct() {}

const std::string& ElementProduct::GetInputs() const
{
    return m_Inputs;
}

void ElementProduct::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& ElementProduct::GetMultiplication() const
{
    return m_Multiplication;
}

void ElementProduct::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& ElementProduct::GetCollapsemode() const
{
    return m_Collapsemode;
}

void ElementProduct::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& ElementProduct::GetCollapsedim() const
{
    return m_Collapsedim;
}

void ElementProduct::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& ElementProduct::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void ElementProduct::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& ElementProduct::GetOutmin() const
{
    return m_Outmin;
}

void ElementProduct::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& ElementProduct::GetOutmax() const
{
    return m_Outmax;
}

void ElementProduct::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& ElementProduct::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void ElementProduct::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& ElementProduct::GetLockscale() const
{
    return m_Lockscale;
}

void ElementProduct::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& ElementProduct::GetRndmeth() const
{
    return m_Rndmeth;
}

void ElementProduct::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& ElementProduct::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void ElementProduct::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& ElementProduct::GetSampletime() const
{
    return m_Sampletime;
}

void ElementProduct::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
