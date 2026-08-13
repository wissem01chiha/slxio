#include "OutputFromLookupTable.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

OutputFromLookupTable::OutputFromLookupTable() {}

OutputFromLookupTable::~OutputFromLookupTable() {}

const std::string& OutputFromLookupTable::GetPort() const
{
    return m_Port;
}

void OutputFromLookupTable::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& OutputFromLookupTable::GetIcondisplay() const
{
    return m_Icondisplay;
}

void OutputFromLookupTable::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& OutputFromLookupTable::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void OutputFromLookupTable::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& OutputFromLookupTable::GetOutmin() const
{
    return m_Outmin;
}

void OutputFromLookupTable::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& OutputFromLookupTable::GetOutmax() const
{
    return m_Outmax;
}

void OutputFromLookupTable::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& OutputFromLookupTable::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void OutputFromLookupTable::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& OutputFromLookupTable::GetLockscale() const
{
    return m_Lockscale;
}

void OutputFromLookupTable::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& OutputFromLookupTable::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void OutputFromLookupTable::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& OutputFromLookupTable::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void OutputFromLookupTable::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& OutputFromLookupTable::GetUnit() const
{
    return m_Unit;
}

void OutputFromLookupTable::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& OutputFromLookupTable::GetPortdimensions() const
{
    return m_Portdimensions;
}

void OutputFromLookupTable::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& OutputFromLookupTable::GetVarsizesig() const
{
    return m_Varsizesig;
}

void OutputFromLookupTable::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& OutputFromLookupTable::GetSampletime() const
{
    return m_Sampletime;
}

void OutputFromLookupTable::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& OutputFromLookupTable::GetSignaltype() const
{
    return m_Signaltype;
}

void OutputFromLookupTable::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& OutputFromLookupTable::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void OutputFromLookupTable::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& OutputFromLookupTable::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void OutputFromLookupTable::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& OutputFromLookupTable::GetInterpolate() const
{
    return m_Interpolate;
}

void OutputFromLookupTable::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& OutputFromLookupTable::GetInputconnect() const
{
    return m_Inputconnect;
}

void OutputFromLookupTable::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& OutputFromLookupTable::GetDatamode() const
{
    return m_Datamode;
}

void OutputFromLookupTable::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& OutputFromLookupTable::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void OutputFromLookupTable::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& OutputFromLookupTable::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void OutputFromLookupTable::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& OutputFromLookupTable::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void OutputFromLookupTable::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& OutputFromLookupTable::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void OutputFromLookupTable::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& OutputFromLookupTable::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void OutputFromLookupTable::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
