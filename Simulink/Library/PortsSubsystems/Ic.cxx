#include "Ic.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Ic::Ic() {}

Ic::~Ic() {}

const std::string& Ic::GetPort() const
{
    return m_Port;
}

void Ic::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Ic::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Ic::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Ic::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Ic::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Ic::GetOutmin() const
{
    return m_Outmin;
}

void Ic::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Ic::GetOutmax() const
{
    return m_Outmax;
}

void Ic::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Ic::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Ic::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Ic::GetLockscale() const
{
    return m_Lockscale;
}

void Ic::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Ic::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Ic::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Ic::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Ic::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Ic::GetUnit() const
{
    return m_Unit;
}

void Ic::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Ic::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Ic::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Ic::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Ic::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Ic::GetSampletime() const
{
    return m_Sampletime;
}

void Ic::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Ic::GetSignaltype() const
{
    return m_Signaltype;
}

void Ic::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Ic::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Ic::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Ic::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Ic::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Ic::GetInterpolate() const
{
    return m_Interpolate;
}

void Ic::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Ic::GetInputconnect() const
{
    return m_Inputconnect;
}

void Ic::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Ic::GetDatamode() const
{
    return m_Datamode;
}

void Ic::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Ic::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Ic::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Ic::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Ic::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Ic::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Ic::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Ic::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Ic::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Ic::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Ic::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
