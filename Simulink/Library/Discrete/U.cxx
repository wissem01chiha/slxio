#include "U.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

U::U() {}

U::~U() {}

const std::string& U::GetPort() const
{
    return m_Port;
}

void U::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& U::GetIcondisplay() const
{
    return m_Icondisplay;
}

void U::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& U::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void U::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& U::GetOutmin() const
{
    return m_Outmin;
}

void U::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& U::GetOutmax() const
{
    return m_Outmax;
}

void U::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& U::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void U::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& U::GetLockscale() const
{
    return m_Lockscale;
}

void U::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& U::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void U::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& U::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void U::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& U::GetUnit() const
{
    return m_Unit;
}

void U::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& U::GetPortdimensions() const
{
    return m_Portdimensions;
}

void U::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& U::GetVarsizesig() const
{
    return m_Varsizesig;
}

void U::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& U::GetSampletime() const
{
    return m_Sampletime;
}

void U::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& U::GetSignaltype() const
{
    return m_Signaltype;
}

void U::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& U::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void U::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& U::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void U::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& U::GetInterpolate() const
{
    return m_Interpolate;
}

void U::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& U::GetInputconnect() const
{
    return m_Inputconnect;
}

void U::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& U::GetDatamode() const
{
    return m_Datamode;
}

void U::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& U::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void U::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& U::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void U::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& U::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void U::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& U::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void U::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& U::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void U::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
