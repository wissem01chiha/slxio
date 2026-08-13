#include "Fromigain.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Fromigain::Fromigain() {}

Fromigain::~Fromigain() {}

const std::string& Fromigain::GetPort() const
{
    return m_Port;
}

void Fromigain::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Fromigain::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Fromigain::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Fromigain::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Fromigain::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Fromigain::GetOutmin() const
{
    return m_Outmin;
}

void Fromigain::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Fromigain::GetOutmax() const
{
    return m_Outmax;
}

void Fromigain::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Fromigain::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Fromigain::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Fromigain::GetLockscale() const
{
    return m_Lockscale;
}

void Fromigain::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Fromigain::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Fromigain::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Fromigain::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Fromigain::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Fromigain::GetUnit() const
{
    return m_Unit;
}

void Fromigain::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Fromigain::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Fromigain::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Fromigain::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Fromigain::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Fromigain::GetSampletime() const
{
    return m_Sampletime;
}

void Fromigain::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Fromigain::GetSignaltype() const
{
    return m_Signaltype;
}

void Fromigain::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Fromigain::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Fromigain::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Fromigain::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Fromigain::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Fromigain::GetInterpolate() const
{
    return m_Interpolate;
}

void Fromigain::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Fromigain::GetInputconnect() const
{
    return m_Inputconnect;
}

void Fromigain::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Fromigain::GetDatamode() const
{
    return m_Datamode;
}

void Fromigain::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Fromigain::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Fromigain::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Fromigain::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Fromigain::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Fromigain::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Fromigain::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Fromigain::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Fromigain::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Fromigain::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Fromigain::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
