#include "DtsReference.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DtsReference::DtsReference() {}

DtsReference::~DtsReference() {}

const std::string& DtsReference::GetPort() const
{
    return m_Port;
}

void DtsReference::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& DtsReference::GetIcondisplay() const
{
    return m_Icondisplay;
}

void DtsReference::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& DtsReference::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void DtsReference::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& DtsReference::GetOutmin() const
{
    return m_Outmin;
}

void DtsReference::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& DtsReference::GetOutmax() const
{
    return m_Outmax;
}

void DtsReference::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& DtsReference::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DtsReference::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& DtsReference::GetLockscale() const
{
    return m_Lockscale;
}

void DtsReference::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& DtsReference::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void DtsReference::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& DtsReference::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void DtsReference::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& DtsReference::GetUnit() const
{
    return m_Unit;
}

void DtsReference::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& DtsReference::GetPortdimensions() const
{
    return m_Portdimensions;
}

void DtsReference::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& DtsReference::GetVarsizesig() const
{
    return m_Varsizesig;
}

void DtsReference::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& DtsReference::GetSampletime() const
{
    return m_Sampletime;
}

void DtsReference::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& DtsReference::GetSignaltype() const
{
    return m_Signaltype;
}

void DtsReference::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& DtsReference::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void DtsReference::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& DtsReference::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void DtsReference::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& DtsReference::GetInterpolate() const
{
    return m_Interpolate;
}

void DtsReference::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& DtsReference::GetInputconnect() const
{
    return m_Inputconnect;
}

void DtsReference::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& DtsReference::GetDatamode() const
{
    return m_Datamode;
}

void DtsReference::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& DtsReference::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void DtsReference::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& DtsReference::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void DtsReference::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& DtsReference::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void DtsReference::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& DtsReference::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void DtsReference::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& DtsReference::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void DtsReference::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
