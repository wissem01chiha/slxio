#include "X.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

X::X() {}

X::~X() {}

const std::string& X::GetPort() const
{
    return m_Port;
}

void X::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& X::GetSignalname() const
{
    return m_Signalname;
}

void X::SetSignalname(const std::string& value)
{
    m_Signalname = value;
}

const std::string& X::GetSignalobject() const
{
    return m_Signalobject;
}

void X::SetSignalobject(const std::string& value)
{
    m_Signalobject = value;
}

const std::string& X::GetStorageclass() const
{
    return m_Storageclass;
}

void X::SetStorageclass(const std::string& value)
{
    m_Storageclass = value;
}

const std::string& X::GetIcondisplay() const
{
    return m_Icondisplay;
}

void X::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& X::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void X::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& X::GetOutmin() const
{
    return m_Outmin;
}

void X::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& X::GetOutmax() const
{
    return m_Outmax;
}

void X::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& X::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void X::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& X::GetLockscale() const
{
    return m_Lockscale;
}

void X::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& X::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void X::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& X::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void X::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& X::GetDatamode() const
{
    return m_Datamode;
}

void X::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& X::GetUnit() const
{
    return m_Unit;
}

void X::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& X::GetPortdimensions() const
{
    return m_Portdimensions;
}

void X::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& X::GetVarsizesig() const
{
    return m_Varsizesig;
}

void X::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& X::GetSampletime() const
{
    return m_Sampletime;
}

void X::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& X::GetSignaltype() const
{
    return m_Signaltype;
}

void X::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& X::GetEnsureoutportisvirtual() const
{
    return m_Ensureoutportisvirtual;
}

void X::SetEnsureoutportisvirtual(const std::string& value)
{
    m_Ensureoutportisvirtual = value;
}

const std::string& X::GetOutputwhendisabled() const
{
    return m_Outputwhendisabled;
}

void X::SetOutputwhendisabled(const std::string& value)
{
    m_Outputwhendisabled = value;
}

const std::string& X::GetInitialoutput() const
{
    return m_Initialoutput;
}

void X::SetInitialoutput(const std::string& value)
{
    m_Initialoutput = value;
}

const std::string& X::GetMustresolvetosignalobject() const
{
    return m_Mustresolvetosignalobject;
}

void X::SetMustresolvetosignalobject(const std::string& value)
{
    m_Mustresolvetosignalobject = value;
}

const std::string& X::GetOutputwhenunconnected() const
{
    return m_Outputwhenunconnected;
}

void X::SetOutputwhenunconnected(const std::string& value)
{
    m_Outputwhenunconnected = value;
}

const std::string& X::GetOutputwhenunconnectedvalue() const
{
    return m_Outputwhenunconnectedvalue;
}

void X::SetOutputwhenunconnectedvalue(const std::string& value)
{
    m_Outputwhenunconnectedvalue = value;
}

const std::string& X::GetVectorparamsas1dforoutwhenunconnected() const
{
    return m_Vectorparamsas1dforoutwhenunconnected;
}

void X::SetVectorparamsas1dforoutwhenunconnected(const std::string& value)
{
    m_Vectorparamsas1dforoutwhenunconnected = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
