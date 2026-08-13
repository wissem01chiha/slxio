#include "B.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

B::B() {}

B::~B() {}

const std::string& B::GetPort() const
{
    return m_Port;
}

void B::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& B::GetIcondisplay() const
{
    return m_Icondisplay;
}

void B::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& B::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void B::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& B::GetOutmin() const
{
    return m_Outmin;
}

void B::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& B::GetOutmax() const
{
    return m_Outmax;
}

void B::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& B::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void B::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& B::GetLockscale() const
{
    return m_Lockscale;
}

void B::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& B::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void B::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& B::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void B::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& B::GetUnit() const
{
    return m_Unit;
}

void B::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& B::GetPortdimensions() const
{
    return m_Portdimensions;
}

void B::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& B::GetVarsizesig() const
{
    return m_Varsizesig;
}

void B::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& B::GetSampletime() const
{
    return m_Sampletime;
}

void B::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& B::GetSignaltype() const
{
    return m_Signaltype;
}

void B::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& B::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void B::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& B::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void B::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& B::GetInterpolate() const
{
    return m_Interpolate;
}

void B::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& B::GetInputconnect() const
{
    return m_Inputconnect;
}

void B::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& B::GetDatamode() const
{
    return m_Datamode;
}

void B::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& B::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void B::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& B::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void B::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& B::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void B::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& B::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void B::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& B::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void B::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
