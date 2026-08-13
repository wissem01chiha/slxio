#include "Preint.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Preint::Preint() {}

Preint::~Preint() {}

const std::string& Preint::GetPort() const
{
    return m_Port;
}

void Preint::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Preint::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Preint::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Preint::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Preint::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Preint::GetOutmin() const
{
    return m_Outmin;
}

void Preint::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Preint::GetOutmax() const
{
    return m_Outmax;
}

void Preint::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Preint::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Preint::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Preint::GetLockscale() const
{
    return m_Lockscale;
}

void Preint::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Preint::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Preint::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Preint::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Preint::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Preint::GetUnit() const
{
    return m_Unit;
}

void Preint::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Preint::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Preint::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Preint::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Preint::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Preint::GetSampletime() const
{
    return m_Sampletime;
}

void Preint::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Preint::GetSignaltype() const
{
    return m_Signaltype;
}

void Preint::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Preint::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Preint::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Preint::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Preint::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Preint::GetInterpolate() const
{
    return m_Interpolate;
}

void Preint::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Preint::GetInputconnect() const
{
    return m_Inputconnect;
}

void Preint::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Preint::GetDatamode() const
{
    return m_Datamode;
}

void Preint::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Preint::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Preint::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Preint::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Preint::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Preint::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Preint::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Preint::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Preint::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Preint::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Preint::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
