#include "FunctionElementCall.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FunctionElementCall::FunctionElementCall() {}

FunctionElementCall::~FunctionElementCall() {}

const std::string& FunctionElementCall::GetPort() const
{
    return m_Port;
}

void FunctionElementCall::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& FunctionElementCall::GetPortname() const
{
    return m_Portname;
}

void FunctionElementCall::SetPortname(const std::string& value)
{
    m_Portname = value;
}

const std::string& FunctionElementCall::GetElement() const
{
    return m_Element;
}

void FunctionElementCall::SetElement(const std::string& value)
{
    m_Element = value;
}

const std::string& FunctionElementCall::GetIsbuselementport() const
{
    return m_Isbuselementport;
}

void FunctionElementCall::SetIsbuselementport(const std::string& value)
{
    m_Isbuselementport = value;
}

const std::string& FunctionElementCall::GetIcondisplay() const
{
    return m_Icondisplay;
}

void FunctionElementCall::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& FunctionElementCall::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void FunctionElementCall::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& FunctionElementCall::GetOutmin() const
{
    return m_Outmin;
}

void FunctionElementCall::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& FunctionElementCall::GetOutmax() const
{
    return m_Outmax;
}

void FunctionElementCall::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& FunctionElementCall::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void FunctionElementCall::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& FunctionElementCall::GetLockscale() const
{
    return m_Lockscale;
}

void FunctionElementCall::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& FunctionElementCall::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void FunctionElementCall::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& FunctionElementCall::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void FunctionElementCall::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& FunctionElementCall::GetUnit() const
{
    return m_Unit;
}

void FunctionElementCall::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& FunctionElementCall::GetPortdimensions() const
{
    return m_Portdimensions;
}

void FunctionElementCall::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& FunctionElementCall::GetVarsizesig() const
{
    return m_Varsizesig;
}

void FunctionElementCall::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& FunctionElementCall::GetSampletime() const
{
    return m_Sampletime;
}

void FunctionElementCall::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& FunctionElementCall::GetSignaltype() const
{
    return m_Signaltype;
}

void FunctionElementCall::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& FunctionElementCall::GetLatchbydelayingoutsidesignal() const
{
    return m_Latchbydelayingoutsidesignal;
}

void FunctionElementCall::SetLatchbydelayingoutsidesignal(const std::string& value)
{
    m_Latchbydelayingoutsidesignal = value;
}

const std::string& FunctionElementCall::GetLatchinputforfeedbacksignals() const
{
    return m_Latchinputforfeedbacksignals;
}

void FunctionElementCall::SetLatchinputforfeedbacksignals(const std::string& value)
{
    m_Latchinputforfeedbacksignals = value;
}

const std::string& FunctionElementCall::GetInterpolate() const
{
    return m_Interpolate;
}

void FunctionElementCall::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& FunctionElementCall::GetInputconnect() const
{
    return m_Inputconnect;
}

void FunctionElementCall::SetInputconnect(const std::string& value)
{
    m_Inputconnect = value;
}

const std::string& FunctionElementCall::GetDatamode() const
{
    return m_Datamode;
}

void FunctionElementCall::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& FunctionElementCall::GetMessagequeueusedefaultattributes() const
{
    return m_Messagequeueusedefaultattributes;
}

void FunctionElementCall::SetMessagequeueusedefaultattributes(const std::string& value)
{
    m_Messagequeueusedefaultattributes = value;
}

const std::string& FunctionElementCall::GetMessagequeuecapacity() const
{
    return m_Messagequeuecapacity;
}

void FunctionElementCall::SetMessagequeuecapacity(const std::string& value)
{
    m_Messagequeuecapacity = value;
}

const std::string& FunctionElementCall::GetMessagequeuetype() const
{
    return m_Messagequeuetype;
}

void FunctionElementCall::SetMessagequeuetype(const std::string& value)
{
    m_Messagequeuetype = value;
}

const std::string& FunctionElementCall::GetMessagequeueoverwriting() const
{
    return m_Messagequeueoverwriting;
}

void FunctionElementCall::SetMessagequeueoverwriting(const std::string& value)
{
    m_Messagequeueoverwriting = value;
}

const std::string& FunctionElementCall::GetEventtriggers() const
{
    return m_Eventtriggers;
}

void FunctionElementCall::SetEventtriggers(const std::string& value)
{
    m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
