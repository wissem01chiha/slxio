#include "U1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

U1::U1() {}

U1::~U1() {}

const std::string& U1::GetPort() const
{
    return m_Port;
}

void U1::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& U1::GetIcondisplay() const
{
    return m_Icondisplay;
}

void U1::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& U1::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void U1::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& U1::GetOutmin() const
{
    return m_Outmin;
}

void U1::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& U1::GetOutmax() const
{
    return m_Outmax;
}

void U1::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& U1::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void U1::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& U1::GetLockscale() const
{
    return m_Lockscale;
}

void U1::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& U1::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void U1::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& U1::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void U1::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& U1::GetUnit() const
{
    return m_Unit;
}

void U1::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& U1::GetPortdimensions() const
{
    return m_Portdimensions;
}

void U1::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& U1::GetVarsizesig() const
{
    return m_Varsizesig;
}

void U1::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& U1::GetSampletime() const
{
    return m_Sampletime;
}

void U1::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& U1::GetSignaltype() const
{
    return m_Signaltype;
}

void U1::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& U1::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void U1::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& U1::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void U1::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& U1::GetInterpolate() const
{
    return m_Interpolate;
}

void U1::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& U1::GetInputconnect() const
{
    return m_Inputconnect;
}

void U1::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& U1::GetDatamode() const
{
    return m_Datamode;
}

void U1::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& U1::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void U1::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& U1::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void U1::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& U1::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void U1::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& U1::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void U1::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& U1::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void U1::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
