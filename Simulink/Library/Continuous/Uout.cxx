#include "Uout.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Uout::Uout() {}

Uout::~Uout() {}

const std::string& Uout::GetPort() const
{
    return m_Port;
}

void Uout::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Uout::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Uout::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Uout::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Uout::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Uout::GetOutmin() const
{
    return m_Outmin;
}

void Uout::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Uout::GetOutmax() const
{
    return m_Outmax;
}

void Uout::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Uout::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Uout::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Uout::GetLockscale() const
{
    return m_Lockscale;
}

void Uout::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Uout::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Uout::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Uout::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Uout::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Uout::GetUnit() const
{
    return m_Unit;
}

void Uout::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Uout::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Uout::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Uout::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Uout::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Uout::GetSampletime() const
{
    return m_Sampletime;
}

void Uout::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Uout::GetSignaltype() const
{
    return m_Signaltype;
}

void Uout::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Uout::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Uout::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Uout::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Uout::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Uout::GetInterpolate() const
{
    return m_Interpolate;
}

void Uout::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Uout::GetInputconnect() const
{
    return m_Inputconnect;
}

void Uout::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Uout::GetDatamode() const
{
    return m_Datamode;
}

void Uout::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Uout::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Uout::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Uout::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Uout::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Uout::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Uout::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Uout::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Uout::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Uout::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Uout::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
