#include "D0in.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

D0in::D0in() {}

D0in::~D0in() {}

const std::string& D0in::GetPort() const
{
    return m_Port;
}

void D0in::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& D0in::GetIcondisplay() const
{
    return m_Icondisplay;
}

void D0in::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& D0in::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void D0in::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& D0in::GetOutmin() const
{
    return m_Outmin;
}

void D0in::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& D0in::GetOutmax() const
{
    return m_Outmax;
}

void D0in::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& D0in::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void D0in::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& D0in::GetLockscale() const
{
    return m_Lockscale;
}

void D0in::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& D0in::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void D0in::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& D0in::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void D0in::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& D0in::GetUnit() const
{
    return m_Unit;
}

void D0in::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& D0in::GetPortdimensions() const
{
    return m_Portdimensions;
}

void D0in::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& D0in::GetVarsizesig() const
{
    return m_Varsizesig;
}

void D0in::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& D0in::GetSampletime() const
{
    return m_Sampletime;
}

void D0in::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& D0in::GetSignaltype() const
{
    return m_Signaltype;
}

void D0in::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& D0in::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void D0in::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& D0in::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void D0in::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& D0in::GetInterpolate() const
{
    return m_Interpolate;
}

void D0in::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& D0in::GetInputconnect() const
{
    return m_Inputconnect;
}

void D0in::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& D0in::GetDatamode() const
{
    return m_Datamode;
}

void D0in::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& D0in::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void D0in::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& D0in::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void D0in::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& D0in::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void D0in::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& D0in::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void D0in::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& D0in::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void D0in::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
