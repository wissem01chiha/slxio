#include "Postsat.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Postsat::Postsat() {}

Postsat::~Postsat() {}

const std::string& Postsat::GetPort() const
{
    return m_Port;
}

void Postsat::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Postsat::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Postsat::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Postsat::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Postsat::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Postsat::GetOutmin() const
{
    return m_Outmin;
}

void Postsat::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Postsat::GetOutmax() const
{
    return m_Outmax;
}

void Postsat::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Postsat::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Postsat::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Postsat::GetLockscale() const
{
    return m_Lockscale;
}

void Postsat::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Postsat::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Postsat::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Postsat::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Postsat::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Postsat::GetUnit() const
{
    return m_Unit;
}

void Postsat::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Postsat::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Postsat::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Postsat::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Postsat::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Postsat::GetSampletime() const
{
    return m_Sampletime;
}

void Postsat::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Postsat::GetSignaltype() const
{
    return m_Signaltype;
}

void Postsat::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Postsat::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Postsat::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Postsat::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Postsat::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Postsat::GetInterpolate() const
{
    return m_Interpolate;
}

void Postsat::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Postsat::GetInputconnect() const
{
    return m_Inputconnect;
}

void Postsat::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Postsat::GetDatamode() const
{
    return m_Datamode;
}

void Postsat::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Postsat::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Postsat::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Postsat::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Postsat::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Postsat::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Postsat::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Postsat::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Postsat::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Postsat::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Postsat::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
