#include "Reciprocal.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Reciprocal::Reciprocal() {}

Reciprocal::~Reciprocal() {}

const std::string& Reciprocal::GetInputs() const
{
    return m_Inputs;
}

void Reciprocal::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& Reciprocal::GetMultiplication() const
{
    return m_Multiplication;
}

void Reciprocal::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& Reciprocal::GetCollapsemode() const
{
    return m_Collapsemode;
}

void Reciprocal::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& Reciprocal::GetCollapsedim() const
{
    return m_Collapsedim;
}

void Reciprocal::SetCollapsedim(const std::string& value)
{
    m_Collapsedim = value;
}

const std::string& Reciprocal::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Reciprocal::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Reciprocal::GetOutmin() const
{
    return m_Outmin;
}

void Reciprocal::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Reciprocal::GetOutmax() const
{
    return m_Outmax;
}

void Reciprocal::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Reciprocal::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Reciprocal::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Reciprocal::GetLockscale() const
{
    return m_Lockscale;
}

void Reciprocal::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Reciprocal::GetRndmeth() const
{
    return m_Rndmeth;
}

void Reciprocal::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Reciprocal::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Reciprocal::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Reciprocal::GetSampletime() const
{
    return m_Sampletime;
}

void Reciprocal::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
