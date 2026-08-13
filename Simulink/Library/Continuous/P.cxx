#include "P.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

P::P() {}

P::~P() {}

const std::string& P::GetPort() const
{
    return m_Port;
}

void P::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& P::GetIcondisplay() const
{
    return m_Icondisplay;
}

void P::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& P::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void P::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& P::GetOutmin() const
{
    return m_Outmin;
}

void P::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& P::GetOutmax() const
{
    return m_Outmax;
}

void P::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& P::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void P::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& P::GetLockscale() const
{
    return m_Lockscale;
}

void P::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& P::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void P::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& P::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void P::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& P::GetUnit() const
{
    return m_Unit;
}

void P::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& P::GetPortdimensions() const
{
    return m_Portdimensions;
}

void P::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& P::GetVarsizesig() const
{
    return m_Varsizesig;
}

void P::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& P::GetSampletime() const
{
    return m_Sampletime;
}

void P::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& P::GetSignaltype() const
{
    return m_Signaltype;
}

void P::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& P::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void P::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& P::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void P::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& P::GetInterpolate() const
{
    return m_Interpolate;
}

void P::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& P::GetInputconnect() const
{
    return m_Inputconnect;
}

void P::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& P::GetDatamode() const
{
    return m_Datamode;
}

void P::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& P::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void P::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& P::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void P::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& P::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void P::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& P::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void P::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& P::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void P::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
