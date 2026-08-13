#include "D.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

D::D() {}

D::~D() {}

const std::string& D::GetPort() const
{
    return m_Port;
}

void D::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& D::GetIcondisplay() const
{
    return m_Icondisplay;
}

void D::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& D::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void D::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& D::GetOutmin() const
{
    return m_Outmin;
}

void D::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& D::GetOutmax() const
{
    return m_Outmax;
}

void D::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& D::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void D::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& D::GetLockscale() const
{
    return m_Lockscale;
}

void D::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& D::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void D::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& D::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void D::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& D::GetUnit() const
{
    return m_Unit;
}

void D::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& D::GetPortdimensions() const
{
    return m_Portdimensions;
}

void D::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& D::GetVarsizesig() const
{
    return m_Varsizesig;
}

void D::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& D::GetSampletime() const
{
    return m_Sampletime;
}

void D::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& D::GetSignaltype() const
{
    return m_Signaltype;
}

void D::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& D::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void D::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& D::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void D::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& D::GetInterpolate() const
{
    return m_Interpolate;
}

void D::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& D::GetInputconnect() const
{
    return m_Inputconnect;
}

void D::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& D::GetDatamode() const
{
    return m_Datamode;
}

void D::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& D::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void D::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& D::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void D::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& D::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void D::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& D::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void D::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& D::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void D::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
