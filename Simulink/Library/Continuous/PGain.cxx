#include "PGain.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

PGain::PGain() {}

PGain::~PGain() {}

const std::string& PGain::GetPort() const
{
    return m_Port;
}

void PGain::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& PGain::GetIcondisplay() const
{
    return m_Icondisplay;
}

void PGain::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& PGain::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void PGain::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& PGain::GetOutmin() const
{
    return m_Outmin;
}

void PGain::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& PGain::GetOutmax() const
{
    return m_Outmax;
}

void PGain::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& PGain::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void PGain::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& PGain::GetLockscale() const
{
    return m_Lockscale;
}

void PGain::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& PGain::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void PGain::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& PGain::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void PGain::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& PGain::GetUnit() const
{
    return m_Unit;
}

void PGain::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& PGain::GetPortdimensions() const
{
    return m_Portdimensions;
}

void PGain::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& PGain::GetVarsizesig() const
{
    return m_Varsizesig;
}

void PGain::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& PGain::GetSampletime() const
{
    return m_Sampletime;
}

void PGain::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& PGain::GetSignaltype() const
{
    return m_Signaltype;
}

void PGain::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& PGain::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void PGain::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& PGain::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void PGain::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& PGain::GetInterpolate() const
{
    return m_Interpolate;
}

void PGain::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& PGain::GetInputconnect() const
{
    return m_Inputconnect;
}

void PGain::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& PGain::GetDatamode() const
{
    return m_Datamode;
}

void PGain::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& PGain::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void PGain::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& PGain::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void PGain::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& PGain::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void PGain::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& PGain::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void PGain::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& PGain::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void PGain::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
