#include "Ydot.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Ydot::Ydot() {}

Ydot::~Ydot() {}

const std::string& Ydot::GetPort() const
{
    return m_Port;
}

void Ydot::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Ydot::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Ydot::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Ydot::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Ydot::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Ydot::GetOutmin() const
{
    return m_Outmin;
}

void Ydot::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Ydot::GetOutmax() const
{
    return m_Outmax;
}

void Ydot::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Ydot::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Ydot::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Ydot::GetLockscale() const
{
    return m_Lockscale;
}

void Ydot::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Ydot::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Ydot::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Ydot::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Ydot::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Ydot::GetUnit() const
{
    return m_Unit;
}

void Ydot::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Ydot::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Ydot::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Ydot::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Ydot::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Ydot::GetSampletime() const
{
    return m_Sampletime;
}

void Ydot::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Ydot::GetSignaltype() const
{
    return m_Signaltype;
}

void Ydot::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Ydot::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Ydot::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Ydot::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Ydot::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Ydot::GetInterpolate() const
{
    return m_Interpolate;
}

void Ydot::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Ydot::GetInputconnect() const
{
    return m_Inputconnect;
}

void Ydot::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Ydot::GetDatamode() const
{
    return m_Datamode;
}

void Ydot::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Ydot::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Ydot::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Ydot::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Ydot::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Ydot::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Ydot::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Ydot::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Ydot::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Ydot::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Ydot::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
