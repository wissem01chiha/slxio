#include "I0in.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

I0in::I0in() {}

I0in::~I0in() {}

const std::string& I0in::GetPort() const
{
    return m_Port;
}

void I0in::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& I0in::GetIcondisplay() const
{
    return m_Icondisplay;
}

void I0in::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& I0in::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void I0in::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& I0in::GetOutmin() const
{
    return m_Outmin;
}

void I0in::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& I0in::GetOutmax() const
{
    return m_Outmax;
}

void I0in::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& I0in::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void I0in::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& I0in::GetLockscale() const
{
    return m_Lockscale;
}

void I0in::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& I0in::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void I0in::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& I0in::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void I0in::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& I0in::GetUnit() const
{
    return m_Unit;
}

void I0in::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& I0in::GetPortdimensions() const
{
    return m_Portdimensions;
}

void I0in::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& I0in::GetVarsizesig() const
{
    return m_Varsizesig;
}

void I0in::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& I0in::GetSampletime() const
{
    return m_Sampletime;
}

void I0in::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& I0in::GetSignaltype() const
{
    return m_Signaltype;
}

void I0in::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& I0in::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void I0in::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& I0in::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void I0in::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& I0in::GetInterpolate() const
{
    return m_Interpolate;
}

void I0in::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& I0in::GetInputconnect() const
{
    return m_Inputconnect;
}

void I0in::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& I0in::GetDatamode() const
{
    return m_Datamode;
}

void I0in::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& I0in::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void I0in::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& I0in::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void I0in::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& I0in::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void I0in::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& I0in::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void I0in::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& I0in::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void I0in::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
