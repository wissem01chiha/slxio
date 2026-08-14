#include "Plus.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Plus::Plus() {}

Plus::~Plus() {}

const std::string& Plus::GetIconshape() const { return m_Iconshape; }

void Plus::SetIconshape(const std::string& value) { m_Iconshape = value; }

const std::string& Plus::GetInputs() const { return m_Inputs; }

void Plus::SetInputs(const std::string& value) { m_Inputs = value; }

const std::string& Plus::GetCollapsemode() const { return m_Collapsemode; }

void Plus::SetCollapsemode(const std::string& value) { m_Collapsemode = value; }

const std::string& Plus::GetCollapsedim() const { return m_Collapsedim; }

void Plus::SetCollapsedim(const std::string& value) { m_Collapsedim = value; }

const std::string& Plus::GetOutmin() const { return m_Outmin; }

void Plus::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& Plus::GetOutmax() const { return m_Outmax; }

void Plus::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& Plus::GetOutdatatypestr() const { return m_Outdatatypestr; }

void Plus::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Plus::GetAccumdatatypestr() const
{
    return m_Accumdatatypestr;
}

void Plus::SetAccumdatatypestr(const std::string& value)
{
    m_Accumdatatypestr = value;
}

const std::string& Plus::GetInputsamedt() const { return m_Inputsamedt; }

void Plus::SetInputsamedt(const std::string& value) { m_Inputsamedt = value; }

const std::string& Plus::GetLockscale() const { return m_Lockscale; }

void Plus::SetLockscale(const std::string& value) { m_Lockscale = value; }

const std::string& Plus::GetRndmeth() const { return m_Rndmeth; }

void Plus::SetRndmeth(const std::string& value) { m_Rndmeth = value; }

const std::string& Plus::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Plus::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Plus::GetSampletime() const { return m_Sampletime; }

void Plus::SetSampletime(const std::string& value) { m_Sampletime = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
