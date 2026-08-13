#include "Dc.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Dc::Dc() {}

Dc::~Dc() {}

const std::string& Dc::GetPort() const
{
    return m_Port;
}

void Dc::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Dc::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Dc::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Dc::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Dc::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Dc::GetOutmin() const
{
    return m_Outmin;
}

void Dc::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Dc::GetOutmax() const
{
    return m_Outmax;
}

void Dc::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Dc::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Dc::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Dc::GetLockscale() const
{
    return m_Lockscale;
}

void Dc::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Dc::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Dc::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Dc::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Dc::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Dc::GetUnit() const
{
    return m_Unit;
}

void Dc::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Dc::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Dc::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Dc::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Dc::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Dc::GetSampletime() const
{
    return m_Sampletime;
}

void Dc::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Dc::GetSignaltype() const
{
    return m_Signaltype;
}

void Dc::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Dc::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Dc::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Dc::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Dc::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Dc::GetInterpolate() const
{
    return m_Interpolate;
}

void Dc::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Dc::GetInputconnect() const
{
    return m_Inputconnect;
}

void Dc::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Dc::GetDatamode() const
{
    return m_Datamode;
}

void Dc::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Dc::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Dc::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Dc::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Dc::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Dc::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Dc::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Dc::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Dc::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Dc::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Dc::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
