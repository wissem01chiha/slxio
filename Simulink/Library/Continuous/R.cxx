#include "R.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

R::R() {}

R::~R() {}

const std::string& R::GetPort() const
{
    return m_Port;
}

void R::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& R::GetIcondisplay() const
{
    return m_Icondisplay;
}

void R::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& R::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void R::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& R::GetOutmin() const
{
    return m_Outmin;
}

void R::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& R::GetOutmax() const
{
    return m_Outmax;
}

void R::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& R::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void R::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& R::GetLockscale() const
{
    return m_Lockscale;
}

void R::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& R::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void R::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& R::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void R::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& R::GetUnit() const
{
    return m_Unit;
}

void R::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& R::GetPortdimensions() const
{
    return m_Portdimensions;
}

void R::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& R::GetVarsizesig() const
{
    return m_Varsizesig;
}

void R::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& R::GetSampletime() const
{
    return m_Sampletime;
}

void R::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& R::GetSignaltype() const
{
    return m_Signaltype;
}

void R::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& R::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void R::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& R::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void R::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& R::GetInterpolate() const
{
    return m_Interpolate;
}

void R::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& R::GetInputconnect() const
{
    return m_Inputconnect;
}

void R::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& R::GetDatamode() const
{
    return m_Datamode;
}

void R::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& R::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void R::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& R::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void R::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& R::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void R::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& R::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void R::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& R::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void R::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
