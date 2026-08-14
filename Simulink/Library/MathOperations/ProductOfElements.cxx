#include "ProductOfElements.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

ProductOfElements::ProductOfElements() {}

ProductOfElements::~ProductOfElements() {}

const std::string& ProductOfElements::GetInputs() const { return m_Inputs; }

void ProductOfElements::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& ProductOfElements::GetMultiplication() const
{
    return m_Multiplication;
}

void ProductOfElements::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& ProductOfElements::GetCollapsemode() const
{
    return m_Collapsemode;
}

void ProductOfElements::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& ProductOfElements::GetCollapsedim() const
{
    return m_Collapsedim;
}

void ProductOfElements::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& ProductOfElements::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void ProductOfElements::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& ProductOfElements::GetOutmin() const { return m_Outmin; }

void ProductOfElements::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& ProductOfElements::GetOutmax() const { return m_Outmax; }

void ProductOfElements::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& ProductOfElements::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void ProductOfElements::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& ProductOfElements::GetLockscale() const
{
    return m_Lockscale;
}

void ProductOfElements::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& ProductOfElements::GetRndmeth() const { return m_Rndmeth; }

void ProductOfElements::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& ProductOfElements::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void ProductOfElements::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& ProductOfElements::GetSampletime() const
{
    return m_Sampletime;
}

void ProductOfElements::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
