#include "LowerLimit.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

LowerLimit::LowerLimit() {}

LowerLimit::~LowerLimit() {}

const std::string& LowerLimit::GetPort() const
{
    return m_Port;
}

void LowerLimit::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& LowerLimit::GetIcondisplay() const
{
    return m_Icondisplay;
}

void LowerLimit::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& LowerLimit::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void LowerLimit::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& LowerLimit::GetOutmin() const
{
    return m_Outmin;
}

void LowerLimit::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& LowerLimit::GetOutmax() const
{
    return m_Outmax;
}

void LowerLimit::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& LowerLimit::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void LowerLimit::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& LowerLimit::GetLockscale() const
{
    return m_Lockscale;
}

void LowerLimit::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& LowerLimit::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void LowerLimit::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& LowerLimit::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void LowerLimit::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& LowerLimit::GetUnit() const
{
    return m_Unit;
}

void LowerLimit::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& LowerLimit::GetPortdimensions() const
{
    return m_Portdimensions;
}

void LowerLimit::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& LowerLimit::GetVarsizesig() const
{
    return m_Varsizesig;
}

void LowerLimit::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& LowerLimit::GetSampletime() const
{
    return m_Sampletime;
}

void LowerLimit::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& LowerLimit::GetSignaltype() const
{
    return m_Signaltype;
}

void LowerLimit::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& LowerLimit::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void LowerLimit::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& LowerLimit::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void LowerLimit::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& LowerLimit::GetInterpolate() const
{
    return m_Interpolate;
}

void LowerLimit::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& LowerLimit::GetInputconnect() const
{
    return m_Inputconnect;
}

void LowerLimit::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& LowerLimit::GetDatamode() const
{
    return m_Datamode;
}

void LowerLimit::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& LowerLimit::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void LowerLimit::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& LowerLimit::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void LowerLimit::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& LowerLimit::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void LowerLimit::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& LowerLimit::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void LowerLimit::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& LowerLimit::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void LowerLimit::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
