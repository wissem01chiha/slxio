#include "R1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

R1::R1() {}

R1::~R1() {}

const std::string& R1::GetPort() const
{
    return m_Port;
}

void R1::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& R1::GetIcondisplay() const
{
    return m_Icondisplay;
}

void R1::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& R1::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void R1::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& R1::GetOutmin() const
{
    return m_Outmin;
}

void R1::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& R1::GetOutmax() const
{
    return m_Outmax;
}

void R1::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& R1::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void R1::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& R1::GetLockscale() const
{
    return m_Lockscale;
}

void R1::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& R1::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void R1::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& R1::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void R1::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& R1::GetUnit() const
{
    return m_Unit;
}

void R1::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& R1::GetPortdimensions() const
{
    return m_Portdimensions;
}

void R1::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& R1::GetVarsizesig() const
{
    return m_Varsizesig;
}

void R1::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& R1::GetSampletime() const
{
    return m_Sampletime;
}

void R1::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& R1::GetSignaltype() const
{
    return m_Signaltype;
}

void R1::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& R1::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void R1::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& R1::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void R1::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& R1::GetInterpolate() const
{
    return m_Interpolate;
}

void R1::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& R1::GetInputconnect() const
{
    return m_Inputconnect;
}

void R1::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& R1::GetDatamode() const
{
    return m_Datamode;
}

void R1::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& R1::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void R1::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& R1::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void R1::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& R1::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void R1::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& R1::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void R1::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& R1::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void R1::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
