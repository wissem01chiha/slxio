#include "Min.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Min::Min() {}

Min::~Min() {}

const std::string& Min::GetPort() const
{
    return m_Port;
}

void Min::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Min::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Min::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Min::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Min::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Min::GetOutmin() const
{
    return m_Outmin;
}

void Min::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Min::GetOutmax() const
{
    return m_Outmax;
}

void Min::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Min::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Min::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Min::GetLockscale() const
{
    return m_Lockscale;
}

void Min::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Min::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Min::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Min::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Min::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Min::GetUnit() const
{
    return m_Unit;
}

void Min::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Min::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Min::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Min::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Min::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Min::GetSampletime() const
{
    return m_Sampletime;
}

void Min::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Min::GetSignaltype() const
{
    return m_Signaltype;
}

void Min::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Min::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Min::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Min::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Min::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Min::GetInterpolate() const
{
    return m_Interpolate;
}

void Min::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Min::GetInputconnect() const
{
    return m_Inputconnect;
}

void Min::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Min::GetDatamode() const
{
    return m_Datamode;
}

void Min::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Min::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Min::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Min::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Min::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Min::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Min::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Min::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Min::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Min::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Min::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
