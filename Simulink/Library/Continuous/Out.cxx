#include "Out.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Out::Out() {}

Out::~Out() {}

const std::string& Out::GetPort() const
{
    return m_Port;
}

void Out::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Out::GetSignalname() const
{
    return m_Signalname;
}

void Out::SetSignalname(const std::string& value)
{
    m_Signalname = value;
}

const std::string& Out::GetSignalobject() const
{
    return m_Signalobject;
}

void Out::SetSignalobject(const std::string& value)
{
    m_Signalobject = value;
}

const std::string& Out::GetStorageclass() const
{
    return m_Storageclass;
}

void Out::SetStorageclass(const std::string& value)
{
    m_Storageclass = value;
}

const std::string& Out::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Out::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Out::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Out::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Out::GetOutmin() const
{
    return m_Outmin;
}

void Out::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Out::GetOutmax() const
{
    return m_Outmax;
}

void Out::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Out::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Out::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Out::GetLockscale() const
{
    return m_Lockscale;
}

void Out::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Out::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Out::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Out::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Out::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Out::GetDatamode() const
{
    return m_Datamode;
}

void Out::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Out::GetUnit() const
{
    return m_Unit;
}

void Out::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Out::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Out::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Out::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Out::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Out::GetSampletime() const
{
    return m_Sampletime;
}

void Out::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Out::GetSignaltype() const
{
    return m_Signaltype;
}

void Out::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Out::GetEnsureoutportisvirtual() const
{
    return m_Ensureoutportisvirtual;
}

void Out::SetEnsureoutportisvirtual(const std::string& value)
{
    m_Ensureoutportisvirtual = value;
}

const std::string& Out::GetOutputwhendisabled() const
{
    return m_Outputwhendisabled;
}

void Out::SetOutputwhendisabled(const std::string& value)
{
    m_Outputwhendisabled = value;
}

const std::string& Out::GetInitialoutput() const
{
    return m_Initialoutput;
}

void Out::SetInitialoutput(const std::string& value)
{
    m_Initialoutput = value;
}

const std::string& Out::GetMustresolvetosignalobject() const
{
    return m_Mustresolvetosignalobject;
}

void Out::SetMustresolvetosignalobject(const std::string& value)
{
    m_Mustresolvetosignalobject = value;
}

const std::string& Out::GetOutputwhenunconnected() const
{
    return m_Outputwhenunconnected;
}

void Out::SetOutputwhenunconnected(const std::string& value)
{
    m_Outputwhenunconnected = value;
}

const std::string& Out::GetOutputwhenunconnectedvalue() const
{
    return m_Outputwhenunconnectedvalue;
}

void Out::SetOutputwhenunconnectedvalue(const std::string& value)
{
    m_Outputwhenunconnectedvalue = value;
}

const std::string& Out::GetVectorparamsas1dforoutwhenunconnected() const
{
    return m_Vectorparamsas1dforoutwhenunconnected;
}

void Out::SetVectorparamsas1dforoutwhenunconnected(const std::string& value)
{
    m_Vectorparamsas1dforoutwhenunconnected = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
