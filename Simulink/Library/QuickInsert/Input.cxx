#include "Input.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Input::Input() {}

Input::~Input() {}

const std::string& Input::GetPort() const { return m_Port; }

void Input::SetPort(const std::string& value) { m_Port = value; }

const std::string& Input::GetIcondisplay() const { return m_Icondisplay; }

void Input::SetIcondisplay(const std::string& value) { m_Icondisplay = value; }

const std::string& Input::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Input::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Input::GetOutmin() const { return m_Outmin; }

void Input::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& Input::GetOutmax() const { return m_Outmax; }

void Input::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& Input::GetOutdatatypestr() const { return m_Outdatatypestr; }

void Input::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Input::GetLockscale() const { return m_Lockscale; }

void Input::SetLockscale(const std::string& value) { m_Lockscale = value; }

const std::string& Input::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Input::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Input::GetBusvirtuality() const { return m_Busvirtuality; }

void Input::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Input::GetUnit() const { return m_Unit; }

void Input::SetUnit(const std::string& value) { m_Unit = value; }

const std::string& Input::GetPortdimensions() const { return m_Portdimensions; }

void Input::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Input::GetVarsizesig() const { return m_Varsizesig; }

void Input::SetVarsizesig(const std::string& value) { m_Varsizesig = value; }

const std::string& Input::GetSampletime() const { return m_Sampletime; }

void Input::SetSampletime(const std::string& value) { m_Sampletime = value; }

const std::string& Input::GetSignaltype() const { return m_Signaltype; }

void Input::SetSignaltype(const std::string& value) { m_Signaltype = value; }

const std::string& Input::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void Input::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& Input::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void Input::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& Input::GetInterpolate() const { return m_Interpolate; }

void Input::SetInterpolate(const std::string& value) { m_Interpolate = value; }

const std::string& Input::GetInputconnect() const { return m_Inputconnect; }

void Input::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& Input::GetDatamode() const { return m_Datamode; }

void Input::SetDatamode(const std::string& value) { m_Datamode = value; }

const std::string& Input::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void Input::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& Input::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void Input::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& Input::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void Input::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& Input::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void Input::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& Input::GetEventtriggers() const { return m_Eventtriggers; }

void Input::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
