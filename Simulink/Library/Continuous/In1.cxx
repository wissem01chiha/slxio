#include "In1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

In1::In1() {}

In1::~In1() {}

const std::string& In1::GetPort() const
{
    return m_Port;
}

void In1::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& In1::GetIcondisplay() const
{
    return m_Icondisplay;
}

void In1::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& In1::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void In1::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& In1::GetOutmin() const
{
    return m_Outmin;
}

void In1::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& In1::GetOutmax() const
{
    return m_Outmax;
}

void In1::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& In1::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void In1::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& In1::GetLockscale() const
{
    return m_Lockscale;
}

void In1::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& In1::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void In1::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& In1::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void In1::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& In1::GetUnit() const
{
    return m_Unit;
}

void In1::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& In1::GetPortdimensions() const
{
    return m_Portdimensions;
}

void In1::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& In1::GetVarsizesig() const
{
    return m_Varsizesig;
}

void In1::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& In1::GetSampletime() const
{
    return m_Sampletime;
}

void In1::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& In1::GetSignaltype() const
{
    return m_Signaltype;
}

void In1::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& In1::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void In1::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& In1::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void In1::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& In1::GetInterpolate() const
{
    return m_Interpolate;
}

void In1::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& In1::GetInputconnect() const
{
    return m_Inputconnect;
}

void In1::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& In1::GetDatamode() const
{
    return m_Datamode;
}

void In1::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& In1::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void In1::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& In1::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void In1::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& In1::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void In1::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& In1::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void In1::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& In1::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void In1::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
