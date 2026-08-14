#include "Min.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Min::Min() {}

Min::~Min() {}

const std::string& Min::GetFunction() const { return m_Function; }

void Min::SetFunction(const std::string& value) { m_Function = value; }

const std::string& Min::GetInputs() const { return m_Inputs; }

void Min::SetInputs(const std::string& value) { m_Inputs = value; }

const std::string& Min::GetInputsamedt() const { return m_Inputsamedt; }

void Min::SetInputsamedt(const std::string& value) { m_Inputsamedt = value; }

const std::string& Min::GetCollapsemode() const { return m_Collapsemode; }

void Min::SetCollapsemode(const std::string& value) { m_Collapsemode = value; }

const std::string& Min::GetCollapsedim() const { return m_Collapsedim; }

void Min::SetCollapsedim(const std::string& value) { m_Collapsedim = value; }

const std::string& Min::GetOutmin() const { return m_Outmin; }

void Min::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& Min::GetOutmax() const { return m_Outmax; }

void Min::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& Min::GetOutdatatypestr() const { return m_Outdatatypestr; }

void Min::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Min::GetLockscale() const { return m_Lockscale; }

void Min::SetLockscale(const std::string& value) { m_Lockscale = value; }

const std::string& Min::GetRndmeth() const { return m_Rndmeth; }

void Min::SetRndmeth(const std::string& value) { m_Rndmeth = value; }

const std::string& Min::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Min::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Min::GetZerocross() const { return m_Zerocross; }

void Min::SetZerocross(const std::string& value) { m_Zerocross = value; }

const std::string& Min::GetSampletime() const { return m_Sampletime; }

void Min::SetSampletime(const std::string& value) { m_Sampletime = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
