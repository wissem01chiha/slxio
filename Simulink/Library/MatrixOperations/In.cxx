#include "In.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

In::In() {}

In::~In() {}

const std::string& In::GetPort() const
{
    return m_Port;
}

void In::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& In::GetIcondisplay() const
{
    return m_Icondisplay;
}

void In::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& In::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void In::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& In::GetOutmin() const
{
    return m_Outmin;
}

void In::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& In::GetOutmax() const
{
    return m_Outmax;
}

void In::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& In::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void In::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& In::GetLockscale() const
{
    return m_Lockscale;
}

void In::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& In::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void In::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& In::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void In::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& In::GetUnit() const
{
    return m_Unit;
}

void In::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& In::GetPortdimensions() const
{
    return m_Portdimensions;
}

void In::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& In::GetVarsizesig() const
{
    return m_Varsizesig;
}

void In::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& In::GetSampletime() const
{
    return m_Sampletime;
}

void In::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& In::GetSignaltype() const
{
    return m_Signaltype;
}

void In::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& In::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void In::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& In::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void In::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& In::GetInterpolate() const
{
    return m_Interpolate;
}

void In::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& In::GetInputconnect() const
{
    return m_Inputconnect;
}

void In::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& In::GetDatamode() const
{
    return m_Datamode;
}

void In::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& In::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void In::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& In::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void In::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& In::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void In::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& In::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void In::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& In::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void In::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
