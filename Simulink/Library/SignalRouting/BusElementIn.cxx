#include "BusElementIn.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

BusElementIn::BusElementIn() {}

BusElementIn::~BusElementIn() {}

const std::string& BusElementIn::GetPort() const { return m_Port; }

void BusElementIn::SetPort(const std::string& value) { m_Port = value; }

const std::string& BusElementIn::GetPortname() const { return m_Portname; }

void BusElementIn::SetPortname(const std::string& value) { m_Portname = value; }

const std::string& BusElementIn::GetElement() const { return m_Element; }

void BusElementIn::SetElement(const std::string& value) { m_Element = value; }

const std::string& BusElementIn::GetIsbuselementport() const
{
    return m_Isbuselementport;
}

void BusElementIn::SetIsbuselementport(const std::string& value)
{
    m_Isbuselementport = value;
}

const std::string& BusElementIn::GetIcondisplay() const
{
    return m_Icondisplay;
}

void BusElementIn::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& BusElementIn::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void BusElementIn::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& BusElementIn::GetOutmin() const { return m_Outmin; }

void BusElementIn::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& BusElementIn::GetOutmax() const { return m_Outmax; }

void BusElementIn::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& BusElementIn::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void BusElementIn::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& BusElementIn::GetLockscale() const { return m_Lockscale; }

void BusElementIn::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& BusElementIn::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void BusElementIn::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& BusElementIn::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void BusElementIn::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& BusElementIn::GetUnit() const { return m_Unit; }

void BusElementIn::SetUnit(const std::string& value) { m_Unit = value; }

const std::string& BusElementIn::GetPortdimensions() const
{
    return m_Portdimensions;
}

void BusElementIn::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& BusElementIn::GetVarsizesig() const { return m_Varsizesig; }

void BusElementIn::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& BusElementIn::GetSampletime() const { return m_Sampletime; }

void BusElementIn::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& BusElementIn::GetSignaltype() const { return m_Signaltype; }

void BusElementIn::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& BusElementIn::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void BusElementIn::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& BusElementIn::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void BusElementIn::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& BusElementIn::GetInterpolate() const
{
    return m_Interpolate;
}

void BusElementIn::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& BusElementIn::GetInputconnect() const
{
    return m_Inputconnect;
}

void BusElementIn::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& BusElementIn::GetDatamode() const { return m_Datamode; }

void BusElementIn::SetDatamode(const std::string& value) { m_Datamode = value; }

const std::string& BusElementIn::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void BusElementIn::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& BusElementIn::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void BusElementIn::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& BusElementIn::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void BusElementIn::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& BusElementIn::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void BusElementIn::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& BusElementIn::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void BusElementIn::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
