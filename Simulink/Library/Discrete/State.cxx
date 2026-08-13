#include "State.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

State::State() {}

State::~State() {}

const std::string& State::GetPort() const
{
    return m_Port;
}

void State::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& State::GetSignalname() const
{
    return m_Signalname;
}

void State::SetSignalname(const std::string& value)
{
    m_Signalname = value;
}

const std::string& State::GetSignalobject() const
{
    return m_Signalobject;
}

void State::SetSignalobject(const std::string& value)
{
    m_Signalobject = value;
}

const std::string& State::GetStorageclass() const
{
    return m_Storageclass;
}

void State::SetStorageclass(const std::string& value)
{
    m_Storageclass = value;
}

const std::string& State::GetIcondisplay() const
{
    return m_Icondisplay;
}

void State::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& State::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void State::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& State::GetOutmin() const
{
    return m_Outmin;
}

void State::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& State::GetOutmax() const
{
    return m_Outmax;
}

void State::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& State::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void State::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& State::GetLockscale() const
{
    return m_Lockscale;
}

void State::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& State::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void State::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& State::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void State::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& State::GetDatamode() const
{
    return m_Datamode;
}

void State::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& State::GetUnit() const
{
    return m_Unit;
}

void State::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& State::GetPortdimensions() const
{
    return m_Portdimensions;
}

void State::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& State::GetVarsizesig() const
{
    return m_Varsizesig;
}

void State::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& State::GetSampletime() const
{
    return m_Sampletime;
}

void State::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& State::GetSignaltype() const
{
    return m_Signaltype;
}

void State::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& State::GetEnsureoutportisvirtual() const
{
    return m_Ensureoutportisvirtual;
}

void State::SetEnsureoutportisvirtual(const std::string& value)
{
    m_Ensureoutportisvirtual = value;
}

const std::string& State::GetOutputwhendisabled() const
{
    return m_Outputwhendisabled;
}

void State::SetOutputwhendisabled(const std::string& value)
{
    m_Outputwhendisabled = value;
}

const std::string& State::GetInitialoutput() const
{
    return m_Initialoutput;
}

void State::SetInitialoutput(const std::string& value)
{
    m_Initialoutput = value;
}

const std::string& State::GetMustresolvetosignalobject() const
{
    return m_Mustresolvetosignalobject;
}

void State::SetMustresolvetosignalobject(const std::string& value)
{
    m_Mustresolvetosignalobject = value;
}

const std::string& State::GetOutputwhenunconnected() const
{
    return m_Outputwhenunconnected;
}

void State::SetOutputwhenunconnected(const std::string& value)
{
    m_Outputwhenunconnected = value;
}

const std::string& State::GetOutputwhenunconnectedvalue() const
{
    return m_Outputwhenunconnectedvalue;
}

void State::SetOutputwhenunconnectedvalue(const std::string& value)
{
    m_Outputwhenunconnectedvalue = value;
}

const std::string& State::GetVectorparamsas1dforoutwhenunconnected() const
{
    return m_Vectorparamsas1dforoutwhenunconnected;
}

void State::SetVectorparamsas1dforoutwhenunconnected(const std::string& value)
{
    m_Vectorparamsas1dforoutwhenunconnected = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
