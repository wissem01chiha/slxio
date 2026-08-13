#include "Resolution.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Resolution::Resolution() {}

Resolution::~Resolution() {}

const std::string& Resolution::GetPort() const
{
    return m_Port;
}

void Resolution::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Resolution::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Resolution::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Resolution::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Resolution::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Resolution::GetOutmin() const
{
    return m_Outmin;
}

void Resolution::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Resolution::GetOutmax() const
{
    return m_Outmax;
}

void Resolution::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Resolution::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Resolution::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Resolution::GetLockscale() const
{
    return m_Lockscale;
}

void Resolution::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Resolution::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Resolution::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Resolution::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Resolution::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Resolution::GetUnit() const
{
    return m_Unit;
}

void Resolution::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Resolution::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Resolution::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Resolution::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Resolution::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Resolution::GetSampletime() const
{
    return m_Sampletime;
}

void Resolution::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Resolution::GetSignaltype() const
{
    return m_Signaltype;
}

void Resolution::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Resolution::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Resolution::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Resolution::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Resolution::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Resolution::GetInterpolate() const
{
    return m_Interpolate;
}

void Resolution::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Resolution::GetInputconnect() const
{
    return m_Inputconnect;
}

void Resolution::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Resolution::GetDatamode() const
{
    return m_Datamode;
}

void Resolution::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Resolution::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Resolution::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Resolution::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Resolution::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Resolution::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Resolution::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Resolution::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Resolution::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Resolution::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Resolution::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
