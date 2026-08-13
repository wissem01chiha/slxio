#include "Up.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Up::Up() {}

Up::~Up() {}

const std::string& Up::GetPort() const
{
    return m_Port;
}

void Up::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Up::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Up::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Up::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Up::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Up::GetOutmin() const
{
    return m_Outmin;
}

void Up::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Up::GetOutmax() const
{
    return m_Outmax;
}

void Up::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Up::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Up::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Up::GetLockscale() const
{
    return m_Lockscale;
}

void Up::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Up::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Up::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Up::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Up::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Up::GetUnit() const
{
    return m_Unit;
}

void Up::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Up::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Up::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Up::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Up::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Up::GetSampletime() const
{
    return m_Sampletime;
}

void Up::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Up::GetSignaltype() const
{
    return m_Signaltype;
}

void Up::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Up::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Up::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Up::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Up::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Up::GetInterpolate() const
{
    return m_Interpolate;
}

void Up::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& Up::GetInputconnect() const
{
    return m_Inputconnect;
}

void Up::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Up::GetDatamode() const
{
    return m_Datamode;
}

void Up::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Up::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Up::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Up::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Up::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Up::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Up::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Up::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Up::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Up::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void Up::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
