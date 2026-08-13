#include "I0.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

I0::I0() {}

I0::~I0() {}

const std::string& I0::GetPort() const
{
    return m_Port;
}

void I0::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& I0::GetIcondisplay() const
{
    return m_Icondisplay;
}

void I0::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& I0::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void I0::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& I0::GetOutmin() const
{
    return m_Outmin;
}

void I0::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& I0::GetOutmax() const
{
    return m_Outmax;
}

void I0::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& I0::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void I0::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& I0::GetLockscale() const
{
    return m_Lockscale;
}

void I0::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& I0::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void I0::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& I0::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void I0::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& I0::GetUnit() const
{
    return m_Unit;
}

void I0::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& I0::GetPortdimensions() const
{
    return m_Portdimensions;
}

void I0::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& I0::GetVarsizesig() const
{
    return m_Varsizesig;
}

void I0::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& I0::GetSampletime() const
{
    return m_Sampletime;
}

void I0::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& I0::GetSignaltype() const
{
    return m_Signaltype;
}

void I0::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& I0::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void I0::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& I0::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void I0::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& I0::GetInterpolate() const
{
    return m_Interpolate;
}

void I0::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& I0::GetInputconnect() const
{
    return m_Inputconnect;
}

void I0::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& I0::GetDatamode() const
{
    return m_Datamode;
}

void I0::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& I0::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void I0::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& I0::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void I0::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& I0::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void I0::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& I0::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void I0::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& I0::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void I0::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
