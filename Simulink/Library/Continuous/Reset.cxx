#include "Reset.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Reset::Reset() {}

Reset::~Reset() {}

const std::string& Reset::GetPort() const
{
    return m_Port;
}

void Reset::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Reset::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Reset::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Reset::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Reset::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Reset::GetOutmin() const
{
    return m_Outmin;
}

void Reset::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Reset::GetOutmax() const
{
    return m_Outmax;
}

void Reset::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Reset::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Reset::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Reset::GetLockscale() const
{
    return m_Lockscale;
}

void Reset::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Reset::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Reset::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Reset::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Reset::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Reset::GetUnit() const
{
    return m_Unit;
}

void Reset::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Reset::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Reset::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Reset::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Reset::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Reset::GetSampletime() const
{
    return m_Sampletime;
}

void Reset::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Reset::GetSignaltype() const
{
    return m_Signaltype;
}

void Reset::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Reset::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Reset::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Reset::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Reset::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Reset::GetInterpolate() const
{
    return m_Interpolate;
}

void Reset::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Reset::GetInputconnect() const
{
    return m_Inputconnect;
}

void Reset::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Reset::GetDatamode() const
{
    return m_Datamode;
}

void Reset::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Reset::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Reset::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Reset::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Reset::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Reset::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Reset::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Reset::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Reset::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Reset::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Reset::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
