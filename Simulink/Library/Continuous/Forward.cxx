#include "Forward.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Forward::Forward() {}

Forward::~Forward() {}

const std::string& Forward::GetPort() const
{
    return m_Port;
}

void Forward::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Forward::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Forward::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Forward::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Forward::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Forward::GetOutmin() const
{
    return m_Outmin;
}

void Forward::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Forward::GetOutmax() const
{
    return m_Outmax;
}

void Forward::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Forward::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Forward::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Forward::GetLockscale() const
{
    return m_Lockscale;
}

void Forward::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Forward::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Forward::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Forward::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Forward::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Forward::GetUnit() const
{
    return m_Unit;
}

void Forward::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Forward::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Forward::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Forward::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Forward::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Forward::GetSampletime() const
{
    return m_Sampletime;
}

void Forward::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Forward::GetSignaltype() const
{
    return m_Signaltype;
}

void Forward::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Forward::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Forward::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Forward::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Forward::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Forward::GetInterpolate() const
{
    return m_Interpolate;
}

void Forward::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Forward::GetInputconnect() const
{
    return m_Inputconnect;
}

void Forward::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Forward::GetDatamode() const
{
    return m_Datamode;
}

void Forward::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Forward::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Forward::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Forward::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Forward::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Forward::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Forward::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Forward::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Forward::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Forward::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Forward::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
