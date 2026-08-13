#include "Lo.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Lo::Lo() {}

Lo::~Lo() {}

const std::string& Lo::GetPort() const
{
    return m_Port;
}

void Lo::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Lo::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Lo::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Lo::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Lo::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Lo::GetOutmin() const
{
    return m_Outmin;
}

void Lo::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Lo::GetOutmax() const
{
    return m_Outmax;
}

void Lo::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Lo::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Lo::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Lo::GetLockscale() const
{
    return m_Lockscale;
}

void Lo::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Lo::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Lo::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Lo::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Lo::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Lo::GetUnit() const
{
    return m_Unit;
}

void Lo::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Lo::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Lo::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Lo::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Lo::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Lo::GetSampletime() const
{
    return m_Sampletime;
}

void Lo::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Lo::GetSignaltype() const
{
    return m_Signaltype;
}

void Lo::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Lo::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Lo::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Lo::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Lo::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Lo::GetInterpolate() const
{
    return m_Interpolate;
}

void Lo::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Lo::GetInputconnect() const
{
    return m_Inputconnect;
}

void Lo::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Lo::GetDatamode() const
{
    return m_Datamode;
}

void Lo::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Lo::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Lo::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Lo::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Lo::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Lo::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Lo::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Lo::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Lo::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Lo::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Lo::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
