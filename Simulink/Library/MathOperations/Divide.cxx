#include "Divide.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Divide::Divide() {}

Divide::~Divide() {}

const std::string& Divide::GetInputs() const { return m_Inputs; }

void Divide::SetInputs(const std::string& value) { m_Inputs = value; }

const std::string& Divide::GetMultiplication() const
{
    return m_Multiplication;
}

void Divide::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& Divide::GetCollapsemode() const { return m_Collapsemode; }

void Divide::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& Divide::GetCollapsedim() const { return m_Collapsedim; }

void Divide::SetCollapsedim(const std::string& value) { m_Collapsedim = value; }

const std::string& Divide::GetInputsamedt() const { return m_Inputsamedt; }

void Divide::SetInputsamedt(const std::string& value) { m_Inputsamedt = value; }

const std::string& Divide::GetOutmin() const { return m_Outmin; }

void Divide::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& Divide::GetOutmax() const { return m_Outmax; }

void Divide::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& Divide::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Divide::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Divide::GetLockscale() const { return m_Lockscale; }

void Divide::SetLockscale(const std::string& value) { m_Lockscale = value; }

const std::string& Divide::GetRndmeth() const { return m_Rndmeth; }

void Divide::SetRndmeth(const std::string& value) { m_Rndmeth = value; }

const std::string& Divide::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Divide::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Divide::GetSampletime() const { return m_Sampletime; }

void Divide::SetSampletime(const std::string& value) { m_Sampletime = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
