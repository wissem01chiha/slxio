#include "A.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

A::A() {}

A::~A() {}

const std::string& A::GetPort() const
{
    return m_Port;
}

void A::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& A::GetIcondisplay() const
{
    return m_Icondisplay;
}

void A::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& A::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void A::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& A::GetOutmin() const
{
    return m_Outmin;
}

void A::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& A::GetOutmax() const
{
    return m_Outmax;
}

void A::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& A::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void A::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& A::GetLockscale() const
{
    return m_Lockscale;
}

void A::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& A::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void A::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& A::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void A::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& A::GetUnit() const
{
    return m_Unit;
}

void A::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& A::GetPortdimensions() const
{
    return m_Portdimensions;
}

void A::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& A::GetVarsizesig() const
{
    return m_Varsizesig;
}

void A::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& A::GetSampletime() const
{
    return m_Sampletime;
}

void A::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& A::GetSignaltype() const
{
    return m_Signaltype;
}

void A::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& A::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void A::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& A::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void A::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& A::GetInterpolate() const
{
    return m_Interpolate;
}

void A::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& A::GetInputconnect() const
{
    return m_Inputconnect;
}

void A::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& A::GetDatamode() const
{
    return m_Datamode;
}

void A::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& A::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void A::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& A::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void A::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& A::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void A::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& A::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void A::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& A::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void A::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
