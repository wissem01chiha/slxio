#include "D0.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

D0::D0() {}

D0::~D0() {}

const std::string& D0::GetPort() const
{
    return m_Port;
}

void D0::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& D0::GetIcondisplay() const
{
    return m_Icondisplay;
}

void D0::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& D0::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void D0::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& D0::GetOutmin() const
{
    return m_Outmin;
}

void D0::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& D0::GetOutmax() const
{
    return m_Outmax;
}

void D0::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& D0::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void D0::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& D0::GetLockscale() const
{
    return m_Lockscale;
}

void D0::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& D0::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void D0::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& D0::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void D0::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& D0::GetUnit() const
{
    return m_Unit;
}

void D0::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& D0::GetPortdimensions() const
{
    return m_Portdimensions;
}

void D0::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& D0::GetVarsizesig() const
{
    return m_Varsizesig;
}

void D0::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& D0::GetSampletime() const
{
    return m_Sampletime;
}

void D0::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& D0::GetSignaltype() const
{
    return m_Signaltype;
}

void D0::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& D0::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void D0::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& D0::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void D0::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& D0::GetInterpolate() const
{
    return m_Interpolate;
}

void D0::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& D0::GetInputconnect() const
{
    return m_Inputconnect;
}

void D0::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& D0::GetDatamode() const
{
    return m_Datamode;
}

void D0::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& D0::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void D0::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& D0::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void D0::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& D0::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void D0::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& D0::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void D0::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& D0::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void D0::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
