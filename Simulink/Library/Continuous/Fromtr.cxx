#include "Fromtr.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Fromtr::Fromtr() {}

Fromtr::~Fromtr() {}

const std::string& Fromtr::GetPort() const
{
    return m_Port;
}

void Fromtr::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Fromtr::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Fromtr::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Fromtr::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Fromtr::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Fromtr::GetOutmin() const
{
    return m_Outmin;
}

void Fromtr::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Fromtr::GetOutmax() const
{
    return m_Outmax;
}

void Fromtr::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Fromtr::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Fromtr::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Fromtr::GetLockscale() const
{
    return m_Lockscale;
}

void Fromtr::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Fromtr::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Fromtr::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Fromtr::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Fromtr::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Fromtr::GetUnit() const
{
    return m_Unit;
}

void Fromtr::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Fromtr::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Fromtr::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Fromtr::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Fromtr::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Fromtr::GetSampletime() const
{
    return m_Sampletime;
}

void Fromtr::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Fromtr::GetSignaltype() const
{
    return m_Signaltype;
}

void Fromtr::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Fromtr::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Fromtr::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Fromtr::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Fromtr::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Fromtr::GetInterpolate() const
{
    return m_Interpolate;
}

void Fromtr::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Fromtr::GetInputconnect() const
{
    return m_Inputconnect;
}

void Fromtr::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Fromtr::GetDatamode() const
{
    return m_Datamode;
}

void Fromtr::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Fromtr::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Fromtr::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Fromtr::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Fromtr::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Fromtr::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Fromtr::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Fromtr::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Fromtr::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Fromtr::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Fromtr::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
