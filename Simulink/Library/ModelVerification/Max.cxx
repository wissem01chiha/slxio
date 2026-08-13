#include "Max.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Max::Max() {}

Max::~Max() {}

const std::string& Max::GetPort() const
{
    return m_Port;
}

void Max::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Max::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Max::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Max::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Max::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Max::GetOutmin() const
{
    return m_Outmin;
}

void Max::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Max::GetOutmax() const
{
    return m_Outmax;
}

void Max::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Max::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Max::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Max::GetLockscale() const
{
    return m_Lockscale;
}

void Max::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Max::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Max::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Max::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Max::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Max::GetUnit() const
{
    return m_Unit;
}

void Max::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Max::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Max::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Max::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Max::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Max::GetSampletime() const
{
    return m_Sampletime;
}

void Max::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Max::GetSignaltype() const
{
    return m_Signaltype;
}

void Max::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Max::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Max::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Max::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Max::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Max::GetInterpolate() const
{
    return m_Interpolate;
}

void Max::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Max::GetInputconnect() const
{
    return m_Inputconnect;
}

void Max::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Max::GetDatamode() const
{
    return m_Datamode;
}

void Max::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Max::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Max::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Max::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Max::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Max::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Max::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Max::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Max::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Max::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Max::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
