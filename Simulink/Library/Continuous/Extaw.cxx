#include "Extaw.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Extaw::Extaw() {}

Extaw::~Extaw() {}

const std::string& Extaw::GetPort() const
{
    return m_Port;
}

void Extaw::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Extaw::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Extaw::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Extaw::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Extaw::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Extaw::GetOutmin() const
{
    return m_Outmin;
}

void Extaw::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Extaw::GetOutmax() const
{
    return m_Outmax;
}

void Extaw::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Extaw::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Extaw::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Extaw::GetLockscale() const
{
    return m_Lockscale;
}

void Extaw::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Extaw::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Extaw::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Extaw::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Extaw::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Extaw::GetUnit() const
{
    return m_Unit;
}

void Extaw::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Extaw::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Extaw::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Extaw::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Extaw::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Extaw::GetSampletime() const
{
    return m_Sampletime;
}

void Extaw::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Extaw::GetSignaltype() const
{
    return m_Signaltype;
}

void Extaw::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Extaw::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Extaw::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Extaw::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Extaw::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Extaw::GetInterpolate() const
{
    return m_Interpolate;
}

void Extaw::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Extaw::GetInputconnect() const
{
    return m_Inputconnect;
}

void Extaw::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Extaw::GetDatamode() const
{
    return m_Datamode;
}

void Extaw::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Extaw::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Extaw::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Extaw::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Extaw::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Extaw::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Extaw::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Extaw::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Extaw::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Extaw::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Extaw::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
