#include "RawAngle.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

RawAngle::RawAngle() {}

RawAngle::~RawAngle() {}

const std::string& RawAngle::GetPort() const
{
    return m_Port;
}

void RawAngle::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& RawAngle::GetIcondisplay() const
{
    return m_Icondisplay;
}

void RawAngle::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& RawAngle::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void RawAngle::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& RawAngle::GetOutmin() const
{
    return m_Outmin;
}

void RawAngle::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& RawAngle::GetOutmax() const
{
    return m_Outmax;
}

void RawAngle::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& RawAngle::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void RawAngle::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& RawAngle::GetLockscale() const
{
    return m_Lockscale;
}

void RawAngle::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& RawAngle::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void RawAngle::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& RawAngle::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void RawAngle::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& RawAngle::GetUnit() const
{
    return m_Unit;
}

void RawAngle::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& RawAngle::GetPortdimensions() const
{
    return m_Portdimensions;
}

void RawAngle::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& RawAngle::GetVarsizesig() const
{
    return m_Varsizesig;
}

void RawAngle::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& RawAngle::GetSampletime() const
{
    return m_Sampletime;
}

void RawAngle::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& RawAngle::GetSignaltype() const
{
    return m_Signaltype;
}

void RawAngle::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& RawAngle::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void RawAngle::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& RawAngle::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void RawAngle::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& RawAngle::GetInterpolate() const
{
    return m_Interpolate;
}

void RawAngle::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& RawAngle::GetInputconnect() const
{
    return m_Inputconnect;
}

void RawAngle::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& RawAngle::GetDatamode() const
{
    return m_Datamode;
}

void RawAngle::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& RawAngle::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void RawAngle::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& RawAngle::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void RawAngle::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& RawAngle::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void RawAngle::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& RawAngle::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void RawAngle::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& RawAngle::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void RawAngle::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
