#include "Ts.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Ts::Ts() {}

Ts::~Ts() {}

const std::string& Ts::GetPort() const
{
    return m_Port;
}

void Ts::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Ts::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Ts::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Ts::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Ts::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Ts::GetOutmin() const
{
    return m_Outmin;
}

void Ts::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Ts::GetOutmax() const
{
    return m_Outmax;
}

void Ts::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Ts::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Ts::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Ts::GetLockscale() const
{
    return m_Lockscale;
}

void Ts::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Ts::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Ts::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Ts::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Ts::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Ts::GetUnit() const
{
    return m_Unit;
}

void Ts::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Ts::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Ts::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Ts::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Ts::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Ts::GetSampletime() const
{
    return m_Sampletime;
}

void Ts::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Ts::GetSignaltype() const
{
    return m_Signaltype;
}

void Ts::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Ts::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Ts::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Ts::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Ts::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Ts::GetInterpolate() const
{
    return m_Interpolate;
}

void Ts::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Ts::GetInputconnect() const
{
    return m_Inputconnect;
}

void Ts::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Ts::GetDatamode() const
{
    return m_Datamode;
}

void Ts::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Ts::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Ts::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Ts::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Ts::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Ts::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Ts::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Ts::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Ts::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Ts::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Ts::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
