#include "DenNoLead.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DenNoLead::DenNoLead() {}

DenNoLead::~DenNoLead() {}

const std::string& DenNoLead::GetPort() const
{
    return m_Port;
}

void DenNoLead::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& DenNoLead::GetIcondisplay() const
{
    return m_Icondisplay;
}

void DenNoLead::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& DenNoLead::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void DenNoLead::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& DenNoLead::GetOutmin() const
{
    return m_Outmin;
}

void DenNoLead::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& DenNoLead::GetOutmax() const
{
    return m_Outmax;
}

void DenNoLead::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& DenNoLead::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DenNoLead::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& DenNoLead::GetLockscale() const
{
    return m_Lockscale;
}

void DenNoLead::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& DenNoLead::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void DenNoLead::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& DenNoLead::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void DenNoLead::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& DenNoLead::GetUnit() const
{
    return m_Unit;
}

void DenNoLead::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& DenNoLead::GetPortdimensions() const
{
    return m_Portdimensions;
}

void DenNoLead::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& DenNoLead::GetVarsizesig() const
{
    return m_Varsizesig;
}

void DenNoLead::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& DenNoLead::GetSampletime() const
{
    return m_Sampletime;
}

void DenNoLead::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& DenNoLead::GetSignaltype() const
{
    return m_Signaltype;
}

void DenNoLead::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& DenNoLead::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void DenNoLead::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& DenNoLead::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void DenNoLead::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& DenNoLead::GetInterpolate() const
{
    return m_Interpolate;
}

void DenNoLead::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& DenNoLead::GetInputconnect() const
{
    return m_Inputconnect;
}

void DenNoLead::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& DenNoLead::GetDatamode() const
{
    return m_Datamode;
}

void DenNoLead::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& DenNoLead::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void DenNoLead::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& DenNoLead::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void DenNoLead::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& DenNoLead::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void DenNoLead::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& DenNoLead::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void DenNoLead::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& DenNoLead::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void DenNoLead::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
