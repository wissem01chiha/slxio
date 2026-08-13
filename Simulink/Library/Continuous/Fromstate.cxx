#include "Fromstate.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Fromstate::Fromstate() {}

Fromstate::~Fromstate() {}

const std::string& Fromstate::GetPort() const
{
    return m_Port;
}

void Fromstate::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Fromstate::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Fromstate::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Fromstate::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Fromstate::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Fromstate::GetOutmin() const
{
    return m_Outmin;
}

void Fromstate::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Fromstate::GetOutmax() const
{
    return m_Outmax;
}

void Fromstate::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Fromstate::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Fromstate::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Fromstate::GetLockscale() const
{
    return m_Lockscale;
}

void Fromstate::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Fromstate::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Fromstate::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Fromstate::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Fromstate::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Fromstate::GetUnit() const
{
    return m_Unit;
}

void Fromstate::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Fromstate::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Fromstate::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Fromstate::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Fromstate::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Fromstate::GetSampletime() const
{
    return m_Sampletime;
}

void Fromstate::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Fromstate::GetSignaltype() const
{
    return m_Signaltype;
}

void Fromstate::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Fromstate::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Fromstate::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Fromstate::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Fromstate::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Fromstate::GetInterpolate() const
{
    return m_Interpolate;
}

void Fromstate::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Fromstate::GetInputconnect() const
{
    return m_Inputconnect;
}

void Fromstate::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Fromstate::GetDatamode() const
{
    return m_Datamode;
}

void Fromstate::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Fromstate::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Fromstate::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Fromstate::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Fromstate::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Fromstate::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Fromstate::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Fromstate::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Fromstate::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Fromstate::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Fromstate::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
