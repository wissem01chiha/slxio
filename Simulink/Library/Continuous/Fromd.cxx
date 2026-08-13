#include "Fromd.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Fromd::Fromd() {}

Fromd::~Fromd() {}

const std::string& Fromd::GetPort() const
{
    return m_Port;
}

void Fromd::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Fromd::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Fromd::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Fromd::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Fromd::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Fromd::GetOutmin() const
{
    return m_Outmin;
}

void Fromd::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Fromd::GetOutmax() const
{
    return m_Outmax;
}

void Fromd::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Fromd::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Fromd::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Fromd::GetLockscale() const
{
    return m_Lockscale;
}

void Fromd::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Fromd::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Fromd::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Fromd::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Fromd::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Fromd::GetUnit() const
{
    return m_Unit;
}

void Fromd::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Fromd::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Fromd::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Fromd::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Fromd::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Fromd::GetSampletime() const
{
    return m_Sampletime;
}

void Fromd::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Fromd::GetSignaltype() const
{
    return m_Signaltype;
}

void Fromd::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Fromd::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Fromd::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Fromd::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Fromd::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Fromd::GetInterpolate() const
{
    return m_Interpolate;
}

void Fromd::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Fromd::GetInputconnect() const
{
    return m_Inputconnect;
}

void Fromd::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Fromd::GetDatamode() const
{
    return m_Datamode;
}

void Fromd::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Fromd::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Fromd::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Fromd::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Fromd::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Fromd::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Fromd::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Fromd::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Fromd::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Fromd::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Fromd::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
