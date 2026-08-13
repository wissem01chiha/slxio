#include "Num.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Num::Num() {}

Num::~Num() {}

const std::string& Num::GetPort() const
{
    return m_Port;
}

void Num::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Num::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Num::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Num::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Num::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Num::GetOutmin() const
{
    return m_Outmin;
}

void Num::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Num::GetOutmax() const
{
    return m_Outmax;
}

void Num::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Num::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Num::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Num::GetLockscale() const
{
    return m_Lockscale;
}

void Num::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Num::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Num::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Num::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Num::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Num::GetUnit() const
{
    return m_Unit;
}

void Num::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Num::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Num::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Num::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Num::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Num::GetSampletime() const
{
    return m_Sampletime;
}

void Num::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Num::GetSignaltype() const
{
    return m_Signaltype;
}

void Num::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Num::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Num::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Num::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Num::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Num::GetInterpolate() const
{
    return m_Interpolate;
}

void Num::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Num::GetInputconnect() const
{
    return m_Inputconnect;
}

void Num::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Num::GetDatamode() const
{
    return m_Datamode;
}

void Num::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Num::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Num::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Num::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Num::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Num::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Num::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Num::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Num::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Num::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Num::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
