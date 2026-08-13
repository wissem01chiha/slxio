#include "Multiportswitch.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Multiportswitch::Multiportswitch() {}

Multiportswitch::~Multiportswitch() {}

const std::string& Multiportswitch::GetDataportorder() const
{
    return m_Dataportorder;
}

void Multiportswitch::SetDataportorder(const std::string& value)
{
    m_Dataportorder = value;
}

const std::string& Multiportswitch::GetInputs() const
{
    return m_Inputs;
}

void Multiportswitch::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& Multiportswitch::GetDataportindices() const
{
    return m_Dataportindices;
}

void Multiportswitch::SetDataportindices(const std::string& value)
{
    m_Dataportindices = value;
}

const std::string& Multiportswitch::GetDataportfordefault() const
{
    return m_Dataportfordefault;
}

void Multiportswitch::SetDataportfordefault(const std::string& value)
{
    m_Dataportfordefault = value;
}

const std::string& Multiportswitch::GetDiagnosticfordefault() const
{
    return m_Diagnosticfordefault;
}

void Multiportswitch::SetDiagnosticfordefault(const std::string& value)
{
    m_Diagnosticfordefault = value;
}

const std::string& Multiportswitch::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Multiportswitch::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Multiportswitch::GetOutmin() const
{
    return m_Outmin;
}

void Multiportswitch::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Multiportswitch::GetOutmax() const
{
    return m_Outmax;
}

void Multiportswitch::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Multiportswitch::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Multiportswitch::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Multiportswitch::GetLockscale() const
{
    return m_Lockscale;
}

void Multiportswitch::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Multiportswitch::GetRndmeth() const
{
    return m_Rndmeth;
}

void Multiportswitch::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Multiportswitch::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Multiportswitch::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Multiportswitch::GetSampletime() const
{
    return m_Sampletime;
}

void Multiportswitch::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Multiportswitch::GetAllowdiffinputsizes() const
{
    return m_Allowdiffinputsizes;
}

void Multiportswitch::SetAllowdiffinputsizes(const std::string& value)
{
    m_Allowdiffinputsizes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
