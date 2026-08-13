#include "Tr.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Tr::Tr() {}

Tr::~Tr() {}

const std::string& Tr::GetPort() const
{
    return m_Port;
}

void Tr::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Tr::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Tr::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Tr::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Tr::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Tr::GetOutmin() const
{
    return m_Outmin;
}

void Tr::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Tr::GetOutmax() const
{
    return m_Outmax;
}

void Tr::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Tr::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Tr::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Tr::GetLockscale() const
{
    return m_Lockscale;
}

void Tr::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Tr::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Tr::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Tr::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Tr::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Tr::GetUnit() const
{
    return m_Unit;
}

void Tr::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Tr::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Tr::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Tr::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Tr::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Tr::GetSampletime() const
{
    return m_Sampletime;
}

void Tr::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Tr::GetSignaltype() const
{
    return m_Signaltype;
}

void Tr::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Tr::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Tr::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Tr::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Tr::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Tr::GetInterpolate() const
{
    return m_Interpolate;
}

void Tr::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Tr::GetInputconnect() const
{
    return m_Inputconnect;
}

void Tr::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Tr::GetDatamode() const
{
    return m_Datamode;
}

void Tr::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Tr::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Tr::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Tr::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Tr::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Tr::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Tr::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Tr::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Tr::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Tr::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Tr::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
