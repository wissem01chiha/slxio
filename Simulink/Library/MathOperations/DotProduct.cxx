#include "DotProduct.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DotProduct::DotProduct() {}

DotProduct::~DotProduct() {}

const std::string& DotProduct::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void DotProduct::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& DotProduct::GetOutmin() const
{
    return m_Outmin;
}

void DotProduct::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& DotProduct::GetOutmax() const
{
    return m_Outmax;
}

void DotProduct::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& DotProduct::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DotProduct::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& DotProduct::GetLockscale() const
{
    return m_Lockscale;
}

void DotProduct::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& DotProduct::GetRndmeth() const
{
    return m_Rndmeth;
}

void DotProduct::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& DotProduct::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void DotProduct::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& DotProduct::GetSampletime() const
{
    return m_Sampletime;
}

void DotProduct::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
