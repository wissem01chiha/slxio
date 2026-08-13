#include "Err.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Err::Err() {}

Err::~Err() {}

const std::string& Err::GetPort() const
{
    return m_Port;
}

void Err::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Err::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Err::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Err::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Err::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Err::GetOutmin() const
{
    return m_Outmin;
}

void Err::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Err::GetOutmax() const
{
    return m_Outmax;
}

void Err::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Err::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Err::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Err::GetLockscale() const
{
    return m_Lockscale;
}

void Err::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Err::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Err::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Err::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Err::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Err::GetUnit() const
{
    return m_Unit;
}

void Err::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Err::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Err::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Err::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Err::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Err::GetSampletime() const
{
    return m_Sampletime;
}

void Err::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Err::GetSignaltype() const
{
    return m_Signaltype;
}

void Err::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Err::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Err::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Err::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Err::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Err::GetInterpolate() const
{
    return m_Interpolate;
}

void Err::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Err::GetInputconnect() const
{
    return m_Inputconnect;
}

void Err::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Err::GetDatamode() const
{
    return m_Datamode;
}

void Err::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Err::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Err::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Err::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Err::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Err::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Err::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Err::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Err::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Err::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Err::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
