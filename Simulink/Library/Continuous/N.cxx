#include "N.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

N::N() {}

N::~N() {}

const std::string& N::GetPort() const
{
    return m_Port;
}

void N::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& N::GetIcondisplay() const
{
    return m_Icondisplay;
}

void N::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& N::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void N::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& N::GetOutmin() const
{
    return m_Outmin;
}

void N::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& N::GetOutmax() const
{
    return m_Outmax;
}

void N::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& N::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void N::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& N::GetLockscale() const
{
    return m_Lockscale;
}

void N::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& N::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void N::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& N::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void N::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& N::GetUnit() const
{
    return m_Unit;
}

void N::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& N::GetPortdimensions() const
{
    return m_Portdimensions;
}

void N::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& N::GetVarsizesig() const
{
    return m_Varsizesig;
}

void N::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& N::GetSampletime() const
{
    return m_Sampletime;
}

void N::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& N::GetSignaltype() const
{
    return m_Signaltype;
}

void N::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& N::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void N::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& N::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void N::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& N::GetInterpolate() const
{
    return m_Interpolate;
}

void N::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& N::GetInputconnect() const
{
    return m_Inputconnect;
}

void N::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& N::GetDatamode() const
{
    return m_Datamode;
}

void N::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& N::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void N::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& N::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void N::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& N::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void N::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& N::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void N::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& N::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void N::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
