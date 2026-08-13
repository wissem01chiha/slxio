#include "MultiportSwitch.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

MultiportSwitch::MultiportSwitch() {}

MultiportSwitch::~MultiportSwitch() {}

const std::string& MultiportSwitch::GetDataportorder() const
{
    return m_Dataportorder;
}

void MultiportSwitch::SetDataportorder(const std::string& value)
{
    m_Dataportorder = value;
}

const std::string& MultiportSwitch::GetInputs() const
{
    return m_Inputs;
}

void MultiportSwitch::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& MultiportSwitch::GetDataportindices() const
{
    return m_Dataportindices;
}

void MultiportSwitch::SetDataportindices(const std::string& value)
{
    m_Dataportindices = value;
}

const std::string& MultiportSwitch::GetDataportfordefault() const
{
    return m_Dataportfordefault;
}

void MultiportSwitch::SetDataportfordefault(const std::string& value)
{
    m_Dataportfordefault = value;
}

const std::string& MultiportSwitch::GetDiagnosticfordefault() const
{
    return m_Diagnosticfordefault;
}

void MultiportSwitch::SetDiagnosticfordefault(const std::string& value)
{
    m_Diagnosticfordefault = value;
}

const std::string& MultiportSwitch::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void MultiportSwitch::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& MultiportSwitch::GetOutmin() const
{
    return m_Outmin;
}

void MultiportSwitch::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& MultiportSwitch::GetOutmax() const
{
    return m_Outmax;
}

void MultiportSwitch::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& MultiportSwitch::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void MultiportSwitch::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& MultiportSwitch::GetLockscale() const
{
    return m_Lockscale;
}

void MultiportSwitch::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& MultiportSwitch::GetRndmeth() const
{
    return m_Rndmeth;
}

void MultiportSwitch::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& MultiportSwitch::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void MultiportSwitch::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& MultiportSwitch::GetSampletime() const
{
    return m_Sampletime;
}

void MultiportSwitch::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& MultiportSwitch::GetAllowdiffinputsizes() const
{
    return m_Allowdiffinputsizes;
}

void MultiportSwitch::SetAllowdiffinputsizes(const std::string& value)
{
    m_Allowdiffinputsizes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
