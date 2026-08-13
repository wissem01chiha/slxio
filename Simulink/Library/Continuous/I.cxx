#include "I.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

I::I() {}

I::~I() {}

const std::string& I::GetPort() const
{
    return m_Port;
}

void I::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& I::GetIcondisplay() const
{
    return m_Icondisplay;
}

void I::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& I::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void I::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& I::GetOutmin() const
{
    return m_Outmin;
}

void I::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& I::GetOutmax() const
{
    return m_Outmax;
}

void I::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& I::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void I::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& I::GetLockscale() const
{
    return m_Lockscale;
}

void I::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& I::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void I::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& I::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void I::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& I::GetUnit() const
{
    return m_Unit;
}

void I::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& I::GetPortdimensions() const
{
    return m_Portdimensions;
}

void I::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& I::GetVarsizesig() const
{
    return m_Varsizesig;
}

void I::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& I::GetSampletime() const
{
    return m_Sampletime;
}

void I::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& I::GetSignaltype() const
{
    return m_Signaltype;
}

void I::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& I::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void I::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& I::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void I::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& I::GetInterpolate() const
{
    return m_Interpolate;
}

void I::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& I::GetInputconnect() const
{
    return m_Inputconnect;
}

void I::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& I::GetDatamode() const
{
    return m_Datamode;
}

void I::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& I::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void I::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& I::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void I::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& I::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void I::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& I::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void I::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& I::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void I::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
