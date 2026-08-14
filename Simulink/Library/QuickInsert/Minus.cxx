#include "Minus.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Minus::Minus() {}

Minus::~Minus() {}

const std::string& Minus::GetIconshape() const { return m_Iconshape; }

void Minus::SetIconshape(const std::string& value) { m_Iconshape = value; }

const std::string& Minus::GetInputs() const { return m_Inputs; }

void Minus::SetInputs(const std::string& value) { m_Inputs = value; }

const std::string& Minus::GetCollapsemode() const { return m_Collapsemode; }

void Minus::SetCollapsemode(const std::string& value)
{
    m_Collapsemode = value;
}

const std::string& Minus::GetCollapsedim() const { return m_Collapsedim; }

void Minus::SetCollapsedim(const std::string& value) { m_Collapsedim = value; }

const std::string& Minus::GetOutmin() const { return m_Outmin; }

void Minus::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& Minus::GetOutmax() const { return m_Outmax; }

void Minus::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& Minus::GetOutdatatypestr() const { return m_Outdatatypestr; }

void Minus::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Minus::GetAccumdatatypestr() const
{
    return m_Accumdatatypestr;
}

void Minus::SetAccumdatatypestr(const std::string& value)
{
    m_Accumdatatypestr = value;
}

const std::string& Minus::GetInputsamedt() const { return m_Inputsamedt; }

void Minus::SetInputsamedt(const std::string& value) { m_Inputsamedt = value; }

const std::string& Minus::GetLockscale() const { return m_Lockscale; }

void Minus::SetLockscale(const std::string& value) { m_Lockscale = value; }

const std::string& Minus::GetRndmeth() const { return m_Rndmeth; }

void Minus::SetRndmeth(const std::string& value) { m_Rndmeth = value; }

const std::string& Minus::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Minus::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Minus::GetSampletime() const { return m_Sampletime; }

void Minus::SetSampletime(const std::string& value) { m_Sampletime = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
