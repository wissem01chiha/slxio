#include "UpperLimit.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

UpperLimit::UpperLimit() {}

UpperLimit::~UpperLimit() {}

const std::string& UpperLimit::GetPort() const
{
    return m_Port;
}

void UpperLimit::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& UpperLimit::GetIcondisplay() const
{
    return m_Icondisplay;
}

void UpperLimit::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& UpperLimit::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void UpperLimit::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& UpperLimit::GetOutmin() const
{
    return m_Outmin;
}

void UpperLimit::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& UpperLimit::GetOutmax() const
{
    return m_Outmax;
}

void UpperLimit::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& UpperLimit::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void UpperLimit::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& UpperLimit::GetLockscale() const
{
    return m_Lockscale;
}

void UpperLimit::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& UpperLimit::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void UpperLimit::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& UpperLimit::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void UpperLimit::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& UpperLimit::GetUnit() const
{
    return m_Unit;
}

void UpperLimit::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& UpperLimit::GetPortdimensions() const
{
    return m_Portdimensions;
}

void UpperLimit::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& UpperLimit::GetVarsizesig() const
{
    return m_Varsizesig;
}

void UpperLimit::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& UpperLimit::GetSampletime() const
{
    return m_Sampletime;
}

void UpperLimit::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& UpperLimit::GetSignaltype() const
{
    return m_Signaltype;
}

void UpperLimit::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& UpperLimit::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void UpperLimit::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& UpperLimit::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void UpperLimit::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& UpperLimit::GetInterpolate() const
{
    return m_Interpolate;
}

void UpperLimit::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& UpperLimit::GetInputconnect() const
{
    return m_Inputconnect;
}

void UpperLimit::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& UpperLimit::GetDatamode() const
{
    return m_Datamode;
}

void UpperLimit::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& UpperLimit::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void UpperLimit::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& UpperLimit::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void UpperLimit::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& UpperLimit::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void UpperLimit::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& UpperLimit::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void UpperLimit::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& UpperLimit::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void UpperLimit::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
