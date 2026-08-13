#include "NGain.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

NGain::NGain() {}

NGain::~NGain() {}

const std::string& NGain::GetPort() const
{
    return m_Port;
}

void NGain::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& NGain::GetIcondisplay() const
{
    return m_Icondisplay;
}

void NGain::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& NGain::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void NGain::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& NGain::GetOutmin() const
{
    return m_Outmin;
}

void NGain::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& NGain::GetOutmax() const
{
    return m_Outmax;
}

void NGain::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& NGain::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void NGain::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& NGain::GetLockscale() const
{
    return m_Lockscale;
}

void NGain::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& NGain::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void NGain::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& NGain::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void NGain::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& NGain::GetUnit() const
{
    return m_Unit;
}

void NGain::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& NGain::GetPortdimensions() const
{
    return m_Portdimensions;
}

void NGain::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& NGain::GetVarsizesig() const
{
    return m_Varsizesig;
}

void NGain::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& NGain::GetSampletime() const
{
    return m_Sampletime;
}

void NGain::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& NGain::GetSignaltype() const
{
    return m_Signaltype;
}

void NGain::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& NGain::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void NGain::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& NGain::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void NGain::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& NGain::GetInterpolate() const
{
    return m_Interpolate;
}

void NGain::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& NGain::GetInputconnect() const
{
    return m_Inputconnect;
}

void NGain::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& NGain::GetDatamode() const
{
    return m_Datamode;
}

void NGain::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& NGain::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void NGain::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& NGain::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void NGain::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& NGain::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void NGain::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& NGain::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void NGain::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& NGain::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void NGain::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
