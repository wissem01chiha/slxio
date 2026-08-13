#include "Feedback.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Feedback::Feedback() {}

Feedback::~Feedback() {}

const std::string& Feedback::GetPort() const
{
    return m_Port;
}

void Feedback::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Feedback::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Feedback::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Feedback::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Feedback::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Feedback::GetOutmin() const
{
    return m_Outmin;
}

void Feedback::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Feedback::GetOutmax() const
{
    return m_Outmax;
}

void Feedback::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Feedback::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Feedback::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Feedback::GetLockscale() const
{
    return m_Lockscale;
}

void Feedback::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Feedback::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Feedback::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Feedback::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Feedback::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Feedback::GetUnit() const
{
    return m_Unit;
}

void Feedback::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Feedback::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Feedback::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Feedback::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Feedback::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Feedback::GetSampletime() const
{
    return m_Sampletime;
}

void Feedback::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Feedback::GetSignaltype() const
{
    return m_Signaltype;
}

void Feedback::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Feedback::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Feedback::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Feedback::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Feedback::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Feedback::GetInterpolate() const
{
    return m_Interpolate;
}

void Feedback::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Feedback::GetInputconnect() const
{
    return m_Inputconnect;
}

void Feedback::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Feedback::GetDatamode() const
{
    return m_Datamode;
}

void Feedback::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Feedback::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Feedback::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Feedback::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Feedback::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Feedback::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Feedback::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Feedback::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Feedback::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Feedback::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Feedback::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
