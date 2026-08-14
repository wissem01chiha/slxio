#include "Inport.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Inport::Inport() {}

Inport::~Inport() {}

const std::string& Inport::GetPort() const { return m_Port; }

void Inport::SetPort(const std::string& value) { m_Port = value; }

const std::string& Inport::GetIcondisplay() const { return m_Icondisplay; }

void Inport::SetIcondisplay(const std::string& value) { m_Icondisplay = value; }

const std::string& Inport::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Inport::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Inport::GetOutmin() const { return m_Outmin; }

void Inport::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& Inport::GetOutmax() const { return m_Outmax; }

void Inport::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& Inport::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Inport::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Inport::GetLockscale() const { return m_Lockscale; }

void Inport::SetLockscale(const std::string& value) { m_Lockscale = value; }

const std::string& Inport::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Inport::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Inport::GetBusvirtuality() const { return m_Busvirtuality; }

void Inport::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Inport::GetUnit() const { return m_Unit; }

void Inport::SetUnit(const std::string& value) { m_Unit = value; }

const std::string& Inport::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Inport::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Inport::GetVarsizesig() const { return m_Varsizesig; }

void Inport::SetVarsizesig(const std::string& value) { m_Varsizesig = value; }

const std::string& Inport::GetSampletime() const { return m_Sampletime; }

void Inport::SetSampletime(const std::string& value) { m_Sampletime = value; }

const std::string& Inport::GetSignaltype() const { return m_Signaltype; }

void Inport::SetSignaltype(const std::string& value) { m_Signaltype = value; }

const std::string& Inport::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Inport::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Inport::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Inport::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Inport::GetInterpolate() const { return m_Interpolate; }

void Inport::SetInterpolate(const std::string& value) { m_Interpolate = value; }

const std::string& Inport::GetInputconnect() const { return m_Inputconnect; }

void Inport::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Inport::GetDatamode() const { return m_Datamode; }

void Inport::SetDatamode(const std::string& value) { m_Datamode = value; }

const std::string& Inport::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Inport::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Inport::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Inport::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Inport::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Inport::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Inport::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Inport::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Inport::GetEventtriggers() const { return m_Eventtriggers; }

void Inport::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
