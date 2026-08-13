#include "Presat.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Presat::Presat() {}

Presat::~Presat() {}

const std::string& Presat::GetPort() const
{
    return m_Port;
}

void Presat::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Presat::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Presat::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Presat::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Presat::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Presat::GetOutmin() const
{
    return m_Outmin;
}

void Presat::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Presat::GetOutmax() const
{
    return m_Outmax;
}

void Presat::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Presat::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Presat::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Presat::GetLockscale() const
{
    return m_Lockscale;
}

void Presat::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Presat::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Presat::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Presat::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Presat::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Presat::GetUnit() const
{
    return m_Unit;
}

void Presat::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Presat::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Presat::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Presat::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Presat::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Presat::GetSampletime() const
{
    return m_Sampletime;
}

void Presat::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Presat::GetSignaltype() const
{
    return m_Signaltype;
}

void Presat::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Presat::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Presat::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Presat::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Presat::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Presat::GetInterpolate() const
{
    return m_Interpolate;
}

void Presat::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Presat::GetInputconnect() const
{
    return m_Inputconnect;
}

void Presat::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Presat::GetDatamode() const
{
    return m_Datamode;
}

void Presat::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Presat::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Presat::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Presat::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Presat::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Presat::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Presat::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Presat::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Presat::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Presat::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Presat::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
